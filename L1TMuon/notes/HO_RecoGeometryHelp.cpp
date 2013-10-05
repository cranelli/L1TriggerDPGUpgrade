void HcalRecHitsValidation::analyze(edm::Event const& ev, edm::EventSetup const& c) {

    edm::ESHandle<CaloGeometry> geometry ;  // Actually defined in HcalRecHitsValidation.h
    c.get<CaloGeometryRecord>().get (geometry);

<...>

    edm::Handle<HORecHitCollection> hocoll;
    ev.getByLabel(theHORecHitCollectionLabel, hocoll); // theHORecHitCollectionLabel   = cms.untracked.InputTag("horeco")

    for (HORecHitCollection::const_iterator j = hocoll->begin(); j != hocoll->end(); j++) {
      HcalDetId cell(j->id());
      const CaloCellGeometry* cellGeometry =
        geometry->getSubdetectorGeometry (cell)->getGeometry (cell) ;
      double eta   = cellGeometry->getPosition().eta () ;
      double phi   = cellGeometry->getPosition().phi () ;
