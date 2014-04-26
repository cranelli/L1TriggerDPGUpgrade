//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Apr 13 17:55:00 2014 by ROOT version 5.34/10
// from TTree Events/
// found on file: ../../RootFiles/SingleMu14Pt_PostLS1_Barrel_GEN_SIM_DIGI_L1_RECO.root
//////////////////////////////////////////////////////////

#ifndef HOMuon_TreeLoop_ClusterInves_Plotter_h
#define HOMuon_TreeLoop_ClusterInves_Plotter_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxcsctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1 = 1;
const Int_t kMaxcsctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1 = 1;
const Int_t kMaxClusterSummary_clusterSummaryProducer__L1 = 1;
const Int_t kMaxCrossingFramePlaybackInfoExtended_mix__L1 = 1;
const Int_t kMaxEBDigiCollection_simEcalDigis_ebDigis_L1 = 1;
const Int_t kMaxEBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1 = 1;
const Int_t kMaxEEDigiCollection_simEcalDigis_eeDigis_L1 = 1;
const Int_t kMaxEEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1 = 1;
const Int_t kMaxESDigiCollection_simEcalPreshowerDigis__L1 = 1;
const Int_t kMaxEcalTrigPrimCompactColl_ecalCompactTrigPrim__L1 = 1;
const Int_t kMaxFEDRawDataCollection_rawDataCollector__L1 = 1;
const Int_t kMaxGenEventInfoProduct_generator__L1 = 1;
const Int_t kMaxHcalNoiseSummary_hcalnoise__L1 = 1;
const Int_t kMaxHcalUnpackerReport_castorDigis__L1 = 1;
const Int_t kMaxHcalUnpackerReport_hcalDigis__L1 = 1;
const Int_t kMaxL1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1 = 1;
const Int_t kMaxL1GlobalTriggerEvmReadoutRecord_simGtDigis__L1 = 1;
const Int_t kMaxL1GlobalTriggerObjectMapRecord_simGtDigis__L1 = 1;
const Int_t kMaxL1GlobalTriggerReadoutRecord_gtDigis__L1 = 1;
const Int_t kMaxL1GlobalTriggerReadoutRecord_simGtDigis__L1 = 1;
const Int_t kMaxL1MuDTChambPhContainer_dttfDigis__L1 = 1;
const Int_t kMaxL1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxL1MuDTChambThContainer_dttfDigis__L1 = 1;
const Int_t kMaxL1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxL1MuDTTrackContainer_dttfDigis_DATA_L1 = 1;
const Int_t kMaxL1MuDTTrackContainer_simDttfDigis_DTTF_L1 = 1;
const Int_t kMaxL1MuGMTReadoutCollection_gtDigis__L1 = 1;
const Int_t kMaxL1MuGMTReadoutCollection_simGmtDigis__L1 = 1;
const Int_t kMaxCSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxCSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxCSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1 = 1;
const Int_t kMaxCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1 = 1;
const Int_t kMaxCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1 = 1;
const Int_t kMaxCSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1 = 1;
const Int_t kMaxCSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1 = 1;
const Int_t kMaxCSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxDTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1 = 1;
const Int_t kMaxDTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1 = 1;
const Int_t kMaxRPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoAll__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoFastjetAll__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoFastjetAllCalo__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoFastjetCentralCalo__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoFastjetCentralChargedPileUp__L1 = 1;
const Int_t kMaxdouble_fixedGridRhoFastjetCentralNeutral__L1 = 1;
const Int_t kMaxdouble_ak4CaloJets_rho_L1 = 1;
const Int_t kMaxdouble_ak4GenJets_rho_L1 = 1;
const Int_t kMaxdouble_ak4PFJetsCHS_rho_L1 = 1;
const Int_t kMaxdouble_ak5CaloJets_rho_L1 = 1;
const Int_t kMaxdouble_ak5GenJets_rho_L1 = 1;
const Int_t kMaxdouble_ak5PFJets_rho_L1 = 1;
const Int_t kMaxdouble_ak5PFJetsCHS_rho_L1 = 1;
const Int_t kMaxdouble_ak5TrackJets_rho_L1 = 1;
const Int_t kMaxdouble_ak7BasicJets_rho_L1 = 1;
const Int_t kMaxdouble_ak8PFJets_rho_L1 = 1;
const Int_t kMaxdouble_ak8PFJetsCHS_rho_L1 = 1;
const Int_t kMaxdouble_ca8PFJetsCHS_rho_L1 = 1;
const Int_t kMaxdouble_ca8PFJetsCHSPruned_rho_L1 = 1;
const Int_t kMaxdouble_cmsTopTagPFJetsCHS_rho_L1 = 1;
const Int_t kMaxdouble_iterativeCone5GenJets_rho_L1 = 1;
const Int_t kMaxdouble_kt4GenJets_rho_L1 = 1;
const Int_t kMaxdouble_kt6GenJets_rho_L1 = 1;
const Int_t kMaxdouble_ak4CaloJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak4GenJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak4PFJetsCHS_sigma_L1 = 1;
const Int_t kMaxdouble_ak5CaloJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak5GenJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak5PFJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak5PFJetsCHS_sigma_L1 = 1;
const Int_t kMaxdouble_ak5TrackJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak7BasicJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak8PFJets_sigma_L1 = 1;
const Int_t kMaxdouble_ak8PFJetsCHS_sigma_L1 = 1;
const Int_t kMaxdouble_ca8PFJetsCHS_sigma_L1 = 1;
const Int_t kMaxdouble_ca8PFJetsCHSPruned_sigma_L1 = 1;
const Int_t kMaxdouble_cmsTopTagPFJetsCHS_sigma_L1 = 1;
const Int_t kMaxdouble_iterativeCone5GenJets_sigma_L1 = 1;
const Int_t kMaxdouble_kt4GenJets_sigma_L1 = 1;
const Int_t kMaxdouble_kt6GenJets_sigma_L1 = 1;
const Int_t kMaxrecoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1 = 1;
const Int_t kMaxrecoTracksToOnerecoTracksAssociation_tevMuons_default_L1 = 1;
const Int_t kMaxrecoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1 = 1;
const Int_t kMaxrecoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1 = 1;
const Int_t kMaxrecoTracksToOnerecoTracksAssociation_tevMuons_picky_L1 = 1;
const Int_t kMaxrecoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1 = 1;
const Int_t kMaxrecoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1 = 1;
const Int_t kMaxPixelDigiedmDetSetVector_simSiPixelDigis__L1 = 1;
const Int_t kMaxPixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1 = 1;
const Int_t kMaxRPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1 = 1;
const Int_t kMaxSiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1 = 1;
const Int_t kMaxSiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1 = 1;
const Int_t kMaxSiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1 = 1;
const Int_t kMaxSiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1 = 1;
const Int_t kMaxStripDigiSimLinkedmDetSetVector_simSiStripDigis__L1 = 1;
const Int_t kMaxStripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1 = 1;
const Int_t kMaxStripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1 = 1;
const Int_t kMaxDetIdedmEDCollection_siPixelDigis__L1 = 1;
const Int_t kMaxDetIdedmEDCollection_siStripDigis__L1 = 1;
const Int_t kMaxDetIdedmEDCollection_siPixelDigis_UserErrorModules_L1 = 1;
const Int_t kMaxedmHepMCProduct_generator__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_ckfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_ckfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_conversionStepTracks__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_cosmicMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_cosmicMuons1Leg__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_electronGsfTracks__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_generalTracks__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_globalCosmicMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_globalCosmicMuons1Leg__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_globalMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_globalSETMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_pixelTracks__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_refittedStandAloneMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_regionalCosmicTracks__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_standAloneMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_standAloneSETMuons__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_tevMuons_default_L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_tevMuons_dyt_L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_tevMuons_firstHit_L1 = 1;
const Int_t kMaxTrackingRecHitsOwned_tevMuons_picky_L1 = 1;
const Int_t kMaxedmRandomEngineStates_randomEngineStateProducer__L1 = 1;
const Int_t kMaxCSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1 = 1;
const Int_t kMaxCSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1 = 1;
const Int_t kMaxDTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1 = 1;
const Int_t kMaxDTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1 = 1;
const Int_t kMaxDTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1 = 1;
const Int_t kMaxDTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1 = 1;
const Int_t kMaxRPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1 = 1;
const Int_t kMaxCaloTowersSorted_towerMaker__L1 = 1;
const Int_t kMaxCastorRecHitsSorted_castorreco__L1 = 1;
const Int_t kMaxEBSrFlagsSorted_simEcalDigis_ebSrFlags_L1 = 1;
const Int_t kMaxEESrFlagsSorted_simEcalDigis_eeSrFlags_L1 = 1;
const Int_t kMaxEcalRecHitsSorted_reducedEcalRecHitsEB__L1 = 1;
const Int_t kMaxEcalRecHitsSorted_reducedEcalRecHitsEE__L1 = 1;
const Int_t kMaxEcalRecHitsSorted_reducedEcalRecHitsES__L1 = 1;
const Int_t kMaxEcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1 = 1;
const Int_t kMaxEcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1 = 1;
const Int_t kMaxEcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1 = 1;
const Int_t kMaxEcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1 = 1;
const Int_t kMaxEcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxHBHEDataFramesSorted_simHcalDigis__L1 = 1;
const Int_t kMaxHBHERecHitsSorted_hbhereco__L1 = 1;
const Int_t kMaxHBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1 = 1;
const Int_t kMaxHFDataFramesSorted_simHcalDigis__L1 = 1;
const Int_t kMaxHFRecHitsSorted_hfreco__L1 = 1;
const Int_t kMaxHFRecHitsSorted_reducedHcalRecHits_hfreco_L1 = 1;
const Int_t kMaxHODataFramesSorted_simHcalDigis__L1 = 1;
const Int_t kMaxHORecHitsSorted_horeco__L1 = 1;
const Int_t kMaxHORecHitsSorted_reducedHcalRecHits_horeco_L1 = 1;
const Int_t kMaxHcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1 = 1;
const Int_t kMaxHcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1 = 1;
const Int_t kMaxHcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1 = 1;
const Int_t kMaxZDCDataFramesSorted_hcalDigis__L1 = 1;
const Int_t kMaxZDCDataFramesSorted_simHcalUnsuppressedDigis__L1 = 1;
const Int_t kMaxZDCRecHitsSorted_zdcreco__L1 = 1;
const Int_t kMaxedmTriggerResults_TriggerResults__L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1 = 1;
const Int_t kMaxbooledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidAllArbitrated_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidGMStaChiCompatibility_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidGMTkChiCompatibility_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidGMTkKinkTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidGlobalMuonPromptTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidRPCMuLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTM2DCompatibilityLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTM2DCompatibilityTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationAngLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationAngTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMLastStationTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMOneStationAngLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMOneStationAngTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMOneStationLoose_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTMOneStationTight_L1 = 1;
const Int_t kMaxbooledmValueMap_muons_muidTrackerMuonArbitrated_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1 = 1;
const Int_t kMaxdoubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1 = 1;
const Int_t kMaxrecoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1 = 1;
const Int_t kMaxrecoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1 = 1;
const Int_t kMaxrecoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1 = 1;
const Int_t kMaxrecoPFCandidateedmPtredmValueMap_particleFlow_muons_L1 = 1;
const Int_t kMaxrecoPFCandidateedmPtredmValueMap_particleFlow_photons_L1 = 1;
const Int_t kMaxrecoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1 = 1;
const Int_t kMaxrecoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1 = 1;
const Int_t kMaxfloatedmValueMap_eidLoose__L1 = 1;
const Int_t kMaxfloatedmValueMap_eidRobustHighEnergy__L1 = 1;
const Int_t kMaxfloatedmValueMap_eidRobustLoose__L1 = 1;
const Int_t kMaxfloatedmValueMap_eidRobustTight__L1 = 1;
const Int_t kMaxfloatedmValueMap_eidTight__L1 = 1;
const Int_t kMaxfloatedmValueMap_generalTracks_MVAVals_L1 = 1;
const Int_t kMaxrecoCastorJetIDedmValueMap_ak7CastorJetID__L1 = 1;
const Int_t kMaxrecoDeDxDataedmValueMap_dedxDiscrimASmi__L1 = 1;
const Int_t kMaxrecoDeDxDataedmValueMap_dedxHarmonic2__L1 = 1;
const Int_t kMaxrecoDeDxDataedmValueMap_dedxTruncated40__L1 = 1;
const Int_t kMaxrecoIsoDepositedmValueMap_muIsoDepositJets__L1 = 1;
const Int_t kMaxrecoIsoDepositedmValueMap_muIsoDepositTk__L1 = 1;
const Int_t kMaxrecoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1 = 1;
const Int_t kMaxrecoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1 = 1;
const Int_t kMaxrecoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1 = 1;
const Int_t kMaxrecoJetIDedmValueMap_ak5JetID__L1 = 1;
const Int_t kMaxrecoJetIDedmValueMap_ak7JetID__L1 = 1;
const Int_t kMaxrecoJetIDedmValueMap_ic5JetID__L1 = 1;
const Int_t kMaxrecoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1 = 1;
const Int_t kMaxrecoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1 = 1;
const Int_t kMaxrecoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1 = 1;
const Int_t kMaxrecoMuonShoweredmValueMap_muons_muonShowerInformation_L1 = 1;
const Int_t kMaxrecoMuonTimeExtraedmValueMap_muons_combined_L1 = 1;
const Int_t kMaxrecoMuonTimeExtraedmValueMap_muons_csc_L1 = 1;
const Int_t kMaxrecoMuonTimeExtraedmValueMap_muons_dt_L1 = 1;
const Int_t kMaxrecoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1 = 1;
const Int_t kMaxrecoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1 = 1;
const Int_t kMaxuintedmValueMap_muons_cosmicsVeto_L1 = 1;
const Int_t kMaxSiPixelClusteredmNewDetSetVector_siPixelClusters__L1 = 1;
const Int_t kMaxSiStripClusteredmNewDetSetVector_siStripClusters__L1 = 1;
const Int_t kMaxrecoBeamHaloSummary_BeamHaloSummary__L1 = 1;
const Int_t kMaxrecoBeamSpot_offlineBeamSpot__L1 = 1;
const Int_t kMaxrecoCSCHaloData_CSCHaloData__L1 = 1;
const Int_t kMaxrecoEcalHaloData_EcalHaloData__L1 = 1;
const Int_t kMaxrecoGlobalHaloData_GlobalHaloData__L1 = 1;
const Int_t kMaxrecoHcalHaloData_HcalHaloData__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1 = 1;
const Int_t kMaxrecoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1 = 1;
const Int_t kMaxintL1CSCSPStatusDigisstdpair_csctfDigis__L1 = 1;
const Int_t kMaxBeamSpotOnlines_scalersRawToDigi__L1 = 1;
const Int_t kMaxDcsStatuss_scalersRawToDigi__L1 = 1;
const Int_t kMaxL1AcceptBunchCrossings_scalersRawToDigi__L1 = 1;
const Int_t kMaxL1CaloEmCands_gctDigis__L1 = 1;
const Int_t kMaxL1CaloEmCands_simRctDigis__L1 = 1;
const Int_t kMaxL1CaloRegions_gctDigis__L1 = 1;
const Int_t kMaxL1CaloRegions_simRctDigis__L1 = 1;
const Int_t kMaxL1GctEmCands_gctDigis_isoEm_L1 = 1;
const Int_t kMaxL1GctEmCands_simGctDigis_isoEm_L1 = 1;
const Int_t kMaxL1GctEmCands_gctDigis_nonIsoEm_L1 = 1;
const Int_t kMaxL1GctEmCands_simGctDigis_nonIsoEm_L1 = 1;
const Int_t kMaxL1GctEtHads_gctDigis__L1 = 1;
const Int_t kMaxL1GctEtHads_simGctDigis__L1 = 1;
const Int_t kMaxL1GctEtMisss_gctDigis__L1 = 1;
const Int_t kMaxL1GctEtMisss_simGctDigis__L1 = 1;
const Int_t kMaxL1GctEtTotals_gctDigis__L1 = 1;
const Int_t kMaxL1GctEtTotals_simGctDigis__L1 = 1;
const Int_t kMaxL1GctFibreWords_gctDigis__L1 = 1;
const Int_t kMaxL1GctHFBitCountss_gctDigis__L1 = 1;
const Int_t kMaxL1GctHFBitCountss_simGctDigis__L1 = 1;
const Int_t kMaxL1GctHFRingEtSumss_gctDigis__L1 = 1;
const Int_t kMaxL1GctHFRingEtSumss_simGctDigis__L1 = 1;
const Int_t kMaxL1GctHtMisss_gctDigis__L1 = 1;
const Int_t kMaxL1GctHtMisss_simGctDigis__L1 = 1;
const Int_t kMaxL1GctInternEmCands_gctDigis__L1 = 1;
const Int_t kMaxL1GctInternEtSums_gctDigis__L1 = 1;
const Int_t kMaxL1GctInternEtSums_simGctDigis__L1 = 1;
const Int_t kMaxL1GctInternHFDatas_gctDigis__L1 = 1;
const Int_t kMaxL1GctInternHtMisss_gctDigis__L1 = 1;
const Int_t kMaxL1GctInternHtMisss_simGctDigis__L1 = 1;
const Int_t kMaxL1GctInternJetDatas_gctDigis__L1 = 1;
const Int_t kMaxL1GctInternJetDatas_simGctDigis__L1 = 1;
const Int_t kMaxL1GctJetCands_gctDigis_cenJets_L1 = 1;
const Int_t kMaxL1GctJetCands_simGctDigis_cenJets_L1 = 1;
const Int_t kMaxL1GctJetCands_gctDigis_forJets_L1 = 1;
const Int_t kMaxL1GctJetCands_simGctDigis_forJets_L1 = 1;
const Int_t kMaxL1GctJetCands_gctDigis_tauJets_L1 = 1;
const Int_t kMaxL1GctJetCands_simGctDigis_tauJets_L1 = 1;
const Int_t kMaxL1GctJetCountss_gctDigis__L1 = 1;
const Int_t kMaxL1MuGMTCands_gtDigis__L1 = 1;
const Int_t kMaxL1MuGMTCands_simGmtDigis__L1 = 1;
const Int_t kMaxL1MuRegionalCands_gtDigis_CSC_L1 = 1;
const Int_t kMaxL1MuRegionalCands_simCsctfDigis_CSC_L1 = 1;
const Int_t kMaxL1MuRegionalCands_gtDigis_DT_L1 = 1;
const Int_t kMaxL1MuRegionalCands_simDttfDigis_DT_L1 = 1;
const Int_t kMaxL1MuRegionalCands_gtDigis_RPCb_L1 = 1;
const Int_t kMaxL1MuRegionalCands_simRpcTriggerDigis_RPCb_L1 = 1;
const Int_t kMaxL1MuRegionalCands_gtDigis_RPCf_L1 = 1;
const Int_t kMaxL1MuRegionalCands_simRpcTriggerDigis_RPCf_L1 = 1;
const Int_t kMaxL1TriggerErrors_gctDigis__L1 = 1;
const Int_t kMaxL1TriggerScalerss_scalersRawToDigi__L1 = 1;
const Int_t kMaxLevel1TriggerScalerss_scalersRawToDigi__L1 = 1;
const Int_t kMaxLumiScalerss_scalersRawToDigi__L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_CaloHitsTk_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_CastorBU_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_CastorFI_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_CastorPL_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_CastorTU_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_ChamberHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_EcalHitsEB_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_EcalHitsEE_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_EcalHitsES_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_EcalTBH4BeamHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_FibreHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_HcalHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_HcalTB06BeamHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_WedgeHits_L1 = 1;
const Int_t kMaxPCaloHits_g4SimHits_ZDCHITS_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_BSCHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_FP420SI_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_MuonCSCHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_MuonDTHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_MuonGEMHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_MuonRPCHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_PLTHits_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TotemHitsRP_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TotemHitsT1_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TotemHitsT2Gem_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTECHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTECLowTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTIBHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTIBLowTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTIDHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTIDLowTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTOBHighTof_L1 = 1;
const Int_t kMaxPSimHits_g4SimHits_TrackerHitsTOBLowTof_L1 = 1;
const Int_t kMaxPileupSummaryInfos_addPileupInfo__L1 = 1;
const Int_t kMaxRPCDigiL1Links_simRpcTriggerDigis_RPCb_L1 = 1;
const Int_t kMaxRPCDigiL1Links_simRpcTriggerDigis_RPCf_L1 = 1;
const Int_t kMaxSimTracks_g4SimHits__L1 = 1;
const Int_t kMaxSimVertexs_g4SimHits__L1 = 1;
const Int_t kMaxTrajectorySeeds_CosmicMuonSeed__L1 = 1;
const Int_t kMaxTrajectorySeeds_SETMuonSeed__L1 = 1;
const Int_t kMaxTrajectorySeeds_ancientMuonSeed__L1 = 1;
const Int_t kMaxdoubles_ak4CaloJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak4GenJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak4PFJetsCHS_rhos_L1 = 1;
const Int_t kMaxdoubles_ak5CaloJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak5GenJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak5PFJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak5PFJetsCHS_rhos_L1 = 1;
const Int_t kMaxdoubles_ak5TrackJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak7BasicJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak8PFJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak8PFJetsCHS_rhos_L1 = 1;
const Int_t kMaxdoubles_ca8PFJetsCHS_rhos_L1 = 1;
const Int_t kMaxdoubles_ca8PFJetsCHSPruned_rhos_L1 = 1;
const Int_t kMaxdoubles_cmsTopTagPFJetsCHS_rhos_L1 = 1;
const Int_t kMaxdoubles_iterativeCone5GenJets_rhos_L1 = 1;
const Int_t kMaxdoubles_kt4GenJets_rhos_L1 = 1;
const Int_t kMaxdoubles_kt6GenJets_rhos_L1 = 1;
const Int_t kMaxdoubles_ak4CaloJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak4GenJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak4PFJetsCHS_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak5CaloJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak5GenJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak5PFJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak5PFJetsCHS_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak5TrackJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak7BasicJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak8PFJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_ak8PFJetsCHS_sigmas_L1 = 1;
const Int_t kMaxdoubles_ca8PFJetsCHS_sigmas_L1 = 1;
const Int_t kMaxdoubles_ca8PFJetsCHSPruned_sigmas_L1 = 1;
const Int_t kMaxdoubles_cmsTopTagPFJetsCHS_sigmas_L1 = 1;
const Int_t kMaxdoubles_iterativeCone5GenJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_kt4GenJets_sigmas_L1 = 1;
const Int_t kMaxdoubles_kt6GenJets_sigmas_L1 = 1;
const Int_t kMaxedmErrorSummaryEntrys_logErrorHarvester__L1 = 1;
const Int_t kMaxrecoPFCandidateedmFwdPtrs_particleFlowPtrs__L1 = 1;
const Int_t kMaxrecoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1 = 1;
const Int_t kMaxints_genParticles__L1 = 1;
const Int_t kMaxrecoBasicJets_ak7BasicJets__L1 = 1;
const Int_t kMaxrecoBasicJets_ca8PFJetsCHSPruned__L1 = 1;
const Int_t kMaxrecoBasicJets_cmsTopTagPFJetsCHS__L1 = 1;
const Int_t kMaxrecoCaloClusters_hfEMClusters__L1 = 1;
const Int_t kMaxrecoCaloClusters_particleFlowEGamma_EBEEClusters_L1 = 1;
const Int_t kMaxrecoCaloClusters_particleFlowEGamma_ESClusters_L1 = 1;
const Int_t kMaxrecoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1 = 1;
const Int_t kMaxrecoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1 = 1;
const Int_t kMaxrecoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1 = 1;
const Int_t kMaxrecoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1 = 1;
const Int_t kMaxrecoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1 = 1;
const Int_t kMaxrecoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1 = 1;
const Int_t kMaxrecoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1 = 1;
const Int_t kMaxrecoCaloJets_ak4CaloJets__L1 = 1;
const Int_t kMaxrecoCaloJets_ak5CaloJets__L1 = 1;
const Int_t kMaxrecoCaloMETs_corMetGlobalMuons__L1 = 1;
const Int_t kMaxrecoCaloMETs_met__L1 = 1;
const Int_t kMaxrecoCaloMETs_metHO__L1 = 1;
const Int_t kMaxrecoCaloMETs_metNoHF__L1 = 1;
const Int_t kMaxrecoCaloMuons_calomuons__L1 = 1;
const Int_t kMaxrecoCastorTowers_CastorTowerReco__L1 = 1;
const Int_t kMaxrecoConversions_allConversions__L1 = 1;
const Int_t kMaxrecoConversions_conversions__L1 = 1;
const Int_t kMaxrecoConversions_gedPhotonCore__L1 = 1;
const Int_t kMaxrecoConversions_uncleanedOnlyAllConversions__L1 = 1;
const Int_t kMaxrecoElectronSeeds_electronMergedSeeds__L1 = 1;
const Int_t kMaxrecoGenJets_ak4GenJets__L1 = 1;
const Int_t kMaxrecoGenJets_ak5GenJets__L1 = 1;
const Int_t kMaxrecoGenJets_ak8GenJets__L1 = 1;
const Int_t kMaxrecoGenJets_iterativeCone5GenJets__L1 = 1;
const Int_t kMaxrecoGenJets_kt4GenJets__L1 = 1;
const Int_t kMaxrecoGenJets_kt6GenJets__L1 = 1;
const Int_t kMaxrecoGenMETs_genMetCalo__L1 = 1;
const Int_t kMaxrecoGenMETs_genMetCaloAndNonPrompt__L1 = 1;
const Int_t kMaxrecoGenMETs_genMetTrue__L1 = 1;
const Int_t kMaxrecoGenParticles_genParticles__L1 = 1;
const Int_t kMaxrecoGsfElectrons_gedGsfElectrons__L1 = 1;
const Int_t kMaxrecoGsfElectrons_uncleanedOnlyGsfElectrons__L1 = 1;
const Int_t kMaxrecoGsfElectronCores_gedGsfElectronCores__L1 = 1;
const Int_t kMaxrecoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1 = 1;
const Int_t kMaxrecoGsfTracks_electronGsfTracks__L1 = 1;
const Int_t kMaxrecoGsfTrackExtras_electronGsfTracks__L1 = 1;
const Int_t kMaxrecoHFEMClusterShapes_hfEMClusters__L1 = 1;
const Int_t kMaxrecoHcalNoiseRBXs_hcalnoise__L1 = 1;
const Int_t kMaxrecoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1 = 1;
const Int_t kMaxrecoMETs_tcMet__L1 = 1;
const Int_t kMaxrecoMETs_tcMetWithPFclusters__L1 = 1;
const Int_t kMaxrecoMuons_muons__L1 = 1;
const Int_t kMaxrecoMuons_muonsFromCosmics__L1 = 1;
const Int_t kMaxrecoMuons_muonsFromCosmics1Leg__L1 = 1;
const Int_t kMaxrecoPFBlocks_particleFlowBlock__L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlow__L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowEGamma__L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedHF_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1 = 1;
const Int_t kMaxrecoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1 = 1;
const Int_t kMaxrecoPFClusters_particleFlowClusterECAL__L1 = 1;
const Int_t kMaxrecoPFClusters_particleFlowClusterHCAL__L1 = 1;
const Int_t kMaxrecoPFClusters_particleFlowClusterHO__L1 = 1;
const Int_t kMaxrecoPFClusters_particleFlowClusterPS__L1 = 1;
const Int_t kMaxrecoPFDisplacedVertexs_particleFlowDisplacedVertex__L1 = 1;
const Int_t kMaxrecoPFJets_ak4PFJetsCHS__L1 = 1;
const Int_t kMaxrecoPFJets_ak5PFJets__L1 = 1;
const Int_t kMaxrecoPFJets_ak5PFJetsCHS__L1 = 1;
const Int_t kMaxrecoPFJets_ak8PFJets__L1 = 1;
const Int_t kMaxrecoPFJets_ak8PFJetsCHS__L1 = 1;
const Int_t kMaxrecoPFJets_ca8PFJetsCHS__L1 = 1;
const Int_t kMaxrecoPFJets_ca8PFJetsCHSPruned_SubJets_L1 = 1;
const Int_t kMaxrecoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1 = 1;
const Int_t kMaxrecoPFMETs_pfMet__L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterECAL_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterHCAL_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterHFEM_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterHO_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowClusterPS_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowRecHitECAL_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowRecHitHO_Cleaned_L1 = 1;
const Int_t kMaxrecoPFRecHits_particleFlowRecHitPS_Cleaned_L1 = 1;
const Int_t kMaxrecoPFTaus_hpsPFTauProducer__L1 = 1;
const Int_t kMaxrecoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1 = 1;
const Int_t kMaxrecoPhotons_gedPhotons__L1 = 1;
const Int_t kMaxrecoPhotons_mustachePhotons__L1 = 1;
const Int_t kMaxrecoPhotons_photons__L1 = 1;
const Int_t kMaxrecoPhotonCores_gedPhotonCore__L1 = 1;
const Int_t kMaxrecoPhotonCores_mustachePhotonCore__L1 = 1;
const Int_t kMaxrecoPhotonCores_photonCore__L1 = 1;
const Int_t kMaxrecoPreIds_trackerDrivenElectronSeeds_preid_L1 = 1;
const Int_t kMaxrecoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1 = 1;
const Int_t kMaxrecoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1 = 1;
const Int_t kMaxrecoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1 = 1;
const Int_t kMaxrecoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1 = 1;
const Int_t kMaxrecoRecoChargedRefCandidates_trackRefsForJets__L1 = 1;
const Int_t kMaxrecoRecoEcalCandidates_hfRecoEcalCandidate__L1 = 1;
const Int_t kMaxrecoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1 = 1;
const Int_t kMaxrecoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1 = 1;
const Int_t kMaxrecoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1 = 1;
const Int_t kMaxrecoSoftLeptonTagInfos_softPFElectronsTagInfos__L1 = 1;
const Int_t kMaxrecoSoftLeptonTagInfos_softPFMuonsTagInfos__L1 = 1;
const Int_t kMaxrecoSuperClusters_correctedHybridSuperClusters__L1 = 1;
const Int_t kMaxrecoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1 = 1;
const Int_t kMaxrecoSuperClusters_hfEMClusters__L1 = 1;
const Int_t kMaxrecoSuperClusters_hybridSuperClusters__L1 = 1;
const Int_t kMaxrecoSuperClusters_multi5x5SuperClustersWithPreshower__L1 = 1;
const Int_t kMaxrecoSuperClusters_particleFlowEGamma__L1 = 1;
const Int_t kMaxrecoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1 = 1;
const Int_t kMaxrecoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1 = 1;
const Int_t kMaxrecoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1 = 1;
const Int_t kMaxrecoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1 = 1;
const Int_t kMaxrecoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1 = 1;
const Int_t kMaxrecoTracks_ckfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTracks_ckfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTracks_conversionStepTracks__L1 = 1;
const Int_t kMaxrecoTracks_cosmicMuons__L1 = 1;
const Int_t kMaxrecoTracks_cosmicMuons1Leg__L1 = 1;
const Int_t kMaxrecoTracks_cosmicsVetoTracks__L1 = 1;
const Int_t kMaxrecoTracks_generalTracks__L1 = 1;
const Int_t kMaxrecoTracks_globalCosmicMuons__L1 = 1;
const Int_t kMaxrecoTracks_globalCosmicMuons1Leg__L1 = 1;
const Int_t kMaxrecoTracks_globalMuons__L1 = 1;
const Int_t kMaxrecoTracks_globalSETMuons__L1 = 1;
const Int_t kMaxrecoTracks_pixelTracks__L1 = 1;
const Int_t kMaxrecoTracks_refittedStandAloneMuons__L1 = 1;
const Int_t kMaxrecoTracks_regionalCosmicTracks__L1 = 1;
const Int_t kMaxrecoTracks_standAloneMuons__L1 = 1;
const Int_t kMaxrecoTracks_standAloneSETMuons__L1 = 1;
const Int_t kMaxrecoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1 = 1;
const Int_t kMaxrecoTracks_standAloneMuons_UpdatedAtVtx_L1 = 1;
const Int_t kMaxrecoTracks_standAloneSETMuons_UpdatedAtVtx_L1 = 1;
const Int_t kMaxrecoTracks_tevMuons_default_L1 = 1;
const Int_t kMaxrecoTracks_tevMuons_dyt_L1 = 1;
const Int_t kMaxrecoTracks_tevMuons_firstHit_L1 = 1;
const Int_t kMaxrecoTracks_impactParameterTagInfos_ghostTracks_L1 = 1;
const Int_t kMaxrecoTracks_tevMuons_picky_L1 = 1;
const Int_t kMaxrecoTrackExtras_ckfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTrackExtras_ckfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTrackExtras_conversionStepTracks__L1 = 1;
const Int_t kMaxrecoTrackExtras_cosmicMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_cosmicMuons1Leg__L1 = 1;
const Int_t kMaxrecoTrackExtras_electronGsfTracks__L1 = 1;
const Int_t kMaxrecoTrackExtras_generalTracks__L1 = 1;
const Int_t kMaxrecoTrackExtras_globalCosmicMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_globalCosmicMuons1Leg__L1 = 1;
const Int_t kMaxrecoTrackExtras_globalMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_globalSETMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_pixelTracks__L1 = 1;
const Int_t kMaxrecoTrackExtras_refittedStandAloneMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_regionalCosmicTracks__L1 = 1;
const Int_t kMaxrecoTrackExtras_standAloneMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_standAloneSETMuons__L1 = 1;
const Int_t kMaxrecoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1 = 1;
const Int_t kMaxrecoTrackExtras_tevMuons_default_L1 = 1;
const Int_t kMaxrecoTrackExtras_tevMuons_dyt_L1 = 1;
const Int_t kMaxrecoTrackExtras_tevMuons_firstHit_L1 = 1;
const Int_t kMaxrecoTrackExtras_tevMuons_picky_L1 = 1;
const Int_t kMaxrecoTrackExtrapolations_trackExtrapolator__L1 = 1;
const Int_t kMaxrecoTrackIPTagInfos_impactParameterTagInfos__L1 = 1;
const Int_t kMaxrecoTrackJets_ak5TrackJets__L1 = 1;
const Int_t kMaxrecoVertexs_offlinePrimaryVertices__L1 = 1;
const Int_t kMaxrecoVertexs_offlinePrimaryVerticesWithBS__L1 = 1;
const Int_t kMaxrecoVertexs_pixelVertices__L1 = 1;
const Int_t kMaxrecoVertexCompositeCandidates_generalV0Candidates_Kshort_L1 = 1;
const Int_t kMaxrecoVertexCompositeCandidates_generalV0Candidates_Lambda_L1 = 1;
const Int_t kMaxcscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1 = 1;
const Int_t kMaxcscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1 = 1;

class HOMuon_TreeLoop_ClusterInves_Plotter : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   edm::EventAuxiliary *EventAuxiliary;
   vector<edm::StoredProductProvenance> *EventProductProvenance;
   vector<edm::Hash<1> > *EventSelections;
   vector<unsigned short> *BranchListIndexes;
 //edm::Wrapper<CSCTriggerContainer<csctf::TrackStub> > *csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_;
   Bool_t          csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_present;
   CSCTriggerContainer<csctf::TrackStub> csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_obj;
 //edm::Wrapper<CSCTriggerContainer<csctf::TrackStub> > *csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_;
   Bool_t          csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_present;
   CSCTriggerContainer<csctf::TrackStub> csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_obj;
 //edm::Wrapper<ClusterSummary> *ClusterSummary_clusterSummaryProducer__L1_;
   Bool_t          ClusterSummary_clusterSummaryProducer__L1_present;
   ClusterSummary  ClusterSummary_clusterSummaryProducer__L1_obj;
 //edm::Wrapper<CrossingFramePlaybackInfoExtended> *CrossingFramePlaybackInfoExtended_mix__L1_;
   Bool_t          CrossingFramePlaybackInfoExtended_mix__L1_present;
   CrossingFramePlaybackInfoExtended CrossingFramePlaybackInfoExtended_mix__L1_obj;
 //edm::Wrapper<EBDigiCollection> *EBDigiCollection_simEcalDigis_ebDigis_L1_;
   Bool_t          EBDigiCollection_simEcalDigis_ebDigis_L1_present;
   EBDigiCollection EBDigiCollection_simEcalDigis_ebDigis_L1_obj;
 //edm::Wrapper<EBDigiCollection> *EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_;
   Bool_t          EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_present;
   EBDigiCollection EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_obj;
 //edm::Wrapper<EEDigiCollection> *EEDigiCollection_simEcalDigis_eeDigis_L1_;
   Bool_t          EEDigiCollection_simEcalDigis_eeDigis_L1_present;
   EEDigiCollection EEDigiCollection_simEcalDigis_eeDigis_L1_obj;
 //edm::Wrapper<EEDigiCollection> *EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_;
   Bool_t          EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_present;
   EEDigiCollection EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_obj;
 //edm::Wrapper<ESDigiCollection> *ESDigiCollection_simEcalPreshowerDigis__L1_;
   Bool_t          ESDigiCollection_simEcalPreshowerDigis__L1_present;
   ESDigiCollection ESDigiCollection_simEcalPreshowerDigis__L1_obj;
 //edm::Wrapper<EcalTrigPrimCompactColl> *EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_;
   Bool_t          EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_present;
   EcalTrigPrimCompactColl EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_obj;
 //edm::Wrapper<FEDRawDataCollection> *FEDRawDataCollection_rawDataCollector__L1_;
   Bool_t          FEDRawDataCollection_rawDataCollector__L1_present;
   FEDRawDataCollection FEDRawDataCollection_rawDataCollector__L1_obj;
 //edm::Wrapper<GenEventInfoProduct> *GenEventInfoProduct_generator__L1_;
   Bool_t          GenEventInfoProduct_generator__L1_present;
   GenEventInfoProduct GenEventInfoProduct_generator__L1_obj;
 //edm::Wrapper<HcalNoiseSummary> *HcalNoiseSummary_hcalnoise__L1_;
   Bool_t          HcalNoiseSummary_hcalnoise__L1_present;
   HcalNoiseSummary HcalNoiseSummary_hcalnoise__L1_obj;
 //edm::Wrapper<HcalUnpackerReport> *HcalUnpackerReport_castorDigis__L1_;
   Bool_t          HcalUnpackerReport_castorDigis__L1_present;
   HcalUnpackerReport HcalUnpackerReport_castorDigis__L1_obj;
 //edm::Wrapper<HcalUnpackerReport> *HcalUnpackerReport_hcalDigis__L1_;
   Bool_t          HcalUnpackerReport_hcalDigis__L1_present;
   HcalUnpackerReport HcalUnpackerReport_hcalDigis__L1_obj;
 //edm::Wrapper<L1GlobalTriggerEvmReadoutRecord> *L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_;
   Bool_t          L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_present;
   L1GlobalTriggerEvmReadoutRecord L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_obj;
 //edm::Wrapper<L1GlobalTriggerEvmReadoutRecord> *L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_;
   Bool_t          L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_present;
   L1GlobalTriggerEvmReadoutRecord L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_obj;
 //edm::Wrapper<L1GlobalTriggerObjectMapRecord> *L1GlobalTriggerObjectMapRecord_simGtDigis__L1_;
   Bool_t          L1GlobalTriggerObjectMapRecord_simGtDigis__L1_present;
   L1GlobalTriggerObjectMapRecord L1GlobalTriggerObjectMapRecord_simGtDigis__L1_obj;
 //edm::Wrapper<L1GlobalTriggerReadoutRecord> *L1GlobalTriggerReadoutRecord_gtDigis__L1_;
   Bool_t          L1GlobalTriggerReadoutRecord_gtDigis__L1_present;
   L1GlobalTriggerReadoutRecord L1GlobalTriggerReadoutRecord_gtDigis__L1_obj;
 //edm::Wrapper<L1GlobalTriggerReadoutRecord> *L1GlobalTriggerReadoutRecord_simGtDigis__L1_;
   Bool_t          L1GlobalTriggerReadoutRecord_simGtDigis__L1_present;
   L1GlobalTriggerReadoutRecord L1GlobalTriggerReadoutRecord_simGtDigis__L1_obj;
 //edm::Wrapper<L1MuDTChambPhContainer> *L1MuDTChambPhContainer_dttfDigis__L1_;
   Bool_t          L1MuDTChambPhContainer_dttfDigis__L1_present;
   L1MuDTChambPhContainer L1MuDTChambPhContainer_dttfDigis__L1_obj;
 //edm::Wrapper<L1MuDTChambPhContainer> *L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_;
   Bool_t          L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_present;
   L1MuDTChambPhContainer L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<L1MuDTChambThContainer> *L1MuDTChambThContainer_dttfDigis__L1_;
   Bool_t          L1MuDTChambThContainer_dttfDigis__L1_present;
   L1MuDTChambThContainer L1MuDTChambThContainer_dttfDigis__L1_obj;
 //edm::Wrapper<L1MuDTChambThContainer> *L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_;
   Bool_t          L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_present;
   L1MuDTChambThContainer L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<L1MuDTTrackContainer> *L1MuDTTrackContainer_dttfDigis_DATA_L1_;
   Bool_t          L1MuDTTrackContainer_dttfDigis_DATA_L1_present;
   L1MuDTTrackContainer L1MuDTTrackContainer_dttfDigis_DATA_L1_obj;
 //edm::Wrapper<L1MuDTTrackContainer> *L1MuDTTrackContainer_simDttfDigis_DTTF_L1_;
   Bool_t          L1MuDTTrackContainer_simDttfDigis_DTTF_L1_present;
   L1MuDTTrackContainer L1MuDTTrackContainer_simDttfDigis_DTTF_L1_obj;
 //edm::Wrapper<L1MuGMTReadoutCollection> *L1MuGMTReadoutCollection_gtDigis__L1_;
   Bool_t          L1MuGMTReadoutCollection_gtDigis__L1_present;
   L1MuGMTReadoutCollection L1MuGMTReadoutCollection_gtDigis__L1_obj;
 //edm::Wrapper<L1MuGMTReadoutCollection> *L1MuGMTReadoutCollection_simGmtDigis__L1_;
   Bool_t          L1MuGMTReadoutCollection_simGmtDigis__L1_present;
   L1MuGMTReadoutCollection L1MuGMTReadoutCollection_simGmtDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCALCTDigi> > *CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_;
   Bool_t          CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;
   MuonDigiCollection<CSCDetId,CSCALCTDigi> CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCCLCTDigi> > *CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_;
   Bool_t          CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;
   MuonDigiCollection<CSCDetId,CSCCLCTDigi> CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCComparatorDigi> > *CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_;
   Bool_t          CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_present;
   MuonDigiCollection<CSCDetId,CSCComparatorDigi> CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > *CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_;
   Bool_t          CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_present;
   MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > *CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_;
   Bool_t          CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;
   MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > *CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_;
   Bool_t          CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_present;
   MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCStripDigi> > *CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_;
   Bool_t          CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_present;
   MuonDigiCollection<CSCDetId,CSCStripDigi> CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,CSCWireDigi> > *CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_;
   Bool_t          CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_present;
   MuonDigiCollection<CSCDetId,CSCWireDigi> CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_obj;
 //edm::Wrapper<MuonDigiCollection<CSCDetId,int> > *CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_;
   Bool_t          CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;
   MuonDigiCollection<CSCDetId,int> CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<DTLayerId,DTDigi> > *DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_;
   Bool_t          DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_present;
   MuonDigiCollection<DTLayerId,DTDigi> DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<DTLayerId,DTDigiSimLink> > *DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_;
   Bool_t          DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_present;
   MuonDigiCollection<DTLayerId,DTDigiSimLink> DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_obj;
 //edm::Wrapper<MuonDigiCollection<RPCDetId,RPCDigi> > *RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_;
   Bool_t          RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_present;
   MuonDigiCollection<RPCDetId,RPCDigi> RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoAll__L1_;
   Bool_t          double_fixedGridRhoAll__L1_present;
   Double_t        double_fixedGridRhoAll__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetAll__L1_;
   Bool_t          double_fixedGridRhoFastjetAll__L1_present;
   Double_t        double_fixedGridRhoFastjetAll__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetAllCalo__L1_;
   Bool_t          double_fixedGridRhoFastjetAllCalo__L1_present;
   Double_t        double_fixedGridRhoFastjetAllCalo__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralCalo__L1_;
   Bool_t          double_fixedGridRhoFastjetCentralCalo__L1_present;
   Double_t        double_fixedGridRhoFastjetCentralCalo__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralChargedPileUp__L1_;
   Bool_t          double_fixedGridRhoFastjetCentralChargedPileUp__L1_present;
   Double_t        double_fixedGridRhoFastjetCentralChargedPileUp__L1_obj;
 //edm::Wrapper<double> *double_fixedGridRhoFastjetCentralNeutral__L1_;
   Bool_t          double_fixedGridRhoFastjetCentralNeutral__L1_present;
   Double_t        double_fixedGridRhoFastjetCentralNeutral__L1_obj;
 //edm::Wrapper<double> *double_ak4CaloJets_rho_L1_;
   Bool_t          double_ak4CaloJets_rho_L1_present;
   Double_t        double_ak4CaloJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak4GenJets_rho_L1_;
   Bool_t          double_ak4GenJets_rho_L1_present;
   Double_t        double_ak4GenJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak4PFJetsCHS_rho_L1_;
   Bool_t          double_ak4PFJetsCHS_rho_L1_present;
   Double_t        double_ak4PFJetsCHS_rho_L1_obj;
 //edm::Wrapper<double> *double_ak5CaloJets_rho_L1_;
   Bool_t          double_ak5CaloJets_rho_L1_present;
   Double_t        double_ak5CaloJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak5GenJets_rho_L1_;
   Bool_t          double_ak5GenJets_rho_L1_present;
   Double_t        double_ak5GenJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak5PFJets_rho_L1_;
   Bool_t          double_ak5PFJets_rho_L1_present;
   Double_t        double_ak5PFJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak5PFJetsCHS_rho_L1_;
   Bool_t          double_ak5PFJetsCHS_rho_L1_present;
   Double_t        double_ak5PFJetsCHS_rho_L1_obj;
 //edm::Wrapper<double> *double_ak5TrackJets_rho_L1_;
   Bool_t          double_ak5TrackJets_rho_L1_present;
   Double_t        double_ak5TrackJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak7BasicJets_rho_L1_;
   Bool_t          double_ak7BasicJets_rho_L1_present;
   Double_t        double_ak7BasicJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak8PFJets_rho_L1_;
   Bool_t          double_ak8PFJets_rho_L1_present;
   Double_t        double_ak8PFJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak8PFJetsCHS_rho_L1_;
   Bool_t          double_ak8PFJetsCHS_rho_L1_present;
   Double_t        double_ak8PFJetsCHS_rho_L1_obj;
 //edm::Wrapper<double> *double_ca8PFJetsCHS_rho_L1_;
   Bool_t          double_ca8PFJetsCHS_rho_L1_present;
   Double_t        double_ca8PFJetsCHS_rho_L1_obj;
 //edm::Wrapper<double> *double_ca8PFJetsCHSPruned_rho_L1_;
   Bool_t          double_ca8PFJetsCHSPruned_rho_L1_present;
   Double_t        double_ca8PFJetsCHSPruned_rho_L1_obj;
 //edm::Wrapper<double> *double_cmsTopTagPFJetsCHS_rho_L1_;
   Bool_t          double_cmsTopTagPFJetsCHS_rho_L1_present;
   Double_t        double_cmsTopTagPFJetsCHS_rho_L1_obj;
 //edm::Wrapper<double> *double_iterativeCone5GenJets_rho_L1_;
   Bool_t          double_iterativeCone5GenJets_rho_L1_present;
   Double_t        double_iterativeCone5GenJets_rho_L1_obj;
 //edm::Wrapper<double> *double_kt4GenJets_rho_L1_;
   Bool_t          double_kt4GenJets_rho_L1_present;
   Double_t        double_kt4GenJets_rho_L1_obj;
 //edm::Wrapper<double> *double_kt6GenJets_rho_L1_;
   Bool_t          double_kt6GenJets_rho_L1_present;
   Double_t        double_kt6GenJets_rho_L1_obj;
 //edm::Wrapper<double> *double_ak4CaloJets_sigma_L1_;
   Bool_t          double_ak4CaloJets_sigma_L1_present;
   Double_t        double_ak4CaloJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak4GenJets_sigma_L1_;
   Bool_t          double_ak4GenJets_sigma_L1_present;
   Double_t        double_ak4GenJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak4PFJetsCHS_sigma_L1_;
   Bool_t          double_ak4PFJetsCHS_sigma_L1_present;
   Double_t        double_ak4PFJetsCHS_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak5CaloJets_sigma_L1_;
   Bool_t          double_ak5CaloJets_sigma_L1_present;
   Double_t        double_ak5CaloJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak5GenJets_sigma_L1_;
   Bool_t          double_ak5GenJets_sigma_L1_present;
   Double_t        double_ak5GenJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak5PFJets_sigma_L1_;
   Bool_t          double_ak5PFJets_sigma_L1_present;
   Double_t        double_ak5PFJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak5PFJetsCHS_sigma_L1_;
   Bool_t          double_ak5PFJetsCHS_sigma_L1_present;
   Double_t        double_ak5PFJetsCHS_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak5TrackJets_sigma_L1_;
   Bool_t          double_ak5TrackJets_sigma_L1_present;
   Double_t        double_ak5TrackJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak7BasicJets_sigma_L1_;
   Bool_t          double_ak7BasicJets_sigma_L1_present;
   Double_t        double_ak7BasicJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak8PFJets_sigma_L1_;
   Bool_t          double_ak8PFJets_sigma_L1_present;
   Double_t        double_ak8PFJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_ak8PFJetsCHS_sigma_L1_;
   Bool_t          double_ak8PFJetsCHS_sigma_L1_present;
   Double_t        double_ak8PFJetsCHS_sigma_L1_obj;
 //edm::Wrapper<double> *double_ca8PFJetsCHS_sigma_L1_;
   Bool_t          double_ca8PFJetsCHS_sigma_L1_present;
   Double_t        double_ca8PFJetsCHS_sigma_L1_obj;
 //edm::Wrapper<double> *double_ca8PFJetsCHSPruned_sigma_L1_;
   Bool_t          double_ca8PFJetsCHSPruned_sigma_L1_present;
   Double_t        double_ca8PFJetsCHSPruned_sigma_L1_obj;
 //edm::Wrapper<double> *double_cmsTopTagPFJetsCHS_sigma_L1_;
   Bool_t          double_cmsTopTagPFJetsCHS_sigma_L1_present;
   Double_t        double_cmsTopTagPFJetsCHS_sigma_L1_obj;
 //edm::Wrapper<double> *double_iterativeCone5GenJets_sigma_L1_;
   Bool_t          double_iterativeCone5GenJets_sigma_L1_present;
   Double_t        double_iterativeCone5GenJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_kt4GenJets_sigma_L1_;
   Bool_t          double_kt4GenJets_sigma_L1_present;
   Double_t        double_kt4GenJets_sigma_L1_obj;
 //edm::Wrapper<double> *double_kt6GenJets_sigma_L1_;
   Bool_t          double_kt6GenJets_sigma_L1_present;
   Double_t        double_kt6GenJets_sigma_L1_obj;
 //edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::SuperCluster>,vector<reco::HFEMClusterShape>,unsigned int> > > *recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_;
   Bool_t          recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_present;
   edm::AssociationMap<edm::OneToOne<vector<reco::SuperCluster>,vector<reco::HFEMClusterShape>,unsigned int> > recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_obj;
 //edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > *recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_;
   Bool_t          recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_present;
   edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_obj;
 //edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > *recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_;
   Bool_t          recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_present;
   edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_obj;
 //edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > *recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_;
   Bool_t          recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_present;
   edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_obj;
 //edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > *recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_;
   Bool_t          recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_present;
   edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::PFTau> >,vector<edm::Ref<vector<reco::PFTauTransverseImpactParameter>,reco::PFTauTransverseImpactParameter,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTransverseImpactParameter>,reco::PFTauTransverseImpactParameter> > >,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_;
   Bool_t          recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_present;
   edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::PFTau> >,vector<edm::Ref<vector<reco::PFTauTransverseImpactParameter>,reco::PFTauTransverseImpactParameter,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTransverseImpactParameter>,reco::PFTauTransverseImpactParameter> > >,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> > recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_;
   Bool_t          recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_;
   Bool_t          recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_;
   Bool_t          recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_;
   Bool_t          recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_;
   Bool_t          recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<float>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_obj;
 //edm::Wrapper<edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<reco::JetExtendedAssociation::JetExtendedData>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_;
   Bool_t          recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_present;
   edm::AssociationVector<edm::RefToBaseProd<reco::Jet>,vector<reco::JetExtendedAssociation::JetExtendedData>,edm::RefToBase<reco::Jet>,unsigned int,edm::helper::AssociationIdenticalKeyReference> recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_obj;
 //edm::Wrapper<edm::DetSetVector<PixelDigi> > *PixelDigiedmDetSetVector_simSiPixelDigis__L1_;
   Bool_t          PixelDigiedmDetSetVector_simSiPixelDigis__L1_present;
   edm::DetSetVector<PixelDigi> PixelDigiedmDetSetVector_simSiPixelDigis__L1_obj;
 //edm::Wrapper<edm::DetSetVector<PixelDigiSimLink> > *PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_;
   Bool_t          PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_present;
   edm::DetSetVector<PixelDigiSimLink> PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_obj;
 //edm::Wrapper<edm::DetSetVector<RPCDigiSimLink> > *RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_;
   Bool_t          RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_present;
   edm::DetSetVector<RPCDigiSimLink> RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_obj;
 //edm::Wrapper<edm::DetSetVector<SiStripDigi> > *SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_;
   Bool_t          SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_present;
   edm::DetSetVector<SiStripDigi> SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_obj;
 //edm::Wrapper<edm::DetSetVector<SiStripRawDigi> > *SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_;
   Bool_t          SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_present;
   edm::DetSetVector<SiStripRawDigi> SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_obj;
 //edm::Wrapper<edm::DetSetVector<SiStripRawDigi> > *SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_;
   Bool_t          SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_present;
   edm::DetSetVector<SiStripRawDigi> SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_obj;
 //edm::Wrapper<edm::DetSetVector<SiStripRawDigi> > *SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_;
   Bool_t          SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_present;
   edm::DetSetVector<SiStripRawDigi> SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_obj;
 //edm::Wrapper<edm::DetSetVector<StripDigiSimLink> > *StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_;
   Bool_t          StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_present;
   edm::DetSetVector<StripDigiSimLink> StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_obj;
 //edm::Wrapper<edm::DetSetVector<StripDigiSimLink> > *StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_;
   Bool_t          StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_present;
   edm::DetSetVector<StripDigiSimLink> StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_obj;
 //edm::Wrapper<edm::DetSetVector<StripDigiSimLink> > *StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_;
   Bool_t          StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_present;
   edm::DetSetVector<StripDigiSimLink> StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_obj;
 //edm::Wrapper<edm::EDCollection<DetId> > *DetIdedmEDCollection_siPixelDigis__L1_;
   Bool_t          DetIdedmEDCollection_siPixelDigis__L1_present;
   edm::EDCollection<DetId> DetIdedmEDCollection_siPixelDigis__L1_obj;
 //edm::Wrapper<edm::EDCollection<DetId> > *DetIdedmEDCollection_siStripDigis__L1_;
   Bool_t          DetIdedmEDCollection_siStripDigis__L1_present;
   edm::EDCollection<DetId> DetIdedmEDCollection_siStripDigis__L1_obj;
 //edm::Wrapper<edm::EDCollection<DetId> > *DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_;
   Bool_t          DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_present;
   edm::EDCollection<DetId> DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_obj;
 //edm::Wrapper<edm::HepMCProduct> *edmHepMCProduct_generator__L1_;
   Bool_t          edmHepMCProduct_generator__L1_present;
   edm::HepMCProduct edmHepMCProduct_generator__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_;
   Bool_t          TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_;
   Bool_t          TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_conversionStepTracks__L1_;
   Bool_t          TrackingRecHitsOwned_conversionStepTracks__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_conversionStepTracks__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_cosmicMuons__L1_;
   Bool_t          TrackingRecHitsOwned_cosmicMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_cosmicMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_cosmicMuons1Leg__L1_;
   Bool_t          TrackingRecHitsOwned_cosmicMuons1Leg__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_cosmicMuons1Leg__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_electronGsfTracks__L1_;
   Bool_t          TrackingRecHitsOwned_electronGsfTracks__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_electronGsfTracks__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_generalTracks__L1_;
   Bool_t          TrackingRecHitsOwned_generalTracks__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_generalTracks__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_globalCosmicMuons__L1_;
   Bool_t          TrackingRecHitsOwned_globalCosmicMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_globalCosmicMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_;
   Bool_t          TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_globalMuons__L1_;
   Bool_t          TrackingRecHitsOwned_globalMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_globalMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_globalSETMuons__L1_;
   Bool_t          TrackingRecHitsOwned_globalSETMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_globalSETMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_pixelTracks__L1_;
   Bool_t          TrackingRecHitsOwned_pixelTracks__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_pixelTracks__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_refittedStandAloneMuons__L1_;
   Bool_t          TrackingRecHitsOwned_refittedStandAloneMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_refittedStandAloneMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_regionalCosmicTracks__L1_;
   Bool_t          TrackingRecHitsOwned_regionalCosmicTracks__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_regionalCosmicTracks__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_standAloneMuons__L1_;
   Bool_t          TrackingRecHitsOwned_standAloneMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_standAloneMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_standAloneSETMuons__L1_;
   Bool_t          TrackingRecHitsOwned_standAloneSETMuons__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_standAloneSETMuons__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_;
   Bool_t          TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_;
   Bool_t          TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_tevMuons_default_L1_;
   Bool_t          TrackingRecHitsOwned_tevMuons_default_L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_tevMuons_default_L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_tevMuons_dyt_L1_;
   Bool_t          TrackingRecHitsOwned_tevMuons_dyt_L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_tevMuons_dyt_L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_tevMuons_firstHit_L1_;
   Bool_t          TrackingRecHitsOwned_tevMuons_firstHit_L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_tevMuons_firstHit_L1_obj;
 //edm::Wrapper<edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > > *TrackingRecHitsOwned_tevMuons_picky_L1_;
   Bool_t          TrackingRecHitsOwned_tevMuons_picky_L1_present;
   edm::OwnVector<TrackingRecHit,edm::ClonePolicy<TrackingRecHit> > TrackingRecHitsOwned_tevMuons_picky_L1_obj;
 //edm::Wrapper<edm::RandomEngineStates> *edmRandomEngineStates_randomEngineStateProducer__L1_;
   Bool_t          edmRandomEngineStates_randomEngineStateProducer__L1_present;
   edm::RandomEngineStates edmRandomEngineStates_randomEngineStateProducer__L1_obj;
 //edm::Wrapper<edm::RangeMap<CSCDetId,edm::OwnVector<CSCRecHit2D,edm::ClonePolicy<CSCRecHit2D> >,edm::ClonePolicy<CSCRecHit2D> > > *CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_;
   Bool_t          CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_present;
   edm::RangeMap<CSCDetId,edm::OwnVector<CSCRecHit2D,edm::ClonePolicy<CSCRecHit2D> >,edm::ClonePolicy<CSCRecHit2D> > CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_obj;
 //edm::Wrapper<edm::RangeMap<CSCDetId,edm::OwnVector<CSCSegment,edm::ClonePolicy<CSCSegment> >,edm::ClonePolicy<CSCSegment> > > *CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_;
   Bool_t          CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_present;
   edm::RangeMap<CSCDetId,edm::OwnVector<CSCSegment,edm::ClonePolicy<CSCSegment> >,edm::ClonePolicy<CSCSegment> > CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_obj;
 //edm::Wrapper<edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > > *DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_;
   Bool_t          DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_present;
   edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_obj;
 //edm::Wrapper<edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > > *DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_;
   Bool_t          DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_present;
   edm::RangeMap<DTChamberId,edm::OwnVector<DTRecSegment4D,edm::ClonePolicy<DTRecSegment4D> >,edm::ClonePolicy<DTRecSegment4D> > DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_obj;
 //edm::Wrapper<edm::RangeMap<DTLayerId,edm::OwnVector<DTRecHit1DPair,edm::ClonePolicy<DTRecHit1DPair> >,edm::ClonePolicy<DTRecHit1DPair> > > *DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_;
   Bool_t          DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_present;
   edm::RangeMap<DTLayerId,edm::OwnVector<DTRecHit1DPair,edm::ClonePolicy<DTRecHit1DPair> >,edm::ClonePolicy<DTRecHit1DPair> > DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_obj;
 //edm::Wrapper<edm::RangeMap<DTLayerId,edm::OwnVector<DTRecHit1DPair,edm::ClonePolicy<DTRecHit1DPair> >,edm::ClonePolicy<DTRecHit1DPair> > > *DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_;
   Bool_t          DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_present;
   edm::RangeMap<DTLayerId,edm::OwnVector<DTRecHit1DPair,edm::ClonePolicy<DTRecHit1DPair> >,edm::ClonePolicy<DTRecHit1DPair> > DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_obj;
 //edm::Wrapper<edm::RangeMap<RPCDetId,edm::OwnVector<RPCRecHit,edm::ClonePolicy<RPCRecHit> >,edm::ClonePolicy<RPCRecHit> > > *RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_;
   Bool_t          RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_present;
   edm::RangeMap<RPCDetId,edm::OwnVector<RPCRecHit,edm::ClonePolicy<RPCRecHit> >,edm::ClonePolicy<RPCRecHit> > RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_obj;
 //edm::Wrapper<edm::SortedCollection<CaloTower,edm::StrictWeakOrdering<CaloTower> > > *CaloTowersSorted_towerMaker__L1_;
   Bool_t          CaloTowersSorted_towerMaker__L1_present;
   edm::SortedCollection<CaloTower,edm::StrictWeakOrdering<CaloTower> > CaloTowersSorted_towerMaker__L1_obj;
 //edm::Wrapper<edm::SortedCollection<CastorRecHit,edm::StrictWeakOrdering<CastorRecHit> > > *CastorRecHitsSorted_castorreco__L1_;
   Bool_t          CastorRecHitsSorted_castorreco__L1_present;
   edm::SortedCollection<CastorRecHit,edm::StrictWeakOrdering<CastorRecHit> > CastorRecHitsSorted_castorreco__L1_obj;
 //edm::Wrapper<edm::SortedCollection<EBSrFlag,edm::StrictWeakOrdering<EBSrFlag> > > *EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_;
   Bool_t          EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_present;
   edm::SortedCollection<EBSrFlag,edm::StrictWeakOrdering<EBSrFlag> > EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_obj;
 //edm::Wrapper<edm::SortedCollection<EESrFlag,edm::StrictWeakOrdering<EESrFlag> > > *EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_;
   Bool_t          EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_present;
   edm::SortedCollection<EESrFlag,edm::StrictWeakOrdering<EESrFlag> > EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEcalRecHitsEB__L1_;
   Bool_t          EcalRecHitsSorted_reducedEcalRecHitsEB__L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_reducedEcalRecHitsEB__L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEcalRecHitsEE__L1_;
   Bool_t          EcalRecHitsSorted_reducedEcalRecHitsEE__L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_reducedEcalRecHitsEE__L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_reducedEcalRecHitsES__L1_;
   Bool_t          EcalRecHitsSorted_reducedEcalRecHitsES__L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_reducedEcalRecHitsES__L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_;
   Bool_t          EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_;
   Bool_t          EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > > *EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_;
   Bool_t          EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_present;
   edm::SortedCollection<EcalRecHit,edm::StrictWeakOrdering<EcalRecHit> > EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<EcalTriggerPrimitiveDigi> > > *EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_;
   Bool_t          EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_present;
   edm::SortedCollection<EcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<EcalTriggerPrimitiveDigi> > EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_obj;
 //edm::Wrapper<edm::SortedCollection<EcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<EcalTriggerPrimitiveDigi> > > *EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_;
   Bool_t          EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_present;
   edm::SortedCollection<EcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<EcalTriggerPrimitiveDigi> > EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HBHEDataFrame,edm::StrictWeakOrdering<HBHEDataFrame> > > *HBHEDataFramesSorted_simHcalDigis__L1_;
   Bool_t          HBHEDataFramesSorted_simHcalDigis__L1_present;
   edm::SortedCollection<HBHEDataFrame,edm::StrictWeakOrdering<HBHEDataFrame> > HBHEDataFramesSorted_simHcalDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > > *HBHERecHitsSorted_hbhereco__L1_;
   Bool_t          HBHERecHitsSorted_hbhereco__L1_present;
   edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > HBHERecHitsSorted_hbhereco__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > > *HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_;
   Bool_t          HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_present;
   edm::SortedCollection<HBHERecHit,edm::StrictWeakOrdering<HBHERecHit> > HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_obj;
 //edm::Wrapper<edm::SortedCollection<HFDataFrame,edm::StrictWeakOrdering<HFDataFrame> > > *HFDataFramesSorted_simHcalDigis__L1_;
   Bool_t          HFDataFramesSorted_simHcalDigis__L1_present;
   edm::SortedCollection<HFDataFrame,edm::StrictWeakOrdering<HFDataFrame> > HFDataFramesSorted_simHcalDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HFRecHit,edm::StrictWeakOrdering<HFRecHit> > > *HFRecHitsSorted_hfreco__L1_;
   Bool_t          HFRecHitsSorted_hfreco__L1_present;
   edm::SortedCollection<HFRecHit,edm::StrictWeakOrdering<HFRecHit> > HFRecHitsSorted_hfreco__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HFRecHit,edm::StrictWeakOrdering<HFRecHit> > > *HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_;
   Bool_t          HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_present;
   edm::SortedCollection<HFRecHit,edm::StrictWeakOrdering<HFRecHit> > HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_obj;
 //edm::Wrapper<edm::SortedCollection<HODataFrame,edm::StrictWeakOrdering<HODataFrame> > > *HODataFramesSorted_simHcalDigis__L1_;
   Bool_t          HODataFramesSorted_simHcalDigis__L1_present;
   edm::SortedCollection<HODataFrame,edm::StrictWeakOrdering<HODataFrame> > HODataFramesSorted_simHcalDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HORecHit,edm::StrictWeakOrdering<HORecHit> > > *HORecHitsSorted_horeco__L1_;
   Bool_t          HORecHitsSorted_horeco__L1_present;
   edm::SortedCollection<HORecHit,edm::StrictWeakOrdering<HORecHit> > HORecHitsSorted_horeco__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HORecHit,edm::StrictWeakOrdering<HORecHit> > > *HORecHitsSorted_reducedHcalRecHits_horeco_L1_;
   Bool_t          HORecHitsSorted_reducedHcalRecHits_horeco_L1_present;
   edm::SortedCollection<HORecHit,edm::StrictWeakOrdering<HORecHit> > HORecHitsSorted_reducedHcalRecHits_horeco_L1_obj;
 //edm::Wrapper<edm::SortedCollection<HcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<HcalTriggerPrimitiveDigi> > > *HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_;
   Bool_t          HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_present;
   edm::SortedCollection<HcalTriggerPrimitiveDigi,edm::StrictWeakOrdering<HcalTriggerPrimitiveDigi> > HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<HcalUpgradeDataFrame,edm::StrictWeakOrdering<HcalUpgradeDataFrame> > > *HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_;
   Bool_t          HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_present;
   edm::SortedCollection<HcalUpgradeDataFrame,edm::StrictWeakOrdering<HcalUpgradeDataFrame> > HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_obj;
 //edm::Wrapper<edm::SortedCollection<HcalUpgradeDataFrame,edm::StrictWeakOrdering<HcalUpgradeDataFrame> > > *HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_;
   Bool_t          HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_present;
   edm::SortedCollection<HcalUpgradeDataFrame,edm::StrictWeakOrdering<HcalUpgradeDataFrame> > HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_obj;
 //edm::Wrapper<edm::SortedCollection<ZDCDataFrame,edm::StrictWeakOrdering<ZDCDataFrame> > > *ZDCDataFramesSorted_hcalDigis__L1_;
   Bool_t          ZDCDataFramesSorted_hcalDigis__L1_present;
   edm::SortedCollection<ZDCDataFrame,edm::StrictWeakOrdering<ZDCDataFrame> > ZDCDataFramesSorted_hcalDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<ZDCDataFrame,edm::StrictWeakOrdering<ZDCDataFrame> > > *ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_;
   Bool_t          ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_present;
   edm::SortedCollection<ZDCDataFrame,edm::StrictWeakOrdering<ZDCDataFrame> > ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_obj;
 //edm::Wrapper<edm::SortedCollection<ZDCRecHit,edm::StrictWeakOrdering<ZDCRecHit> > > *ZDCRecHitsSorted_zdcreco__L1_;
   Bool_t          ZDCRecHitsSorted_zdcreco__L1_present;
   edm::SortedCollection<ZDCRecHit,edm::StrictWeakOrdering<ZDCRecHit> > ZDCRecHitsSorted_zdcreco__L1_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__L1_;
   Bool_t          edmTriggerResults_TriggerResults__L1_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_;
   Bool_t          booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_;
   Bool_t          booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_;
   Bool_t          booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_;
   Bool_t          booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_;
   Bool_t          booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_;
   Bool_t          booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidAllArbitrated_L1_;
   Bool_t          booledmValueMap_muons_muidAllArbitrated_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidAllArbitrated_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidGMStaChiCompatibility_L1_;
   Bool_t          booledmValueMap_muons_muidGMStaChiCompatibility_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidGMStaChiCompatibility_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidGMTkChiCompatibility_L1_;
   Bool_t          booledmValueMap_muons_muidGMTkChiCompatibility_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidGMTkChiCompatibility_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidGMTkKinkTight_L1_;
   Bool_t          booledmValueMap_muons_muidGMTkKinkTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidGMTkKinkTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidGlobalMuonPromptTight_L1_;
   Bool_t          booledmValueMap_muons_muidGlobalMuonPromptTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidGlobalMuonPromptTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidRPCMuLoose_L1_;
   Bool_t          booledmValueMap_muons_muidRPCMuLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidRPCMuLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTM2DCompatibilityTight_L1_;
   Bool_t          booledmValueMap_muons_muidTM2DCompatibilityTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTM2DCompatibilityTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationAngLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationAngLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationAngLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationAngTight_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationAngTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationAngTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMLastStationTight_L1_;
   Bool_t          booledmValueMap_muons_muidTMLastStationTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMLastStationTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMOneStationAngLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTMOneStationAngLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMOneStationAngLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMOneStationAngTight_L1_;
   Bool_t          booledmValueMap_muons_muidTMOneStationAngTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMOneStationAngTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMOneStationLoose_L1_;
   Bool_t          booledmValueMap_muons_muidTMOneStationLoose_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMOneStationLoose_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTMOneStationTight_L1_;
   Bool_t          booledmValueMap_muons_muidTMOneStationTight_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTMOneStationTight_L1_obj;
 //edm::Wrapper<edm::ValueMap<bool> > *booledmValueMap_muons_muidTrackerMuonArbitrated_L1_;
   Bool_t          booledmValueMap_muons_muidTrackerMuonArbitrated_L1_present;
   edm::ValueMap<bool> booledmValueMap_muons_muidTrackerMuonArbitrated_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_obj;
 //edm::Wrapper<edm::ValueMap<double> > *doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_;
   Bool_t          doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_present;
   edm::ValueMap<double> doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ptr<reco::CaloCluster> > > *recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_;
   Bool_t          recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_present;
   edm::ValueMap<edm::Ptr<reco::CaloCluster> > recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ptr<reco::CaloCluster> > > *recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_;
   Bool_t          recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_present;
   edm::ValueMap<edm::Ptr<reco::CaloCluster> > recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ptr<reco::PFCandidate> > > *recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_;
   Bool_t          recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_present;
   edm::ValueMap<edm::Ptr<reco::PFCandidate> > recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ptr<reco::PFCandidate> > > *recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_;
   Bool_t          recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_present;
   edm::ValueMap<edm::Ptr<reco::PFCandidate> > recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ptr<reco::PFCandidate> > > *recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_;
   Bool_t          recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_present;
   edm::ValueMap<edm::Ptr<reco::PFCandidate> > recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Photon>,reco::Photon,edm::refhelper::FindUsingAdvance<vector<reco::Photon>,reco::Photon> > > > *recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_;
   Bool_t          recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_present;
   edm::ValueMap<edm::Ref<vector<reco::Photon>,reco::Photon,edm::refhelper::FindUsingAdvance<vector<reco::Photon>,reco::Photon> > > recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_obj;
 //edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::PreId>,reco::PreId,edm::refhelper::FindUsingAdvance<vector<reco::PreId>,reco::PreId> > > > *recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_;
   Bool_t          recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_present;
   edm::ValueMap<edm::Ref<vector<reco::PreId>,reco::PreId,edm::refhelper::FindUsingAdvance<vector<reco::PreId>,reco::PreId> > > recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_eidLoose__L1_;
   Bool_t          floatedmValueMap_eidLoose__L1_present;
   edm::ValueMap<float> floatedmValueMap_eidLoose__L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_eidRobustHighEnergy__L1_;
   Bool_t          floatedmValueMap_eidRobustHighEnergy__L1_present;
   edm::ValueMap<float> floatedmValueMap_eidRobustHighEnergy__L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_eidRobustLoose__L1_;
   Bool_t          floatedmValueMap_eidRobustLoose__L1_present;
   edm::ValueMap<float> floatedmValueMap_eidRobustLoose__L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_eidRobustTight__L1_;
   Bool_t          floatedmValueMap_eidRobustTight__L1_present;
   edm::ValueMap<float> floatedmValueMap_eidRobustTight__L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_eidTight__L1_;
   Bool_t          floatedmValueMap_eidTight__L1_present;
   edm::ValueMap<float> floatedmValueMap_eidTight__L1_obj;
 //edm::Wrapper<edm::ValueMap<float> > *floatedmValueMap_generalTracks_MVAVals_L1_;
   Bool_t          floatedmValueMap_generalTracks_MVAVals_L1_present;
   edm::ValueMap<float> floatedmValueMap_generalTracks_MVAVals_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::CastorJetID> > *recoCastorJetIDedmValueMap_ak7CastorJetID__L1_;
   Bool_t          recoCastorJetIDedmValueMap_ak7CastorJetID__L1_present;
   edm::ValueMap<reco::CastorJetID> recoCastorJetIDedmValueMap_ak7CastorJetID__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::DeDxData> > *recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_;
   Bool_t          recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_present;
   edm::ValueMap<reco::DeDxData> recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::DeDxData> > *recoDeDxDataedmValueMap_dedxHarmonic2__L1_;
   Bool_t          recoDeDxDataedmValueMap_dedxHarmonic2__L1_present;
   edm::ValueMap<reco::DeDxData> recoDeDxDataedmValueMap_dedxHarmonic2__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::DeDxData> > *recoDeDxDataedmValueMap_dedxTruncated40__L1_;
   Bool_t          recoDeDxDataedmValueMap_dedxTruncated40__L1_present;
   edm::ValueMap<reco::DeDxData> recoDeDxDataedmValueMap_dedxTruncated40__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *recoIsoDepositedmValueMap_muIsoDepositJets__L1_;
   Bool_t          recoIsoDepositedmValueMap_muIsoDepositJets__L1_present;
   edm::ValueMap<reco::IsoDeposit> recoIsoDepositedmValueMap_muIsoDepositJets__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *recoIsoDepositedmValueMap_muIsoDepositTk__L1_;
   Bool_t          recoIsoDepositedmValueMap_muIsoDepositTk__L1_present;
   edm::ValueMap<reco::IsoDeposit> recoIsoDepositedmValueMap_muIsoDepositTk__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_;
   Bool_t          recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_present;
   edm::ValueMap<reco::IsoDeposit> recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_;
   Bool_t          recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_present;
   edm::ValueMap<reco::IsoDeposit> recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_;
   Bool_t          recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_present;
   edm::ValueMap<reco::IsoDeposit> recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::JetID> > *recoJetIDedmValueMap_ak5JetID__L1_;
   Bool_t          recoJetIDedmValueMap_ak5JetID__L1_present;
   edm::ValueMap<reco::JetID> recoJetIDedmValueMap_ak5JetID__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::JetID> > *recoJetIDedmValueMap_ak7JetID__L1_;
   Bool_t          recoJetIDedmValueMap_ak7JetID__L1_present;
   edm::ValueMap<reco::JetID> recoJetIDedmValueMap_ak7JetID__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::JetID> > *recoJetIDedmValueMap_ic5JetID__L1_;
   Bool_t          recoJetIDedmValueMap_ic5JetID__L1_present;
   edm::ValueMap<reco::JetID> recoJetIDedmValueMap_ic5JetID__L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> > *recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_;
   Bool_t          recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_present;
   edm::ValueMap<reco::MuonCosmicCompatibility> recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > *recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_;
   Bool_t          recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_present;
   edm::ValueMap<reco::MuonMETCorrectionData> recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > *recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_;
   Bool_t          recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_present;
   edm::ValueMap<reco::MuonMETCorrectionData> recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonShower> > *recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_;
   Bool_t          recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_present;
   edm::ValueMap<reco::MuonShower> recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > *recoMuonTimeExtraedmValueMap_muons_combined_L1_;
   Bool_t          recoMuonTimeExtraedmValueMap_muons_combined_L1_present;
   edm::ValueMap<reco::MuonTimeExtra> recoMuonTimeExtraedmValueMap_muons_combined_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > *recoMuonTimeExtraedmValueMap_muons_csc_L1_;
   Bool_t          recoMuonTimeExtraedmValueMap_muons_csc_L1_present;
   edm::ValueMap<reco::MuonTimeExtra> recoMuonTimeExtraedmValueMap_muons_csc_L1_obj;
 //edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > *recoMuonTimeExtraedmValueMap_muons_dt_L1_;
   Bool_t          recoMuonTimeExtraedmValueMap_muons_dt_L1_present;
   edm::ValueMap<reco::MuonTimeExtra> recoMuonTimeExtraedmValueMap_muons_dt_L1_obj;
 //edm::Wrapper<edm::ValueMap<vector<edm::Ref<vector<reco::PFCandidate>,reco::PFCandidate,edm::refhelper::FindUsingAdvance<vector<reco::PFCandidate>,reco::PFCandidate> > > > > *recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_;
   Bool_t          recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_present;
   edm::ValueMap<vector<edm::Ref<vector<reco::PFCandidate>,reco::PFCandidate,edm::refhelper::FindUsingAdvance<vector<reco::PFCandidate>,reco::PFCandidate> > > > recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_obj;
 //edm::Wrapper<edm::ValueMap<vector<edm::Ref<vector<reco::PFCandidate>,reco::PFCandidate,edm::refhelper::FindUsingAdvance<vector<reco::PFCandidate>,reco::PFCandidate> > > > > *recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_;
   Bool_t          recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_present;
   edm::ValueMap<vector<edm::Ref<vector<reco::PFCandidate>,reco::PFCandidate,edm::refhelper::FindUsingAdvance<vector<reco::PFCandidate>,reco::PFCandidate> > > > recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_obj;
 //edm::Wrapper<edm::ValueMap<unsigned int> > *uintedmValueMap_muons_cosmicsVeto_L1_;
   Bool_t          uintedmValueMap_muons_cosmicsVeto_L1_present;
   edm::ValueMap<unsigned int> uintedmValueMap_muons_cosmicsVeto_L1_obj;
 //edm::Wrapper<edmNew::DetSetVector<SiPixelCluster> > *SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_;
   Bool_t          SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_present;
   edmNew::DetSetVector<SiPixelCluster> SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_obj;
 //edm::Wrapper<edmNew::DetSetVector<SiStripCluster> > *SiStripClusteredmNewDetSetVector_siStripClusters__L1_;
   Bool_t          SiStripClusteredmNewDetSetVector_siStripClusters__L1_present;
   edmNew::DetSetVector<SiStripCluster> SiStripClusteredmNewDetSetVector_siStripClusters__L1_obj;
 //edm::Wrapper<reco::BeamHaloSummary> *recoBeamHaloSummary_BeamHaloSummary__L1_;
   Bool_t          recoBeamHaloSummary_BeamHaloSummary__L1_present;
   reco::BeamHaloSummary recoBeamHaloSummary_BeamHaloSummary__L1_obj;
 //edm::Wrapper<reco::BeamSpot> *recoBeamSpot_offlineBeamSpot__L1_;
   Bool_t          recoBeamSpot_offlineBeamSpot__L1_present;
   reco::BeamSpot  recoBeamSpot_offlineBeamSpot__L1_obj;
 //edm::Wrapper<reco::CSCHaloData> *recoCSCHaloData_CSCHaloData__L1_;
   Bool_t          recoCSCHaloData_CSCHaloData__L1_present;
   reco::CSCHaloData recoCSCHaloData_CSCHaloData__L1_obj;
 //edm::Wrapper<reco::EcalHaloData> *recoEcalHaloData_EcalHaloData__L1_;
   Bool_t          recoEcalHaloData_EcalHaloData__L1_present;
   reco::EcalHaloData recoEcalHaloData_EcalHaloData__L1_obj;
 //edm::Wrapper<reco::GlobalHaloData> *recoGlobalHaloData_GlobalHaloData__L1_;
   Bool_t          recoGlobalHaloData_GlobalHaloData__L1_present;
   reco::GlobalHaloData recoGlobalHaloData_GlobalHaloData__L1_obj;
 //edm::Wrapper<reco::HcalHaloData> *recoHcalHaloData_HcalHaloData__L1_;
   Bool_t          recoHcalHaloData_HcalHaloData__L1_present;
   reco::HcalHaloData recoHcalHaloData_HcalHaloData__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_obj;
 //edm::Wrapper<reco::PFTauDiscriminator> *recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_;
   Bool_t          recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_present;
   reco::PFTauDiscriminator recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_obj;
 //edm::Wrapper<pair<int,vector<L1CSCSPStatusDigi> > > *intL1CSCSPStatusDigisstdpair_csctfDigis__L1_;
   Bool_t          intL1CSCSPStatusDigisstdpair_csctfDigis__L1_present;
   pair<int,vector<L1CSCSPStatusDigi> > intL1CSCSPStatusDigisstdpair_csctfDigis__L1_obj;
 //edm::Wrapper<vector<BeamSpotOnline> > *BeamSpotOnlines_scalersRawToDigi__L1_;
   Bool_t          BeamSpotOnlines_scalersRawToDigi__L1_present;
   vector<BeamSpotOnline> BeamSpotOnlines_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<DcsStatus> > *DcsStatuss_scalersRawToDigi__L1_;
   Bool_t          DcsStatuss_scalersRawToDigi__L1_present;
   vector<DcsStatus> DcsStatuss_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<L1AcceptBunchCrossing> > *L1AcceptBunchCrossings_scalersRawToDigi__L1_;
   Bool_t          L1AcceptBunchCrossings_scalersRawToDigi__L1_present;
   vector<L1AcceptBunchCrossing> L1AcceptBunchCrossings_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<L1CaloEmCand> > *L1CaloEmCands_gctDigis__L1_;
   Bool_t          L1CaloEmCands_gctDigis__L1_present;
   vector<L1CaloEmCand> L1CaloEmCands_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1CaloEmCand> > *L1CaloEmCands_simRctDigis__L1_;
   Bool_t          L1CaloEmCands_simRctDigis__L1_present;
   vector<L1CaloEmCand> L1CaloEmCands_simRctDigis__L1_obj;
 //edm::Wrapper<vector<L1CaloRegion> > *L1CaloRegions_gctDigis__L1_;
   Bool_t          L1CaloRegions_gctDigis__L1_present;
   vector<L1CaloRegion> L1CaloRegions_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1CaloRegion> > *L1CaloRegions_simRctDigis__L1_;
   Bool_t          L1CaloRegions_simRctDigis__L1_present;
   vector<L1CaloRegion> L1CaloRegions_simRctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEmCand> > *L1GctEmCands_gctDigis_isoEm_L1_;
   Bool_t          L1GctEmCands_gctDigis_isoEm_L1_present;
   vector<L1GctEmCand> L1GctEmCands_gctDigis_isoEm_L1_obj;
 //edm::Wrapper<vector<L1GctEmCand> > *L1GctEmCands_simGctDigis_isoEm_L1_;
   Bool_t          L1GctEmCands_simGctDigis_isoEm_L1_present;
   vector<L1GctEmCand> L1GctEmCands_simGctDigis_isoEm_L1_obj;
 //edm::Wrapper<vector<L1GctEmCand> > *L1GctEmCands_gctDigis_nonIsoEm_L1_;
   Bool_t          L1GctEmCands_gctDigis_nonIsoEm_L1_present;
   vector<L1GctEmCand> L1GctEmCands_gctDigis_nonIsoEm_L1_obj;
 //edm::Wrapper<vector<L1GctEmCand> > *L1GctEmCands_simGctDigis_nonIsoEm_L1_;
   Bool_t          L1GctEmCands_simGctDigis_nonIsoEm_L1_present;
   vector<L1GctEmCand> L1GctEmCands_simGctDigis_nonIsoEm_L1_obj;
 //edm::Wrapper<vector<L1GctEtHad> > *L1GctEtHads_gctDigis__L1_;
   Bool_t          L1GctEtHads_gctDigis__L1_present;
   vector<L1GctEtHad> L1GctEtHads_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEtHad> > *L1GctEtHads_simGctDigis__L1_;
   Bool_t          L1GctEtHads_simGctDigis__L1_present;
   vector<L1GctEtHad> L1GctEtHads_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEtMiss> > *L1GctEtMisss_gctDigis__L1_;
   Bool_t          L1GctEtMisss_gctDigis__L1_present;
   vector<L1GctEtMiss> L1GctEtMisss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEtMiss> > *L1GctEtMisss_simGctDigis__L1_;
   Bool_t          L1GctEtMisss_simGctDigis__L1_present;
   vector<L1GctEtMiss> L1GctEtMisss_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEtTotal> > *L1GctEtTotals_gctDigis__L1_;
   Bool_t          L1GctEtTotals_gctDigis__L1_present;
   vector<L1GctEtTotal> L1GctEtTotals_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctEtTotal> > *L1GctEtTotals_simGctDigis__L1_;
   Bool_t          L1GctEtTotals_simGctDigis__L1_present;
   vector<L1GctEtTotal> L1GctEtTotals_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctFibreWord> > *L1GctFibreWords_gctDigis__L1_;
   Bool_t          L1GctFibreWords_gctDigis__L1_present;
   vector<L1GctFibreWord> L1GctFibreWords_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHFBitCounts> > *L1GctHFBitCountss_gctDigis__L1_;
   Bool_t          L1GctHFBitCountss_gctDigis__L1_present;
   vector<L1GctHFBitCounts> L1GctHFBitCountss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHFBitCounts> > *L1GctHFBitCountss_simGctDigis__L1_;
   Bool_t          L1GctHFBitCountss_simGctDigis__L1_present;
   vector<L1GctHFBitCounts> L1GctHFBitCountss_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHFRingEtSums> > *L1GctHFRingEtSumss_gctDigis__L1_;
   Bool_t          L1GctHFRingEtSumss_gctDigis__L1_present;
   vector<L1GctHFRingEtSums> L1GctHFRingEtSumss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHFRingEtSums> > *L1GctHFRingEtSumss_simGctDigis__L1_;
   Bool_t          L1GctHFRingEtSumss_simGctDigis__L1_present;
   vector<L1GctHFRingEtSums> L1GctHFRingEtSumss_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHtMiss> > *L1GctHtMisss_gctDigis__L1_;
   Bool_t          L1GctHtMisss_gctDigis__L1_present;
   vector<L1GctHtMiss> L1GctHtMisss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctHtMiss> > *L1GctHtMisss_simGctDigis__L1_;
   Bool_t          L1GctHtMisss_simGctDigis__L1_present;
   vector<L1GctHtMiss> L1GctHtMisss_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternEmCand> > *L1GctInternEmCands_gctDigis__L1_;
   Bool_t          L1GctInternEmCands_gctDigis__L1_present;
   vector<L1GctInternEmCand> L1GctInternEmCands_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternEtSum> > *L1GctInternEtSums_gctDigis__L1_;
   Bool_t          L1GctInternEtSums_gctDigis__L1_present;
   vector<L1GctInternEtSum> L1GctInternEtSums_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternEtSum> > *L1GctInternEtSums_simGctDigis__L1_;
   Bool_t          L1GctInternEtSums_simGctDigis__L1_present;
   vector<L1GctInternEtSum> L1GctInternEtSums_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternHFData> > *L1GctInternHFDatas_gctDigis__L1_;
   Bool_t          L1GctInternHFDatas_gctDigis__L1_present;
   vector<L1GctInternHFData> L1GctInternHFDatas_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternHtMiss> > *L1GctInternHtMisss_gctDigis__L1_;
   Bool_t          L1GctInternHtMisss_gctDigis__L1_present;
   vector<L1GctInternHtMiss> L1GctInternHtMisss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternHtMiss> > *L1GctInternHtMisss_simGctDigis__L1_;
   Bool_t          L1GctInternHtMisss_simGctDigis__L1_present;
   vector<L1GctInternHtMiss> L1GctInternHtMisss_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternJetData> > *L1GctInternJetDatas_gctDigis__L1_;
   Bool_t          L1GctInternJetDatas_gctDigis__L1_present;
   vector<L1GctInternJetData> L1GctInternJetDatas_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctInternJetData> > *L1GctInternJetDatas_simGctDigis__L1_;
   Bool_t          L1GctInternJetDatas_simGctDigis__L1_present;
   vector<L1GctInternJetData> L1GctInternJetDatas_simGctDigis__L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_gctDigis_cenJets_L1_;
   Bool_t          L1GctJetCands_gctDigis_cenJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_gctDigis_cenJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_simGctDigis_cenJets_L1_;
   Bool_t          L1GctJetCands_simGctDigis_cenJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_simGctDigis_cenJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_gctDigis_forJets_L1_;
   Bool_t          L1GctJetCands_gctDigis_forJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_gctDigis_forJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_simGctDigis_forJets_L1_;
   Bool_t          L1GctJetCands_simGctDigis_forJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_simGctDigis_forJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_gctDigis_tauJets_L1_;
   Bool_t          L1GctJetCands_gctDigis_tauJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_gctDigis_tauJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCand> > *L1GctJetCands_simGctDigis_tauJets_L1_;
   Bool_t          L1GctJetCands_simGctDigis_tauJets_L1_present;
   vector<L1GctJetCand> L1GctJetCands_simGctDigis_tauJets_L1_obj;
 //edm::Wrapper<vector<L1GctJetCounts> > *L1GctJetCountss_gctDigis__L1_;
   Bool_t          L1GctJetCountss_gctDigis__L1_present;
   vector<L1GctJetCounts> L1GctJetCountss_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1MuGMTCand> > *L1MuGMTCands_gtDigis__L1_;
   Bool_t          L1MuGMTCands_gtDigis__L1_present;
   vector<L1MuGMTCand> L1MuGMTCands_gtDigis__L1_obj;
 //edm::Wrapper<vector<L1MuGMTCand> > *L1MuGMTCands_simGmtDigis__L1_;
   Bool_t          L1MuGMTCands_simGmtDigis__L1_present;
   vector<L1MuGMTCand> L1MuGMTCands_simGmtDigis__L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_gtDigis_CSC_L1_;
   Bool_t          L1MuRegionalCands_gtDigis_CSC_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_gtDigis_CSC_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_simCsctfDigis_CSC_L1_;
   Bool_t          L1MuRegionalCands_simCsctfDigis_CSC_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_simCsctfDigis_CSC_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_gtDigis_DT_L1_;
   Bool_t          L1MuRegionalCands_gtDigis_DT_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_gtDigis_DT_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_simDttfDigis_DT_L1_;
   Bool_t          L1MuRegionalCands_simDttfDigis_DT_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_simDttfDigis_DT_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_gtDigis_RPCb_L1_;
   Bool_t          L1MuRegionalCands_gtDigis_RPCb_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_gtDigis_RPCb_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_;
   Bool_t          L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_gtDigis_RPCf_L1_;
   Bool_t          L1MuRegionalCands_gtDigis_RPCf_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_gtDigis_RPCf_L1_obj;
 //edm::Wrapper<vector<L1MuRegionalCand> > *L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_;
   Bool_t          L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_present;
   vector<L1MuRegionalCand> L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_obj;
 //edm::Wrapper<vector<L1TriggerError> > *L1TriggerErrors_gctDigis__L1_;
   Bool_t          L1TriggerErrors_gctDigis__L1_present;
   vector<L1TriggerError> L1TriggerErrors_gctDigis__L1_obj;
 //edm::Wrapper<vector<L1TriggerScalers> > *L1TriggerScalerss_scalersRawToDigi__L1_;
   Bool_t          L1TriggerScalerss_scalersRawToDigi__L1_present;
   vector<L1TriggerScalers> L1TriggerScalerss_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<Level1TriggerScalers> > *Level1TriggerScalerss_scalersRawToDigi__L1_;
   Bool_t          Level1TriggerScalerss_scalersRawToDigi__L1_present;
   vector<Level1TriggerScalers> Level1TriggerScalerss_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<LumiScalers> > *LumiScalerss_scalersRawToDigi__L1_;
   Bool_t          LumiScalerss_scalersRawToDigi__L1_present;
   vector<LumiScalers> LumiScalerss_scalersRawToDigi__L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_CaloHitsTk_L1_;
   Bool_t          PCaloHits_g4SimHits_CaloHitsTk_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_CaloHitsTk_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_CastorBU_L1_;
   Bool_t          PCaloHits_g4SimHits_CastorBU_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_CastorBU_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_CastorFI_L1_;
   Bool_t          PCaloHits_g4SimHits_CastorFI_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_CastorFI_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_CastorPL_L1_;
   Bool_t          PCaloHits_g4SimHits_CastorPL_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_CastorPL_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_CastorTU_L1_;
   Bool_t          PCaloHits_g4SimHits_CastorTU_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_CastorTU_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_ChamberHits_L1_;
   Bool_t          PCaloHits_g4SimHits_ChamberHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_ChamberHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_EcalHitsEB_L1_;
   Bool_t          PCaloHits_g4SimHits_EcalHitsEB_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_EcalHitsEB_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_EcalHitsEE_L1_;
   Bool_t          PCaloHits_g4SimHits_EcalHitsEE_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_EcalHitsEE_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_EcalHitsES_L1_;
   Bool_t          PCaloHits_g4SimHits_EcalHitsES_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_EcalHitsES_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_;
   Bool_t          PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_FibreHits_L1_;
   Bool_t          PCaloHits_g4SimHits_FibreHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_FibreHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_HcalHits_L1_;
   Bool_t          PCaloHits_g4SimHits_HcalHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_HcalHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_HcalTB06BeamHits_L1_;
   Bool_t          PCaloHits_g4SimHits_HcalTB06BeamHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_HcalTB06BeamHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_WedgeHits_L1_;
   Bool_t          PCaloHits_g4SimHits_WedgeHits_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_WedgeHits_L1_obj;
 //edm::Wrapper<vector<PCaloHit> > *PCaloHits_g4SimHits_ZDCHITS_L1_;
   Bool_t          PCaloHits_g4SimHits_ZDCHITS_L1_present;
   vector<PCaloHit> PCaloHits_g4SimHits_ZDCHITS_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_BSCHits_L1_;
   Bool_t          PSimHits_g4SimHits_BSCHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_BSCHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_FP420SI_L1_;
   Bool_t          PSimHits_g4SimHits_FP420SI_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_FP420SI_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_MuonCSCHits_L1_;
   Bool_t          PSimHits_g4SimHits_MuonCSCHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_MuonCSCHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_MuonDTHits_L1_;
   Bool_t          PSimHits_g4SimHits_MuonDTHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_MuonDTHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_MuonGEMHits_L1_;
   Bool_t          PSimHits_g4SimHits_MuonGEMHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_MuonGEMHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_MuonRPCHits_L1_;
   Bool_t          PSimHits_g4SimHits_MuonRPCHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_MuonRPCHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_PLTHits_L1_;
   Bool_t          PSimHits_g4SimHits_PLTHits_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_PLTHits_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TotemHitsRP_L1_;
   Bool_t          PSimHits_g4SimHits_TotemHitsRP_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TotemHitsRP_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TotemHitsT1_L1_;
   Bool_t          PSimHits_g4SimHits_TotemHitsT1_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TotemHitsT1_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TotemHitsT2Gem_L1_;
   Bool_t          PSimHits_g4SimHits_TotemHitsT2Gem_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TotemHitsT2Gem_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_obj;
 //edm::Wrapper<vector<PSimHit> > *PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_;
   Bool_t          PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_present;
   vector<PSimHit> PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_obj;
 //edm::Wrapper<vector<PileupSummaryInfo> > *PileupSummaryInfos_addPileupInfo__L1_;
   Bool_t          PileupSummaryInfos_addPileupInfo__L1_present;
   vector<PileupSummaryInfo> PileupSummaryInfos_addPileupInfo__L1_obj;
 //edm::Wrapper<vector<RPCDigiL1Link> > *RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_;
   Bool_t          RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_present;
   vector<RPCDigiL1Link> RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_obj;
 //edm::Wrapper<vector<RPCDigiL1Link> > *RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_;
   Bool_t          RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_present;
   vector<RPCDigiL1Link> RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_obj;
 //edm::Wrapper<vector<SimTrack> > *SimTracks_g4SimHits__L1_;
   Bool_t          SimTracks_g4SimHits__L1_present;
   vector<SimTrack> SimTracks_g4SimHits__L1_obj;
 //edm::Wrapper<vector<SimVertex> > *SimVertexs_g4SimHits__L1_;
   Bool_t          SimVertexs_g4SimHits__L1_present;
   vector<SimVertex> SimVertexs_g4SimHits__L1_obj;
 //edm::Wrapper<vector<TrajectorySeed> > *TrajectorySeeds_CosmicMuonSeed__L1_;
   Bool_t          TrajectorySeeds_CosmicMuonSeed__L1_present;
   vector<TrajectorySeed> TrajectorySeeds_CosmicMuonSeed__L1_obj;
 //edm::Wrapper<vector<TrajectorySeed> > *TrajectorySeeds_SETMuonSeed__L1_;
   Bool_t          TrajectorySeeds_SETMuonSeed__L1_present;
   vector<TrajectorySeed> TrajectorySeeds_SETMuonSeed__L1_obj;
 //edm::Wrapper<vector<TrajectorySeed> > *TrajectorySeeds_ancientMuonSeed__L1_;
   Bool_t          TrajectorySeeds_ancientMuonSeed__L1_present;
   vector<TrajectorySeed> TrajectorySeeds_ancientMuonSeed__L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4CaloJets_rhos_L1_;
   Bool_t          doubles_ak4CaloJets_rhos_L1_present;
   vector<double>  doubles_ak4CaloJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJets_rhos_L1_;
   Bool_t          doubles_ak4GenJets_rhos_L1_present;
   vector<double>  doubles_ak4GenJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4PFJetsCHS_rhos_L1_;
   Bool_t          doubles_ak4PFJetsCHS_rhos_L1_present;
   vector<double>  doubles_ak4PFJetsCHS_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5CaloJets_rhos_L1_;
   Bool_t          doubles_ak5CaloJets_rhos_L1_present;
   vector<double>  doubles_ak5CaloJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5GenJets_rhos_L1_;
   Bool_t          doubles_ak5GenJets_rhos_L1_present;
   vector<double>  doubles_ak5GenJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5PFJets_rhos_L1_;
   Bool_t          doubles_ak5PFJets_rhos_L1_present;
   vector<double>  doubles_ak5PFJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5PFJetsCHS_rhos_L1_;
   Bool_t          doubles_ak5PFJetsCHS_rhos_L1_present;
   vector<double>  doubles_ak5PFJetsCHS_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5TrackJets_rhos_L1_;
   Bool_t          doubles_ak5TrackJets_rhos_L1_present;
   vector<double>  doubles_ak5TrackJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak7BasicJets_rhos_L1_;
   Bool_t          doubles_ak7BasicJets_rhos_L1_present;
   vector<double>  doubles_ak7BasicJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8PFJets_rhos_L1_;
   Bool_t          doubles_ak8PFJets_rhos_L1_present;
   vector<double>  doubles_ak8PFJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8PFJetsCHS_rhos_L1_;
   Bool_t          doubles_ak8PFJetsCHS_rhos_L1_present;
   vector<double>  doubles_ak8PFJetsCHS_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ca8PFJetsCHS_rhos_L1_;
   Bool_t          doubles_ca8PFJetsCHS_rhos_L1_present;
   vector<double>  doubles_ca8PFJetsCHS_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ca8PFJetsCHSPruned_rhos_L1_;
   Bool_t          doubles_ca8PFJetsCHSPruned_rhos_L1_present;
   vector<double>  doubles_ca8PFJetsCHSPruned_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_cmsTopTagPFJetsCHS_rhos_L1_;
   Bool_t          doubles_cmsTopTagPFJetsCHS_rhos_L1_present;
   vector<double>  doubles_cmsTopTagPFJetsCHS_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_iterativeCone5GenJets_rhos_L1_;
   Bool_t          doubles_iterativeCone5GenJets_rhos_L1_present;
   vector<double>  doubles_iterativeCone5GenJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_kt4GenJets_rhos_L1_;
   Bool_t          doubles_kt4GenJets_rhos_L1_present;
   vector<double>  doubles_kt4GenJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_kt6GenJets_rhos_L1_;
   Bool_t          doubles_kt6GenJets_rhos_L1_present;
   vector<double>  doubles_kt6GenJets_rhos_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4CaloJets_sigmas_L1_;
   Bool_t          doubles_ak4CaloJets_sigmas_L1_present;
   vector<double>  doubles_ak4CaloJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJets_sigmas_L1_;
   Bool_t          doubles_ak4GenJets_sigmas_L1_present;
   vector<double>  doubles_ak4GenJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4PFJetsCHS_sigmas_L1_;
   Bool_t          doubles_ak4PFJetsCHS_sigmas_L1_present;
   vector<double>  doubles_ak4PFJetsCHS_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5CaloJets_sigmas_L1_;
   Bool_t          doubles_ak5CaloJets_sigmas_L1_present;
   vector<double>  doubles_ak5CaloJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5GenJets_sigmas_L1_;
   Bool_t          doubles_ak5GenJets_sigmas_L1_present;
   vector<double>  doubles_ak5GenJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5PFJets_sigmas_L1_;
   Bool_t          doubles_ak5PFJets_sigmas_L1_present;
   vector<double>  doubles_ak5PFJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5PFJetsCHS_sigmas_L1_;
   Bool_t          doubles_ak5PFJetsCHS_sigmas_L1_present;
   vector<double>  doubles_ak5PFJetsCHS_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak5TrackJets_sigmas_L1_;
   Bool_t          doubles_ak5TrackJets_sigmas_L1_present;
   vector<double>  doubles_ak5TrackJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak7BasicJets_sigmas_L1_;
   Bool_t          doubles_ak7BasicJets_sigmas_L1_present;
   vector<double>  doubles_ak7BasicJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8PFJets_sigmas_L1_;
   Bool_t          doubles_ak8PFJets_sigmas_L1_present;
   vector<double>  doubles_ak8PFJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8PFJetsCHS_sigmas_L1_;
   Bool_t          doubles_ak8PFJetsCHS_sigmas_L1_present;
   vector<double>  doubles_ak8PFJetsCHS_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ca8PFJetsCHS_sigmas_L1_;
   Bool_t          doubles_ca8PFJetsCHS_sigmas_L1_present;
   vector<double>  doubles_ca8PFJetsCHS_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_ca8PFJetsCHSPruned_sigmas_L1_;
   Bool_t          doubles_ca8PFJetsCHSPruned_sigmas_L1_present;
   vector<double>  doubles_ca8PFJetsCHSPruned_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_cmsTopTagPFJetsCHS_sigmas_L1_;
   Bool_t          doubles_cmsTopTagPFJetsCHS_sigmas_L1_present;
   vector<double>  doubles_cmsTopTagPFJetsCHS_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_iterativeCone5GenJets_sigmas_L1_;
   Bool_t          doubles_iterativeCone5GenJets_sigmas_L1_present;
   vector<double>  doubles_iterativeCone5GenJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_kt4GenJets_sigmas_L1_;
   Bool_t          doubles_kt4GenJets_sigmas_L1_present;
   vector<double>  doubles_kt4GenJets_sigmas_L1_obj;
 //edm::Wrapper<vector<double> > *doubles_kt6GenJets_sigmas_L1_;
   Bool_t          doubles_kt6GenJets_sigmas_L1_present;
   vector<double>  doubles_kt6GenJets_sigmas_L1_obj;
 //edm::Wrapper<vector<edm::ErrorSummaryEntry> > *edmErrorSummaryEntrys_logErrorHarvester__L1_;
   Bool_t          edmErrorSummaryEntrys_logErrorHarvester__L1_present;
   vector<edm::ErrorSummaryEntry> edmErrorSummaryEntrys_logErrorHarvester__L1_obj;
 //edm::Wrapper<vector<edm::FwdPtr<reco::PFCandidate> > > *recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_;
   Bool_t          recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_present;
   vector<edm::FwdPtr<reco::PFCandidate> > recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_obj;
 //edm::Wrapper<vector<edm::FwdPtr<reco::PFCandidate> > > *recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_;
   Bool_t          recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_present;
   vector<edm::FwdPtr<reco::PFCandidate> > recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_obj;
 //edm::Wrapper<vector<int> > *ints_genParticles__L1_;
   Bool_t          ints_genParticles__L1_present;
   vector<int>     ints_genParticles__L1_obj;
 //edm::Wrapper<vector<reco::BasicJet> > *recoBasicJets_ak7BasicJets__L1_;
   Bool_t          recoBasicJets_ak7BasicJets__L1_present;
   vector<reco::BasicJet> recoBasicJets_ak7BasicJets__L1_obj;
 //edm::Wrapper<vector<reco::BasicJet> > *recoBasicJets_ca8PFJetsCHSPruned__L1_;
   Bool_t          recoBasicJets_ca8PFJetsCHSPruned__L1_present;
   vector<reco::BasicJet> recoBasicJets_ca8PFJetsCHSPruned__L1_obj;
 //edm::Wrapper<vector<reco::BasicJet> > *recoBasicJets_cmsTopTagPFJetsCHS__L1_;
   Bool_t          recoBasicJets_cmsTopTagPFJetsCHS__L1_present;
   vector<reco::BasicJet> recoBasicJets_cmsTopTagPFJetsCHS__L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_hfEMClusters__L1_;
   Bool_t          recoCaloClusters_hfEMClusters__L1_present;
   vector<reco::CaloCluster> recoCaloClusters_hfEMClusters__L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_;
   Bool_t          recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_particleFlowEGamma_ESClusters_L1_;
   Bool_t          recoCaloClusters_particleFlowEGamma_ESClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_particleFlowEGamma_ESClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_;
   Bool_t          recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_;
   Bool_t          recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_;
   Bool_t          recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_;
   Bool_t          recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_;
   Bool_t          recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_;
   Bool_t          recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloCluster> > *recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_;
   Bool_t          recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_present;
   vector<reco::CaloCluster> recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_obj;
 //edm::Wrapper<vector<reco::CaloJet> > *recoCaloJets_ak4CaloJets__L1_;
   Bool_t          recoCaloJets_ak4CaloJets__L1_present;
   vector<reco::CaloJet> recoCaloJets_ak4CaloJets__L1_obj;
 //edm::Wrapper<vector<reco::CaloJet> > *recoCaloJets_ak5CaloJets__L1_;
   Bool_t          recoCaloJets_ak5CaloJets__L1_present;
   vector<reco::CaloJet> recoCaloJets_ak5CaloJets__L1_obj;
 //edm::Wrapper<vector<reco::CaloMET> > *recoCaloMETs_corMetGlobalMuons__L1_;
   Bool_t          recoCaloMETs_corMetGlobalMuons__L1_present;
   vector<reco::CaloMET> recoCaloMETs_corMetGlobalMuons__L1_obj;
 //edm::Wrapper<vector<reco::CaloMET> > *recoCaloMETs_met__L1_;
   Bool_t          recoCaloMETs_met__L1_present;
   vector<reco::CaloMET> recoCaloMETs_met__L1_obj;
 //edm::Wrapper<vector<reco::CaloMET> > *recoCaloMETs_metHO__L1_;
   Bool_t          recoCaloMETs_metHO__L1_present;
   vector<reco::CaloMET> recoCaloMETs_metHO__L1_obj;
 //edm::Wrapper<vector<reco::CaloMET> > *recoCaloMETs_metNoHF__L1_;
   Bool_t          recoCaloMETs_metNoHF__L1_present;
   vector<reco::CaloMET> recoCaloMETs_metNoHF__L1_obj;
 //edm::Wrapper<vector<reco::CaloMuon> > *recoCaloMuons_calomuons__L1_;
   Bool_t          recoCaloMuons_calomuons__L1_present;
   vector<reco::CaloMuon> recoCaloMuons_calomuons__L1_obj;
 //edm::Wrapper<vector<reco::CastorTower> > *recoCastorTowers_CastorTowerReco__L1_;
   Bool_t          recoCastorTowers_CastorTowerReco__L1_present;
   vector<reco::CastorTower> recoCastorTowers_CastorTowerReco__L1_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_allConversions__L1_;
   Bool_t          recoConversions_allConversions__L1_present;
   vector<reco::Conversion> recoConversions_allConversions__L1_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_conversions__L1_;
   Bool_t          recoConversions_conversions__L1_present;
   vector<reco::Conversion> recoConversions_conversions__L1_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_gedPhotonCore__L1_;
   Bool_t          recoConversions_gedPhotonCore__L1_present;
   vector<reco::Conversion> recoConversions_gedPhotonCore__L1_obj;
 //edm::Wrapper<vector<reco::Conversion> > *recoConversions_uncleanedOnlyAllConversions__L1_;
   Bool_t          recoConversions_uncleanedOnlyAllConversions__L1_present;
   vector<reco::Conversion> recoConversions_uncleanedOnlyAllConversions__L1_obj;
 //edm::Wrapper<vector<reco::ElectronSeed> > *recoElectronSeeds_electronMergedSeeds__L1_;
   Bool_t          recoElectronSeeds_electronMergedSeeds__L1_present;
   vector<reco::ElectronSeed> recoElectronSeeds_electronMergedSeeds__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak4GenJets__L1_;
   Bool_t          recoGenJets_ak4GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_ak4GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak5GenJets__L1_;
   Bool_t          recoGenJets_ak5GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_ak5GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak8GenJets__L1_;
   Bool_t          recoGenJets_ak8GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_ak8GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_iterativeCone5GenJets__L1_;
   Bool_t          recoGenJets_iterativeCone5GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_iterativeCone5GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_kt4GenJets__L1_;
   Bool_t          recoGenJets_kt4GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_kt4GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_kt6GenJets__L1_;
   Bool_t          recoGenJets_kt6GenJets__L1_present;
   vector<reco::GenJet> recoGenJets_kt6GenJets__L1_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetCalo__L1_;
   Bool_t          recoGenMETs_genMetCalo__L1_present;
   vector<reco::GenMET> recoGenMETs_genMetCalo__L1_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetCaloAndNonPrompt__L1_;
   Bool_t          recoGenMETs_genMetCaloAndNonPrompt__L1_present;
   vector<reco::GenMET> recoGenMETs_genMetCaloAndNonPrompt__L1_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetTrue__L1_;
   Bool_t          recoGenMETs_genMetTrue__L1_present;
   vector<reco::GenMET> recoGenMETs_genMetTrue__L1_obj;
 //edm::Wrapper<vector<reco::GenParticle> > *recoGenParticles_genParticles__L1_;
   Bool_t          recoGenParticles_genParticles__L1_present;
   vector<reco::GenParticle> recoGenParticles_genParticles__L1_obj;
 //edm::Wrapper<vector<reco::GsfElectron> > *recoGsfElectrons_gedGsfElectrons__L1_;
   Bool_t          recoGsfElectrons_gedGsfElectrons__L1_present;
   vector<reco::GsfElectron> recoGsfElectrons_gedGsfElectrons__L1_obj;
 //edm::Wrapper<vector<reco::GsfElectron> > *recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_;
   Bool_t          recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_present;
   vector<reco::GsfElectron> recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_obj;
 //edm::Wrapper<vector<reco::GsfElectronCore> > *recoGsfElectronCores_gedGsfElectronCores__L1_;
   Bool_t          recoGsfElectronCores_gedGsfElectronCores__L1_present;
   vector<reco::GsfElectronCore> recoGsfElectronCores_gedGsfElectronCores__L1_obj;
 //edm::Wrapper<vector<reco::GsfElectronCore> > *recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_;
   Bool_t          recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_present;
   vector<reco::GsfElectronCore> recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_obj;
 //edm::Wrapper<vector<reco::GsfTrack> > *recoGsfTracks_electronGsfTracks__L1_;
   Bool_t          recoGsfTracks_electronGsfTracks__L1_present;
   vector<reco::GsfTrack> recoGsfTracks_electronGsfTracks__L1_obj;
 //edm::Wrapper<vector<reco::GsfTrackExtra> > *recoGsfTrackExtras_electronGsfTracks__L1_;
   Bool_t          recoGsfTrackExtras_electronGsfTracks__L1_present;
   vector<reco::GsfTrackExtra> recoGsfTrackExtras_electronGsfTracks__L1_obj;
 //edm::Wrapper<vector<reco::HFEMClusterShape> > *recoHFEMClusterShapes_hfEMClusters__L1_;
   Bool_t          recoHFEMClusterShapes_hfEMClusters__L1_present;
   vector<reco::HFEMClusterShape> recoHFEMClusterShapes_hfEMClusters__L1_obj;
 //edm::Wrapper<vector<reco::HcalNoiseRBX> > *recoHcalNoiseRBXs_hcalnoise__L1_;
   Bool_t          recoHcalNoiseRBXs_hcalnoise__L1_present;
   vector<reco::HcalNoiseRBX> recoHcalNoiseRBXs_hcalnoise__L1_obj;
 //edm::Wrapper<vector<reco::JPTJet> > *recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_;
   Bool_t          recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_present;
   vector<reco::JPTJet> recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_obj;
 //edm::Wrapper<vector<reco::MET> > *recoMETs_tcMet__L1_;
   Bool_t          recoMETs_tcMet__L1_present;
   vector<reco::MET> recoMETs_tcMet__L1_obj;
 //edm::Wrapper<vector<reco::MET> > *recoMETs_tcMetWithPFclusters__L1_;
   Bool_t          recoMETs_tcMetWithPFclusters__L1_present;
   vector<reco::MET> recoMETs_tcMetWithPFclusters__L1_obj;
 //edm::Wrapper<vector<reco::Muon> > *recoMuons_muons__L1_;
   Bool_t          recoMuons_muons__L1_present;
   vector<reco::Muon> recoMuons_muons__L1_obj;
 //edm::Wrapper<vector<reco::Muon> > *recoMuons_muonsFromCosmics__L1_;
   Bool_t          recoMuons_muonsFromCosmics__L1_present;
   vector<reco::Muon> recoMuons_muonsFromCosmics__L1_obj;
 //edm::Wrapper<vector<reco::Muon> > *recoMuons_muonsFromCosmics1Leg__L1_;
   Bool_t          recoMuons_muonsFromCosmics1Leg__L1_present;
   vector<reco::Muon> recoMuons_muonsFromCosmics1Leg__L1_obj;
 //edm::Wrapper<vector<reco::PFBlock> > *recoPFBlocks_particleFlowBlock__L1_;
   Bool_t          recoPFBlocks_particleFlowBlock__L1_present;
   vector<reco::PFBlock> recoPFBlocks_particleFlowBlock__L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlow__L1_;
   Bool_t          recoPFCandidates_particleFlow__L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlow__L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowEGamma__L1_;
   Bool_t          recoPFCandidates_particleFlowEGamma__L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowEGamma__L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedHF_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedHF_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedHF_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_obj;
 //edm::Wrapper<vector<reco::PFCandidate> > *recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_;
   Bool_t          recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_present;
   vector<reco::PFCandidate> recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_obj;
 //edm::Wrapper<vector<reco::PFCluster> > *recoPFClusters_particleFlowClusterECAL__L1_;
   Bool_t          recoPFClusters_particleFlowClusterECAL__L1_present;
   vector<reco::PFCluster> recoPFClusters_particleFlowClusterECAL__L1_obj;
 //edm::Wrapper<vector<reco::PFCluster> > *recoPFClusters_particleFlowClusterHCAL__L1_;
   Bool_t          recoPFClusters_particleFlowClusterHCAL__L1_present;
   vector<reco::PFCluster> recoPFClusters_particleFlowClusterHCAL__L1_obj;
 //edm::Wrapper<vector<reco::PFCluster> > *recoPFClusters_particleFlowClusterHO__L1_;
   Bool_t          recoPFClusters_particleFlowClusterHO__L1_present;
   vector<reco::PFCluster> recoPFClusters_particleFlowClusterHO__L1_obj;
 //edm::Wrapper<vector<reco::PFCluster> > *recoPFClusters_particleFlowClusterPS__L1_;
   Bool_t          recoPFClusters_particleFlowClusterPS__L1_present;
   vector<reco::PFCluster> recoPFClusters_particleFlowClusterPS__L1_obj;
 //edm::Wrapper<vector<reco::PFDisplacedVertex> > *recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_;
   Bool_t          recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_present;
   vector<reco::PFDisplacedVertex> recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ak4PFJetsCHS__L1_;
   Bool_t          recoPFJets_ak4PFJetsCHS__L1_present;
   vector<reco::PFJet> recoPFJets_ak4PFJetsCHS__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ak5PFJets__L1_;
   Bool_t          recoPFJets_ak5PFJets__L1_present;
   vector<reco::PFJet> recoPFJets_ak5PFJets__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ak5PFJetsCHS__L1_;
   Bool_t          recoPFJets_ak5PFJetsCHS__L1_present;
   vector<reco::PFJet> recoPFJets_ak5PFJetsCHS__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ak8PFJets__L1_;
   Bool_t          recoPFJets_ak8PFJets__L1_present;
   vector<reco::PFJet> recoPFJets_ak8PFJets__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ak8PFJetsCHS__L1_;
   Bool_t          recoPFJets_ak8PFJetsCHS__L1_present;
   vector<reco::PFJet> recoPFJets_ak8PFJetsCHS__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ca8PFJetsCHS__L1_;
   Bool_t          recoPFJets_ca8PFJetsCHS__L1_present;
   vector<reco::PFJet> recoPFJets_ca8PFJetsCHS__L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_;
   Bool_t          recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_present;
   vector<reco::PFJet> recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_obj;
 //edm::Wrapper<vector<reco::PFJet> > *recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_;
   Bool_t          recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_present;
   vector<reco::PFJet> recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_obj;
 //edm::Wrapper<vector<reco::PFMET> > *recoPFMETs_pfMet__L1_;
   Bool_t          recoPFMETs_pfMet__L1_present;
   vector<reco::PFMET> recoPFMETs_pfMet__L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterHO_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterHO_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterHO_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowClusterPS_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowClusterPS_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowClusterPS_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFRecHit> > *recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_;
   Bool_t          recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_present;
   vector<reco::PFRecHit> recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_obj;
 //edm::Wrapper<vector<reco::PFTau> > *recoPFTaus_hpsPFTauProducer__L1_;
   Bool_t          recoPFTaus_hpsPFTauProducer__L1_present;
   vector<reco::PFTau> recoPFTaus_hpsPFTauProducer__L1_obj;
 //edm::Wrapper<vector<reco::PFTauTransverseImpactParameter> > *recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_;
   Bool_t          recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_present;
   vector<reco::PFTauTransverseImpactParameter> recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_obj;
 //edm::Wrapper<vector<reco::Photon> > *recoPhotons_gedPhotons__L1_;
   Bool_t          recoPhotons_gedPhotons__L1_present;
   vector<reco::Photon> recoPhotons_gedPhotons__L1_obj;
 //edm::Wrapper<vector<reco::Photon> > *recoPhotons_mustachePhotons__L1_;
   Bool_t          recoPhotons_mustachePhotons__L1_present;
   vector<reco::Photon> recoPhotons_mustachePhotons__L1_obj;
 //edm::Wrapper<vector<reco::Photon> > *recoPhotons_photons__L1_;
   Bool_t          recoPhotons_photons__L1_present;
   vector<reco::Photon> recoPhotons_photons__L1_obj;
 //edm::Wrapper<vector<reco::PhotonCore> > *recoPhotonCores_gedPhotonCore__L1_;
   Bool_t          recoPhotonCores_gedPhotonCore__L1_present;
   vector<reco::PhotonCore> recoPhotonCores_gedPhotonCore__L1_obj;
 //edm::Wrapper<vector<reco::PhotonCore> > *recoPhotonCores_mustachePhotonCore__L1_;
   Bool_t          recoPhotonCores_mustachePhotonCore__L1_present;
   vector<reco::PhotonCore> recoPhotonCores_mustachePhotonCore__L1_obj;
 //edm::Wrapper<vector<reco::PhotonCore> > *recoPhotonCores_photonCore__L1_;
   Bool_t          recoPhotonCores_photonCore__L1_present;
   vector<reco::PhotonCore> recoPhotonCores_photonCore__L1_obj;
 //edm::Wrapper<vector<reco::PreId> > *recoPreIds_trackerDrivenElectronSeeds_preid_L1_;
   Bool_t          recoPreIds_trackerDrivenElectronSeeds_preid_L1_present;
   vector<reco::PreId> recoPreIds_trackerDrivenElectronSeeds_preid_L1_obj;
 //edm::Wrapper<vector<reco::PreshowerCluster> > *recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_;
   Bool_t          recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_present;
   vector<reco::PreshowerCluster> recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_obj;
 //edm::Wrapper<vector<reco::PreshowerCluster> > *recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_;
   Bool_t          recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_present;
   vector<reco::PreshowerCluster> recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_obj;
 //edm::Wrapper<vector<reco::PreshowerClusterShape> > *recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_;
   Bool_t          recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_present;
   vector<reco::PreshowerClusterShape> recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_obj;
 //edm::Wrapper<vector<reco::PreshowerClusterShape> > *recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_;
   Bool_t          recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_present;
   vector<reco::PreshowerClusterShape> recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_obj;
 //edm::Wrapper<vector<reco::RecoChargedRefCandidate> > *recoRecoChargedRefCandidates_trackRefsForJets__L1_;
   Bool_t          recoRecoChargedRefCandidates_trackRefsForJets__L1_present;
   vector<reco::RecoChargedRefCandidate> recoRecoChargedRefCandidates_trackRefsForJets__L1_obj;
 //edm::Wrapper<vector<reco::RecoEcalCandidate> > *recoRecoEcalCandidates_hfRecoEcalCandidate__L1_;
   Bool_t          recoRecoEcalCandidates_hfRecoEcalCandidate__L1_present;
   vector<reco::RecoEcalCandidate> recoRecoEcalCandidates_hfRecoEcalCandidate__L1_obj;
 //edm::Wrapper<vector<reco::RecoTauPiZero> > *recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_;
   Bool_t          recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_present;
   vector<reco::RecoTauPiZero> recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_obj;
 //edm::Wrapper<vector<reco::SecondaryVertexTagInfo> > *recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_;
   Bool_t          recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_present;
   vector<reco::SecondaryVertexTagInfo> recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_obj;
 //edm::Wrapper<vector<reco::SecondaryVertexTagInfo> > *recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_;
   Bool_t          recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_present;
   vector<reco::SecondaryVertexTagInfo> recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_obj;
 //edm::Wrapper<vector<reco::SoftLeptonTagInfo> > *recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_;
   Bool_t          recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_present;
   vector<reco::SoftLeptonTagInfo> recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_obj;
 //edm::Wrapper<vector<reco::SoftLeptonTagInfo> > *recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_;
   Bool_t          recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_present;
   vector<reco::SoftLeptonTagInfo> recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_correctedHybridSuperClusters__L1_;
   Bool_t          recoSuperClusters_correctedHybridSuperClusters__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_correctedHybridSuperClusters__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_;
   Bool_t          recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_hfEMClusters__L1_;
   Bool_t          recoSuperClusters_hfEMClusters__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_hfEMClusters__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_hybridSuperClusters__L1_;
   Bool_t          recoSuperClusters_hybridSuperClusters__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_hybridSuperClusters__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_;
   Bool_t          recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_particleFlowEGamma__L1_;
   Bool_t          recoSuperClusters_particleFlowEGamma__L1_present;
   vector<reco::SuperCluster> recoSuperClusters_particleFlowEGamma__L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_;
   Bool_t          recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_present;
   vector<reco::SuperCluster> recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_;
   Bool_t          recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_present;
   vector<reco::SuperCluster> recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_;
   Bool_t          recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_present;
   vector<reco::SuperCluster> recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_;
   Bool_t          recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_present;
   vector<reco::SuperCluster> recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_obj;
 //edm::Wrapper<vector<reco::SuperCluster> > *recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_;
   Bool_t          recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_present;
   vector<reco::SuperCluster> recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_ckfInOutTracksFromConversions__L1_;
   Bool_t          recoTracks_ckfInOutTracksFromConversions__L1_present;
   vector<reco::Track> recoTracks_ckfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_ckfOutInTracksFromConversions__L1_;
   Bool_t          recoTracks_ckfOutInTracksFromConversions__L1_present;
   vector<reco::Track> recoTracks_ckfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_conversionStepTracks__L1_;
   Bool_t          recoTracks_conversionStepTracks__L1_present;
   vector<reco::Track> recoTracks_conversionStepTracks__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_cosmicMuons__L1_;
   Bool_t          recoTracks_cosmicMuons__L1_present;
   vector<reco::Track> recoTracks_cosmicMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_cosmicMuons1Leg__L1_;
   Bool_t          recoTracks_cosmicMuons1Leg__L1_present;
   vector<reco::Track> recoTracks_cosmicMuons1Leg__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_cosmicsVetoTracks__L1_;
   Bool_t          recoTracks_cosmicsVetoTracks__L1_present;
   vector<reco::Track> recoTracks_cosmicsVetoTracks__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_generalTracks__L1_;
   Bool_t          recoTracks_generalTracks__L1_present;
   vector<reco::Track> recoTracks_generalTracks__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_globalCosmicMuons__L1_;
   Bool_t          recoTracks_globalCosmicMuons__L1_present;
   vector<reco::Track> recoTracks_globalCosmicMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_globalCosmicMuons1Leg__L1_;
   Bool_t          recoTracks_globalCosmicMuons1Leg__L1_present;
   vector<reco::Track> recoTracks_globalCosmicMuons1Leg__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_globalMuons__L1_;
   Bool_t          recoTracks_globalMuons__L1_present;
   vector<reco::Track> recoTracks_globalMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_globalSETMuons__L1_;
   Bool_t          recoTracks_globalSETMuons__L1_present;
   vector<reco::Track> recoTracks_globalSETMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_pixelTracks__L1_;
   Bool_t          recoTracks_pixelTracks__L1_present;
   vector<reco::Track> recoTracks_pixelTracks__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_refittedStandAloneMuons__L1_;
   Bool_t          recoTracks_refittedStandAloneMuons__L1_present;
   vector<reco::Track> recoTracks_refittedStandAloneMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_regionalCosmicTracks__L1_;
   Bool_t          recoTracks_regionalCosmicTracks__L1_present;
   vector<reco::Track> recoTracks_regionalCosmicTracks__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_standAloneMuons__L1_;
   Bool_t          recoTracks_standAloneMuons__L1_present;
   vector<reco::Track> recoTracks_standAloneMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_standAloneSETMuons__L1_;
   Bool_t          recoTracks_standAloneSETMuons__L1_present;
   vector<reco::Track> recoTracks_standAloneSETMuons__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_;
   Bool_t          recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;
   vector<reco::Track> recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_;
   Bool_t          recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;
   vector<reco::Track> recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_;
   Bool_t          recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_present;
   vector<reco::Track> recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_standAloneMuons_UpdatedAtVtx_L1_;
   Bool_t          recoTracks_standAloneMuons_UpdatedAtVtx_L1_present;
   vector<reco::Track> recoTracks_standAloneMuons_UpdatedAtVtx_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_;
   Bool_t          recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_present;
   vector<reco::Track> recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_tevMuons_default_L1_;
   Bool_t          recoTracks_tevMuons_default_L1_present;
   vector<reco::Track> recoTracks_tevMuons_default_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_tevMuons_dyt_L1_;
   Bool_t          recoTracks_tevMuons_dyt_L1_present;
   vector<reco::Track> recoTracks_tevMuons_dyt_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_tevMuons_firstHit_L1_;
   Bool_t          recoTracks_tevMuons_firstHit_L1_present;
   vector<reco::Track> recoTracks_tevMuons_firstHit_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_impactParameterTagInfos_ghostTracks_L1_;
   Bool_t          recoTracks_impactParameterTagInfos_ghostTracks_L1_present;
   vector<reco::Track> recoTracks_impactParameterTagInfos_ghostTracks_L1_obj;
 //edm::Wrapper<vector<reco::Track> > *recoTracks_tevMuons_picky_L1_;
   Bool_t          recoTracks_tevMuons_picky_L1_present;
   vector<reco::Track> recoTracks_tevMuons_picky_L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_ckfInOutTracksFromConversions__L1_;
   Bool_t          recoTrackExtras_ckfInOutTracksFromConversions__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_ckfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_ckfOutInTracksFromConversions__L1_;
   Bool_t          recoTrackExtras_ckfOutInTracksFromConversions__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_ckfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_conversionStepTracks__L1_;
   Bool_t          recoTrackExtras_conversionStepTracks__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_conversionStepTracks__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_cosmicMuons__L1_;
   Bool_t          recoTrackExtras_cosmicMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_cosmicMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_cosmicMuons1Leg__L1_;
   Bool_t          recoTrackExtras_cosmicMuons1Leg__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_cosmicMuons1Leg__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_electronGsfTracks__L1_;
   Bool_t          recoTrackExtras_electronGsfTracks__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_electronGsfTracks__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_generalTracks__L1_;
   Bool_t          recoTrackExtras_generalTracks__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_generalTracks__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_globalCosmicMuons__L1_;
   Bool_t          recoTrackExtras_globalCosmicMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_globalCosmicMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_globalCosmicMuons1Leg__L1_;
   Bool_t          recoTrackExtras_globalCosmicMuons1Leg__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_globalCosmicMuons1Leg__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_globalMuons__L1_;
   Bool_t          recoTrackExtras_globalMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_globalMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_globalSETMuons__L1_;
   Bool_t          recoTrackExtras_globalSETMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_globalSETMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_pixelTracks__L1_;
   Bool_t          recoTrackExtras_pixelTracks__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_pixelTracks__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_refittedStandAloneMuons__L1_;
   Bool_t          recoTrackExtras_refittedStandAloneMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_refittedStandAloneMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_regionalCosmicTracks__L1_;
   Bool_t          recoTrackExtras_regionalCosmicTracks__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_regionalCosmicTracks__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_standAloneMuons__L1_;
   Bool_t          recoTrackExtras_standAloneMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_standAloneMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_standAloneSETMuons__L1_;
   Bool_t          recoTrackExtras_standAloneSETMuons__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_standAloneSETMuons__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_;
   Bool_t          recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_;
   Bool_t          recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;
   vector<reco::TrackExtra> recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_tevMuons_default_L1_;
   Bool_t          recoTrackExtras_tevMuons_default_L1_present;
   vector<reco::TrackExtra> recoTrackExtras_tevMuons_default_L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_tevMuons_dyt_L1_;
   Bool_t          recoTrackExtras_tevMuons_dyt_L1_present;
   vector<reco::TrackExtra> recoTrackExtras_tevMuons_dyt_L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_tevMuons_firstHit_L1_;
   Bool_t          recoTrackExtras_tevMuons_firstHit_L1_present;
   vector<reco::TrackExtra> recoTrackExtras_tevMuons_firstHit_L1_obj;
 //edm::Wrapper<vector<reco::TrackExtra> > *recoTrackExtras_tevMuons_picky_L1_;
   Bool_t          recoTrackExtras_tevMuons_picky_L1_present;
   vector<reco::TrackExtra> recoTrackExtras_tevMuons_picky_L1_obj;
 //edm::Wrapper<vector<reco::TrackExtrapolation> > *recoTrackExtrapolations_trackExtrapolator__L1_;
   Bool_t          recoTrackExtrapolations_trackExtrapolator__L1_present;
   vector<reco::TrackExtrapolation> recoTrackExtrapolations_trackExtrapolator__L1_obj;
 //edm::Wrapper<vector<reco::TrackIPTagInfo> > *recoTrackIPTagInfos_impactParameterTagInfos__L1_;
   Bool_t          recoTrackIPTagInfos_impactParameterTagInfos__L1_present;
   vector<reco::TrackIPTagInfo> recoTrackIPTagInfos_impactParameterTagInfos__L1_obj;
 //edm::Wrapper<vector<reco::TrackJet> > *recoTrackJets_ak5TrackJets__L1_;
   Bool_t          recoTrackJets_ak5TrackJets__L1_present;
   vector<reco::TrackJet> recoTrackJets_ak5TrackJets__L1_obj;
 //edm::Wrapper<vector<reco::Vertex> > *recoVertexs_offlinePrimaryVertices__L1_;
   Bool_t          recoVertexs_offlinePrimaryVertices__L1_present;
   vector<reco::Vertex> recoVertexs_offlinePrimaryVertices__L1_obj;
 //edm::Wrapper<vector<reco::Vertex> > *recoVertexs_offlinePrimaryVerticesWithBS__L1_;
   Bool_t          recoVertexs_offlinePrimaryVerticesWithBS__L1_present;
   vector<reco::Vertex> recoVertexs_offlinePrimaryVerticesWithBS__L1_obj;
 //edm::Wrapper<vector<reco::Vertex> > *recoVertexs_pixelVertices__L1_;
   Bool_t          recoVertexs_pixelVertices__L1_present;
   vector<reco::Vertex> recoVertexs_pixelVertices__L1_obj;
 //edm::Wrapper<vector<reco::VertexCompositeCandidate> > *recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_;
   Bool_t          recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_present;
   vector<reco::VertexCompositeCandidate> recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_obj;
 //edm::Wrapper<vector<reco::VertexCompositeCandidate> > *recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_;
   Bool_t          recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_present;
   vector<reco::VertexCompositeCandidate> recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_obj;
 //edm::Wrapper<vector<pair<csc::L1Track,MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > > > *cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_;
   Bool_t          cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_present;
   vector<pair<csc::L1Track,MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > > cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_obj;
 //edm::Wrapper<vector<pair<csc::L1Track,MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > > > *cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_;
   Bool_t          cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_present;
   vector<pair<csc::L1Track,MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi> > > cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_obj;

   // List of branches
   TBranch        *b_EventAuxiliary;   //!
   TBranch        *b_EventProductProvenance;   //!
   TBranch        *b_EventSelections;   //!
   TBranch        *b_BranchListIndexes;   //!
   TBranch        *b_csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_present;   //!
   TBranch        *b_csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_obj;   //!
   TBranch        *b_csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_present;   //!
   TBranch        *b_csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_obj;   //!
   TBranch        *b_ClusterSummary_clusterSummaryProducer__L1_present;   //!
   TBranch        *b_ClusterSummary_clusterSummaryProducer__L1_obj;   //!
   TBranch        *b_CrossingFramePlaybackInfoExtended_mix__L1_present;   //!
   TBranch        *b_CrossingFramePlaybackInfoExtended_mix__L1_obj;   //!
   TBranch        *b_EBDigiCollection_simEcalDigis_ebDigis_L1_present;   //!
   TBranch        *b_EBDigiCollection_simEcalDigis_ebDigis_L1_obj;   //!
   TBranch        *b_EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_present;   //!
   TBranch        *b_EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_obj;   //!
   TBranch        *b_EEDigiCollection_simEcalDigis_eeDigis_L1_present;   //!
   TBranch        *b_EEDigiCollection_simEcalDigis_eeDigis_L1_obj;   //!
   TBranch        *b_EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_present;   //!
   TBranch        *b_EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_obj;   //!
   TBranch        *b_ESDigiCollection_simEcalPreshowerDigis__L1_present;   //!
   TBranch        *b_ESDigiCollection_simEcalPreshowerDigis__L1_obj;   //!
   TBranch        *b_EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_present;   //!
   TBranch        *b_EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_obj;   //!
   TBranch        *b_FEDRawDataCollection_rawDataCollector__L1_present;   //!
   TBranch        *b_FEDRawDataCollection_rawDataCollector__L1_obj;   //!
   TBranch        *b_GenEventInfoProduct_generator__L1_present;   //!
   TBranch        *b_GenEventInfoProduct_generator__L1_obj;   //!
   TBranch        *b_HcalNoiseSummary_hcalnoise__L1_present;   //!
   TBranch        *b_HcalNoiseSummary_hcalnoise__L1_obj;   //!
   TBranch        *b_HcalUnpackerReport_castorDigis__L1_present;   //!
   TBranch        *b_HcalUnpackerReport_castorDigis__L1_obj;   //!
   TBranch        *b_HcalUnpackerReport_hcalDigis__L1_present;   //!
   TBranch        *b_HcalUnpackerReport_hcalDigis__L1_obj;   //!
   TBranch        *b_L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_present;   //!
   TBranch        *b_L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_obj;   //!
   TBranch        *b_L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_present;   //!
   TBranch        *b_L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_obj;   //!
   TBranch        *b_L1GlobalTriggerObjectMapRecord_simGtDigis__L1_present;   //!
   TBranch        *b_L1GlobalTriggerObjectMapRecord_simGtDigis__L1_obj;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_gtDigis__L1_present;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_gtDigis__L1_obj;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_simGtDigis__L1_present;   //!
   TBranch        *b_L1GlobalTriggerReadoutRecord_simGtDigis__L1_obj;   //!
   TBranch        *b_L1MuDTChambPhContainer_dttfDigis__L1_present;   //!
   TBranch        *b_L1MuDTChambPhContainer_dttfDigis__L1_obj;   //!
   TBranch        *b_L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_L1MuDTChambThContainer_dttfDigis__L1_present;   //!
   TBranch        *b_L1MuDTChambThContainer_dttfDigis__L1_obj;   //!
   TBranch        *b_L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_L1MuDTTrackContainer_dttfDigis_DATA_L1_present;   //!
   TBranch        *b_L1MuDTTrackContainer_dttfDigis_DATA_L1_obj;   //!
   TBranch        *b_L1MuDTTrackContainer_simDttfDigis_DTTF_L1_present;   //!
   TBranch        *b_L1MuDTTrackContainer_simDttfDigis_DTTF_L1_obj;   //!
   TBranch        *b_L1MuGMTReadoutCollection_gtDigis__L1_present;   //!
   TBranch        *b_L1MuGMTReadoutCollection_gtDigis__L1_obj;   //!
   TBranch        *b_L1MuGMTReadoutCollection_simGmtDigis__L1_present;   //!
   TBranch        *b_L1MuGMTReadoutCollection_simGmtDigis__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_present;   //!
   TBranch        *b_CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_obj;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_present;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_present;   //!
   TBranch        *b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_obj;   //!
   TBranch        *b_CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_present;   //!
   TBranch        *b_CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_obj;   //!
   TBranch        *b_CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_present;   //!
   TBranch        *b_CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_obj;   //!
   TBranch        *b_CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_present;   //!
   TBranch        *b_DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_obj;   //!
   TBranch        *b_DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_present;   //!
   TBranch        *b_DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_obj;   //!
   TBranch        *b_RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_present;   //!
   TBranch        *b_RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoAll__L1_present;   //!
   TBranch        *b_double_fixedGridRhoAll__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetAll__L1_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetAll__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetAllCalo__L1_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetAllCalo__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralCalo__L1_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralCalo__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralChargedPileUp__L1_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralChargedPileUp__L1_obj;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralNeutral__L1_present;   //!
   TBranch        *b_double_fixedGridRhoFastjetCentralNeutral__L1_obj;   //!
   TBranch        *b_double_ak4CaloJets_rho_L1_present;   //!
   TBranch        *b_double_ak4CaloJets_rho_L1_obj;   //!
   TBranch        *b_double_ak4GenJets_rho_L1_present;   //!
   TBranch        *b_double_ak4GenJets_rho_L1_obj;   //!
   TBranch        *b_double_ak4PFJetsCHS_rho_L1_present;   //!
   TBranch        *b_double_ak4PFJetsCHS_rho_L1_obj;   //!
   TBranch        *b_double_ak5CaloJets_rho_L1_present;   //!
   TBranch        *b_double_ak5CaloJets_rho_L1_obj;   //!
   TBranch        *b_double_ak5GenJets_rho_L1_present;   //!
   TBranch        *b_double_ak5GenJets_rho_L1_obj;   //!
   TBranch        *b_double_ak5PFJets_rho_L1_present;   //!
   TBranch        *b_double_ak5PFJets_rho_L1_obj;   //!
   TBranch        *b_double_ak5PFJetsCHS_rho_L1_present;   //!
   TBranch        *b_double_ak5PFJetsCHS_rho_L1_obj;   //!
   TBranch        *b_double_ak5TrackJets_rho_L1_present;   //!
   TBranch        *b_double_ak5TrackJets_rho_L1_obj;   //!
   TBranch        *b_double_ak7BasicJets_rho_L1_present;   //!
   TBranch        *b_double_ak7BasicJets_rho_L1_obj;   //!
   TBranch        *b_double_ak8PFJets_rho_L1_present;   //!
   TBranch        *b_double_ak8PFJets_rho_L1_obj;   //!
   TBranch        *b_double_ak8PFJetsCHS_rho_L1_present;   //!
   TBranch        *b_double_ak8PFJetsCHS_rho_L1_obj;   //!
   TBranch        *b_double_ca8PFJetsCHS_rho_L1_present;   //!
   TBranch        *b_double_ca8PFJetsCHS_rho_L1_obj;   //!
   TBranch        *b_double_ca8PFJetsCHSPruned_rho_L1_present;   //!
   TBranch        *b_double_ca8PFJetsCHSPruned_rho_L1_obj;   //!
   TBranch        *b_double_cmsTopTagPFJetsCHS_rho_L1_present;   //!
   TBranch        *b_double_cmsTopTagPFJetsCHS_rho_L1_obj;   //!
   TBranch        *b_double_iterativeCone5GenJets_rho_L1_present;   //!
   TBranch        *b_double_iterativeCone5GenJets_rho_L1_obj;   //!
   TBranch        *b_double_kt4GenJets_rho_L1_present;   //!
   TBranch        *b_double_kt4GenJets_rho_L1_obj;   //!
   TBranch        *b_double_kt6GenJets_rho_L1_present;   //!
   TBranch        *b_double_kt6GenJets_rho_L1_obj;   //!
   TBranch        *b_double_ak4CaloJets_sigma_L1_present;   //!
   TBranch        *b_double_ak4CaloJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak4GenJets_sigma_L1_present;   //!
   TBranch        *b_double_ak4GenJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak4PFJetsCHS_sigma_L1_present;   //!
   TBranch        *b_double_ak4PFJetsCHS_sigma_L1_obj;   //!
   TBranch        *b_double_ak5CaloJets_sigma_L1_present;   //!
   TBranch        *b_double_ak5CaloJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak5GenJets_sigma_L1_present;   //!
   TBranch        *b_double_ak5GenJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak5PFJets_sigma_L1_present;   //!
   TBranch        *b_double_ak5PFJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak5PFJetsCHS_sigma_L1_present;   //!
   TBranch        *b_double_ak5PFJetsCHS_sigma_L1_obj;   //!
   TBranch        *b_double_ak5TrackJets_sigma_L1_present;   //!
   TBranch        *b_double_ak5TrackJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak7BasicJets_sigma_L1_present;   //!
   TBranch        *b_double_ak7BasicJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak8PFJets_sigma_L1_present;   //!
   TBranch        *b_double_ak8PFJets_sigma_L1_obj;   //!
   TBranch        *b_double_ak8PFJetsCHS_sigma_L1_present;   //!
   TBranch        *b_double_ak8PFJetsCHS_sigma_L1_obj;   //!
   TBranch        *b_double_ca8PFJetsCHS_sigma_L1_present;   //!
   TBranch        *b_double_ca8PFJetsCHS_sigma_L1_obj;   //!
   TBranch        *b_double_ca8PFJetsCHSPruned_sigma_L1_present;   //!
   TBranch        *b_double_ca8PFJetsCHSPruned_sigma_L1_obj;   //!
   TBranch        *b_double_cmsTopTagPFJetsCHS_sigma_L1_present;   //!
   TBranch        *b_double_cmsTopTagPFJetsCHS_sigma_L1_obj;   //!
   TBranch        *b_double_iterativeCone5GenJets_sigma_L1_present;   //!
   TBranch        *b_double_iterativeCone5GenJets_sigma_L1_obj;   //!
   TBranch        *b_double_kt4GenJets_sigma_L1_present;   //!
   TBranch        *b_double_kt4GenJets_sigma_L1_obj;   //!
   TBranch        *b_double_kt6GenJets_sigma_L1_present;   //!
   TBranch        *b_double_kt6GenJets_sigma_L1_obj;   //!
   TBranch        *b_recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_present;   //!
   TBranch        *b_recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_obj;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_present;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_obj;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_present;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_obj;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_present;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_obj;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_present;   //!
   TBranch        *b_recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_obj;   //!
   TBranch        *b_recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_present;   //!
   TBranch        *b_recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_obj;   //!
   TBranch        *b_recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_present;   //!
   TBranch        *b_recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_obj;   //!
   TBranch        *b_PixelDigiedmDetSetVector_simSiPixelDigis__L1_present;   //!
   TBranch        *b_PixelDigiedmDetSetVector_simSiPixelDigis__L1_obj;   //!
   TBranch        *b_PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_present;   //!
   TBranch        *b_PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_obj;   //!
   TBranch        *b_RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_present;   //!
   TBranch        *b_RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_obj;   //!
   TBranch        *b_SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_present;   //!
   TBranch        *b_SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_obj;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_present;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_obj;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_present;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_obj;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_present;   //!
   TBranch        *b_SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_obj;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_present;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_obj;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_present;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_obj;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_present;   //!
   TBranch        *b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_obj;   //!
   TBranch        *b_DetIdedmEDCollection_siPixelDigis__L1_present;   //!
   TBranch        *b_DetIdedmEDCollection_siPixelDigis__L1_obj;   //!
   TBranch        *b_DetIdedmEDCollection_siStripDigis__L1_present;   //!
   TBranch        *b_DetIdedmEDCollection_siStripDigis__L1_obj;   //!
   TBranch        *b_DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_present;   //!
   TBranch        *b_DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_obj;   //!
   TBranch        *b_edmHepMCProduct_generator__L1_present;   //!
   TBranch        *b_edmHepMCProduct_generator__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_conversionStepTracks__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_conversionStepTracks__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_cosmicMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_cosmicMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_cosmicMuons1Leg__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_cosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_electronGsfTracks__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_electronGsfTracks__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_generalTracks__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_generalTracks__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_globalCosmicMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_globalCosmicMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_globalMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_globalMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_globalSETMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_globalSETMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_pixelTracks__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_pixelTracks__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_refittedStandAloneMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_refittedStandAloneMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_regionalCosmicTracks__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_regionalCosmicTracks__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_standAloneMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_standAloneMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_standAloneSETMuons__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_standAloneSETMuons__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_default_L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_default_L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_dyt_L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_dyt_L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_firstHit_L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_firstHit_L1_obj;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_picky_L1_present;   //!
   TBranch        *b_TrackingRecHitsOwned_tevMuons_picky_L1_obj;   //!
   TBranch        *b_edmRandomEngineStates_randomEngineStateProducer__L1_present;   //!
   TBranch        *b_edmRandomEngineStates_randomEngineStateProducer__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_present;   //!
   TBranch        *b_CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_obj;   //!
   TBranch        *b_CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_present;   //!
   TBranch        *b_CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_obj;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_present;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_obj;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_present;   //!
   TBranch        *b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_obj;   //!
   TBranch        *b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_present;   //!
   TBranch        *b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_obj;   //!
   TBranch        *b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_present;   //!
   TBranch        *b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_obj;   //!
   TBranch        *b_RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_present;   //!
   TBranch        *b_RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_obj;   //!
   TBranch        *b_CaloTowersSorted_towerMaker__L1_present;   //!
   TBranch        *b_CaloTowersSorted_towerMaker__L1_obj;   //!
   TBranch        *b_CastorRecHitsSorted_castorreco__L1_present;   //!
   TBranch        *b_CastorRecHitsSorted_castorreco__L1_obj;   //!
   TBranch        *b_EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_present;   //!
   TBranch        *b_EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_obj;   //!
   TBranch        *b_EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_present;   //!
   TBranch        *b_EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsEB__L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsEB__L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsEE__L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsEE__L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsES__L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_reducedEcalRecHitsES__L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_obj;   //!
   TBranch        *b_EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_present;   //!
   TBranch        *b_EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_obj;   //!
   TBranch        *b_EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_present;   //!
   TBranch        *b_EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_obj;   //!
   TBranch        *b_EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_HBHEDataFramesSorted_simHcalDigis__L1_present;   //!
   TBranch        *b_HBHEDataFramesSorted_simHcalDigis__L1_obj;   //!
   TBranch        *b_HBHERecHitsSorted_hbhereco__L1_present;   //!
   TBranch        *b_HBHERecHitsSorted_hbhereco__L1_obj;   //!
   TBranch        *b_HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_present;   //!
   TBranch        *b_HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_obj;   //!
   TBranch        *b_HFDataFramesSorted_simHcalDigis__L1_present;   //!
   TBranch        *b_HFDataFramesSorted_simHcalDigis__L1_obj;   //!
   TBranch        *b_HFRecHitsSorted_hfreco__L1_present;   //!
   TBranch        *b_HFRecHitsSorted_hfreco__L1_obj;   //!
   TBranch        *b_HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_present;   //!
   TBranch        *b_HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_obj;   //!
   TBranch        *b_HODataFramesSorted_simHcalDigis__L1_present;   //!
   TBranch        *b_HODataFramesSorted_simHcalDigis__L1_obj;   //!
   TBranch        *b_HORecHitsSorted_horeco__L1_present;   //!
   TBranch        *b_HORecHitsSorted_horeco__L1_obj;   //!
   TBranch        *b_HORecHitsSorted_reducedHcalRecHits_horeco_L1_present;   //!
   TBranch        *b_HORecHitsSorted_reducedHcalRecHits_horeco_L1_obj;   //!
   TBranch        *b_HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_present;   //!
   TBranch        *b_HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_obj;   //!
   TBranch        *b_HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_present;   //!
   TBranch        *b_HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_obj;   //!
   TBranch        *b_HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_present;   //!
   TBranch        *b_HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_obj;   //!
   TBranch        *b_ZDCDataFramesSorted_hcalDigis__L1_present;   //!
   TBranch        *b_ZDCDataFramesSorted_hcalDigis__L1_obj;   //!
   TBranch        *b_ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_present;   //!
   TBranch        *b_ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_obj;   //!
   TBranch        *b_ZDCRecHitsSorted_zdcreco__L1_present;   //!
   TBranch        *b_ZDCRecHitsSorted_zdcreco__L1_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__L1_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_present;   //!
   TBranch        *b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidAllArbitrated_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidAllArbitrated_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidGMStaChiCompatibility_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidGMStaChiCompatibility_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidGMTkChiCompatibility_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidGMTkChiCompatibility_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidGMTkKinkTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidGMTkKinkTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidGlobalMuonPromptTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidGlobalMuonPromptTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidRPCMuLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidRPCMuLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTM2DCompatibilityTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTM2DCompatibilityTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationAngLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationAngLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationAngTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationAngTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMLastStationTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationAngLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationAngLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationAngTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationAngTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationLoose_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationLoose_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationTight_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTMOneStationTight_L1_obj;   //!
   TBranch        *b_booledmValueMap_muons_muidTrackerMuonArbitrated_L1_present;   //!
   TBranch        *b_booledmValueMap_muons_muidTrackerMuonArbitrated_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_obj;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_present;   //!
   TBranch        *b_doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_obj;   //!
   TBranch        *b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_present;   //!
   TBranch        *b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_obj;   //!
   TBranch        *b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_present;   //!
   TBranch        *b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_obj;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_present;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_obj;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_present;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_obj;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_present;   //!
   TBranch        *b_recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_obj;   //!
   TBranch        *b_recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_present;   //!
   TBranch        *b_recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_obj;   //!
   TBranch        *b_recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_present;   //!
   TBranch        *b_recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_obj;   //!
   TBranch        *b_floatedmValueMap_eidLoose__L1_present;   //!
   TBranch        *b_floatedmValueMap_eidLoose__L1_obj;   //!
   TBranch        *b_floatedmValueMap_eidRobustHighEnergy__L1_present;   //!
   TBranch        *b_floatedmValueMap_eidRobustHighEnergy__L1_obj;   //!
   TBranch        *b_floatedmValueMap_eidRobustLoose__L1_present;   //!
   TBranch        *b_floatedmValueMap_eidRobustLoose__L1_obj;   //!
   TBranch        *b_floatedmValueMap_eidRobustTight__L1_present;   //!
   TBranch        *b_floatedmValueMap_eidRobustTight__L1_obj;   //!
   TBranch        *b_floatedmValueMap_eidTight__L1_present;   //!
   TBranch        *b_floatedmValueMap_eidTight__L1_obj;   //!
   TBranch        *b_floatedmValueMap_generalTracks_MVAVals_L1_present;   //!
   TBranch        *b_floatedmValueMap_generalTracks_MVAVals_L1_obj;   //!
   TBranch        *b_recoCastorJetIDedmValueMap_ak7CastorJetID__L1_present;   //!
   TBranch        *b_recoCastorJetIDedmValueMap_ak7CastorJetID__L1_obj;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_present;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_obj;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxHarmonic2__L1_present;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxHarmonic2__L1_obj;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxTruncated40__L1_present;   //!
   TBranch        *b_recoDeDxDataedmValueMap_dedxTruncated40__L1_obj;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositJets__L1_present;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositJets__L1_obj;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositTk__L1_present;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositTk__L1_obj;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_present;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_obj;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_present;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_obj;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_present;   //!
   TBranch        *b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_obj;   //!
   TBranch        *b_recoJetIDedmValueMap_ak5JetID__L1_present;   //!
   TBranch        *b_recoJetIDedmValueMap_ak5JetID__L1_obj;   //!
   TBranch        *b_recoJetIDedmValueMap_ak7JetID__L1_present;   //!
   TBranch        *b_recoJetIDedmValueMap_ak7JetID__L1_obj;   //!
   TBranch        *b_recoJetIDedmValueMap_ic5JetID__L1_present;   //!
   TBranch        *b_recoJetIDedmValueMap_ic5JetID__L1_obj;   //!
   TBranch        *b_recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_present;   //!
   TBranch        *b_recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_obj;   //!
   TBranch        *b_recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_present;   //!
   TBranch        *b_recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_obj;   //!
   TBranch        *b_recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_present;   //!
   TBranch        *b_recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_obj;   //!
   TBranch        *b_recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_present;   //!
   TBranch        *b_recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_obj;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_combined_L1_present;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_combined_L1_obj;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_csc_L1_present;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_csc_L1_obj;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_dt_L1_present;   //!
   TBranch        *b_recoMuonTimeExtraedmValueMap_muons_dt_L1_obj;   //!
   TBranch        *b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_present;   //!
   TBranch        *b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_obj;   //!
   TBranch        *b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_present;   //!
   TBranch        *b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_obj;   //!
   TBranch        *b_uintedmValueMap_muons_cosmicsVeto_L1_present;   //!
   TBranch        *b_uintedmValueMap_muons_cosmicsVeto_L1_obj;   //!
   TBranch        *b_SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_present;   //!
   TBranch        *b_SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_obj;   //!
   TBranch        *b_SiStripClusteredmNewDetSetVector_siStripClusters__L1_present;   //!
   TBranch        *b_SiStripClusteredmNewDetSetVector_siStripClusters__L1_obj;   //!
   TBranch        *b_recoBeamHaloSummary_BeamHaloSummary__L1_present;   //!
   TBranch        *b_recoBeamHaloSummary_BeamHaloSummary__L1_obj;   //!
   TBranch        *b_recoBeamSpot_offlineBeamSpot__L1_present;   //!
   TBranch        *b_recoBeamSpot_offlineBeamSpot__L1_obj;   //!
   TBranch        *b_recoCSCHaloData_CSCHaloData__L1_present;   //!
   TBranch        *b_recoCSCHaloData_CSCHaloData__L1_obj;   //!
   TBranch        *b_recoEcalHaloData_EcalHaloData__L1_present;   //!
   TBranch        *b_recoEcalHaloData_EcalHaloData__L1_obj;   //!
   TBranch        *b_recoGlobalHaloData_GlobalHaloData__L1_present;   //!
   TBranch        *b_recoGlobalHaloData_GlobalHaloData__L1_obj;   //!
   TBranch        *b_recoHcalHaloData_HcalHaloData__L1_present;   //!
   TBranch        *b_recoHcalHaloData_HcalHaloData__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_obj;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_present;   //!
   TBranch        *b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_obj;   //!
   TBranch        *b_intL1CSCSPStatusDigisstdpair_csctfDigis__L1_present;   //!
   TBranch        *b_intL1CSCSPStatusDigisstdpair_csctfDigis__L1_obj;   //!
   TBranch        *b_BeamSpotOnlines_scalersRawToDigi__L1_present;   //!
   TBranch        *b_BeamSpotOnlines_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_DcsStatuss_scalersRawToDigi__L1_present;   //!
   TBranch        *b_DcsStatuss_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_L1AcceptBunchCrossings_scalersRawToDigi__L1_present;   //!
   TBranch        *b_L1AcceptBunchCrossings_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_L1CaloEmCands_gctDigis__L1_present;   //!
   TBranch        *b_L1CaloEmCands_gctDigis__L1_obj;   //!
   TBranch        *b_L1CaloEmCands_simRctDigis__L1_present;   //!
   TBranch        *b_L1CaloEmCands_simRctDigis__L1_obj;   //!
   TBranch        *b_L1CaloRegions_gctDigis__L1_present;   //!
   TBranch        *b_L1CaloRegions_gctDigis__L1_obj;   //!
   TBranch        *b_L1CaloRegions_simRctDigis__L1_present;   //!
   TBranch        *b_L1CaloRegions_simRctDigis__L1_obj;   //!
   TBranch        *b_L1GctEmCands_gctDigis_isoEm_L1_present;   //!
   TBranch        *b_L1GctEmCands_gctDigis_isoEm_L1_obj;   //!
   TBranch        *b_L1GctEmCands_simGctDigis_isoEm_L1_present;   //!
   TBranch        *b_L1GctEmCands_simGctDigis_isoEm_L1_obj;   //!
   TBranch        *b_L1GctEmCands_gctDigis_nonIsoEm_L1_present;   //!
   TBranch        *b_L1GctEmCands_gctDigis_nonIsoEm_L1_obj;   //!
   TBranch        *b_L1GctEmCands_simGctDigis_nonIsoEm_L1_present;   //!
   TBranch        *b_L1GctEmCands_simGctDigis_nonIsoEm_L1_obj;   //!
   TBranch        *b_L1GctEtHads_gctDigis__L1_present;   //!
   TBranch        *b_L1GctEtHads_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctEtHads_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctEtHads_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctEtMisss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctEtMisss_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctEtMisss_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctEtMisss_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctEtTotals_gctDigis__L1_present;   //!
   TBranch        *b_L1GctEtTotals_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctEtTotals_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctEtTotals_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctFibreWords_gctDigis__L1_present;   //!
   TBranch        *b_L1GctFibreWords_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctHFBitCountss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctHFBitCountss_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctHFBitCountss_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctHFBitCountss_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctHFRingEtSumss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctHFRingEtSumss_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctHFRingEtSumss_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctHFRingEtSumss_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctHtMisss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctHtMisss_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctHtMisss_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctHtMisss_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternEmCands_gctDigis__L1_present;   //!
   TBranch        *b_L1GctInternEmCands_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternEtSums_gctDigis__L1_present;   //!
   TBranch        *b_L1GctInternEtSums_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternEtSums_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctInternEtSums_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternHFDatas_gctDigis__L1_present;   //!
   TBranch        *b_L1GctInternHFDatas_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternHtMisss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctInternHtMisss_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternHtMisss_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctInternHtMisss_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternJetDatas_gctDigis__L1_present;   //!
   TBranch        *b_L1GctInternJetDatas_gctDigis__L1_obj;   //!
   TBranch        *b_L1GctInternJetDatas_simGctDigis__L1_present;   //!
   TBranch        *b_L1GctInternJetDatas_simGctDigis__L1_obj;   //!
   TBranch        *b_L1GctJetCands_gctDigis_cenJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_gctDigis_cenJets_L1_obj;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_cenJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_cenJets_L1_obj;   //!
   TBranch        *b_L1GctJetCands_gctDigis_forJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_gctDigis_forJets_L1_obj;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_forJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_forJets_L1_obj;   //!
   TBranch        *b_L1GctJetCands_gctDigis_tauJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_gctDigis_tauJets_L1_obj;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_tauJets_L1_present;   //!
   TBranch        *b_L1GctJetCands_simGctDigis_tauJets_L1_obj;   //!
   TBranch        *b_L1GctJetCountss_gctDigis__L1_present;   //!
   TBranch        *b_L1GctJetCountss_gctDigis__L1_obj;   //!
   TBranch        *b_L1MuGMTCands_gtDigis__L1_present;   //!
   TBranch        *b_L1MuGMTCands_gtDigis__L1_obj;   //!
   TBranch        *b_L1MuGMTCands_simGmtDigis__L1_present;   //!
   TBranch        *b_L1MuGMTCands_simGmtDigis__L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_CSC_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_CSC_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_simCsctfDigis_CSC_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_simCsctfDigis_CSC_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_DT_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_DT_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_simDttfDigis_DT_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_simDttfDigis_DT_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_RPCb_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_RPCb_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_RPCf_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_gtDigis_RPCf_L1_obj;   //!
   TBranch        *b_L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_present;   //!
   TBranch        *b_L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_obj;   //!
   TBranch        *b_L1TriggerErrors_gctDigis__L1_present;   //!
   TBranch        *b_L1TriggerErrors_gctDigis__L1_obj;   //!
   TBranch        *b_L1TriggerScalerss_scalersRawToDigi__L1_present;   //!
   TBranch        *b_L1TriggerScalerss_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_Level1TriggerScalerss_scalersRawToDigi__L1_present;   //!
   TBranch        *b_Level1TriggerScalerss_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_LumiScalerss_scalersRawToDigi__L1_present;   //!
   TBranch        *b_LumiScalerss_scalersRawToDigi__L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_CaloHitsTk_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_CaloHitsTk_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorBU_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorBU_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorFI_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorFI_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorPL_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorPL_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorTU_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_CastorTU_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_ChamberHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_ChamberHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsEB_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsEB_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsEE_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsEE_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsES_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalHitsES_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_FibreHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_FibreHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_HcalHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_HcalHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_HcalTB06BeamHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_HcalTB06BeamHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_WedgeHits_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_WedgeHits_L1_obj;   //!
   TBranch        *b_PCaloHits_g4SimHits_ZDCHITS_L1_present;   //!
   TBranch        *b_PCaloHits_g4SimHits_ZDCHITS_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_BSCHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_BSCHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_FP420SI_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_FP420SI_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonCSCHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonCSCHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonDTHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonDTHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonGEMHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonGEMHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonRPCHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_MuonRPCHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_PLTHits_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_PLTHits_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsRP_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsRP_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsT1_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsT1_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsT2Gem_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TotemHitsT2Gem_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_obj;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_present;   //!
   TBranch        *b_PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_obj;   //!
   TBranch        *b_PileupSummaryInfos_addPileupInfo__L1_present;   //!
   TBranch        *b_PileupSummaryInfos_addPileupInfo__L1_obj;   //!
   TBranch        *b_RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_present;   //!
   TBranch        *b_RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_obj;   //!
   TBranch        *b_RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_present;   //!
   TBranch        *b_RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_obj;   //!
   TBranch        *b_SimTracks_g4SimHits__L1_present;   //!
   TBranch        *b_SimTracks_g4SimHits__L1_obj;   //!
   TBranch        *b_SimVertexs_g4SimHits__L1_present;   //!
   TBranch        *b_SimVertexs_g4SimHits__L1_obj;   //!
   TBranch        *b_TrajectorySeeds_CosmicMuonSeed__L1_present;   //!
   TBranch        *b_TrajectorySeeds_CosmicMuonSeed__L1_obj;   //!
   TBranch        *b_TrajectorySeeds_SETMuonSeed__L1_present;   //!
   TBranch        *b_TrajectorySeeds_SETMuonSeed__L1_obj;   //!
   TBranch        *b_TrajectorySeeds_ancientMuonSeed__L1_present;   //!
   TBranch        *b_TrajectorySeeds_ancientMuonSeed__L1_obj;   //!
   TBranch        *b_doubles_ak4CaloJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak4CaloJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak4GenJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak4GenJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak4PFJetsCHS_rhos_L1_present;   //!
   TBranch        *b_doubles_ak4PFJetsCHS_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak5CaloJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak5CaloJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak5GenJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak5GenJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak5PFJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak5PFJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak5PFJetsCHS_rhos_L1_present;   //!
   TBranch        *b_doubles_ak5PFJetsCHS_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak5TrackJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak5TrackJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak7BasicJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak7BasicJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak8PFJets_rhos_L1_present;   //!
   TBranch        *b_doubles_ak8PFJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak8PFJetsCHS_rhos_L1_present;   //!
   TBranch        *b_doubles_ak8PFJetsCHS_rhos_L1_obj;   //!
   TBranch        *b_doubles_ca8PFJetsCHS_rhos_L1_present;   //!
   TBranch        *b_doubles_ca8PFJetsCHS_rhos_L1_obj;   //!
   TBranch        *b_doubles_ca8PFJetsCHSPruned_rhos_L1_present;   //!
   TBranch        *b_doubles_ca8PFJetsCHSPruned_rhos_L1_obj;   //!
   TBranch        *b_doubles_cmsTopTagPFJetsCHS_rhos_L1_present;   //!
   TBranch        *b_doubles_cmsTopTagPFJetsCHS_rhos_L1_obj;   //!
   TBranch        *b_doubles_iterativeCone5GenJets_rhos_L1_present;   //!
   TBranch        *b_doubles_iterativeCone5GenJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_kt4GenJets_rhos_L1_present;   //!
   TBranch        *b_doubles_kt4GenJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_kt6GenJets_rhos_L1_present;   //!
   TBranch        *b_doubles_kt6GenJets_rhos_L1_obj;   //!
   TBranch        *b_doubles_ak4CaloJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak4CaloJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak4GenJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak4GenJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak4PFJetsCHS_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak4PFJetsCHS_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak5CaloJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak5CaloJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak5GenJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak5GenJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak5PFJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak5PFJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak5PFJetsCHS_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak5PFJetsCHS_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak5TrackJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak5TrackJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak7BasicJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak7BasicJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak8PFJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak8PFJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ak8PFJetsCHS_sigmas_L1_present;   //!
   TBranch        *b_doubles_ak8PFJetsCHS_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ca8PFJetsCHS_sigmas_L1_present;   //!
   TBranch        *b_doubles_ca8PFJetsCHS_sigmas_L1_obj;   //!
   TBranch        *b_doubles_ca8PFJetsCHSPruned_sigmas_L1_present;   //!
   TBranch        *b_doubles_ca8PFJetsCHSPruned_sigmas_L1_obj;   //!
   TBranch        *b_doubles_cmsTopTagPFJetsCHS_sigmas_L1_present;   //!
   TBranch        *b_doubles_cmsTopTagPFJetsCHS_sigmas_L1_obj;   //!
   TBranch        *b_doubles_iterativeCone5GenJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_iterativeCone5GenJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_kt4GenJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_kt4GenJets_sigmas_L1_obj;   //!
   TBranch        *b_doubles_kt6GenJets_sigmas_L1_present;   //!
   TBranch        *b_doubles_kt6GenJets_sigmas_L1_obj;   //!
   TBranch        *b_edmErrorSummaryEntrys_logErrorHarvester__L1_present;   //!
   TBranch        *b_edmErrorSummaryEntrys_logErrorHarvester__L1_obj;   //!
   TBranch        *b_recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_present;   //!
   TBranch        *b_recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_obj;   //!
   TBranch        *b_recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_present;   //!
   TBranch        *b_recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_obj;   //!
   TBranch        *b_ints_genParticles__L1_present;   //!
   TBranch        *b_ints_genParticles__L1_obj;   //!
   TBranch        *b_recoBasicJets_ak7BasicJets__L1_present;   //!
   TBranch        *b_recoBasicJets_ak7BasicJets__L1_obj;   //!
   TBranch        *b_recoBasicJets_ca8PFJetsCHSPruned__L1_present;   //!
   TBranch        *b_recoBasicJets_ca8PFJetsCHSPruned__L1_obj;   //!
   TBranch        *b_recoBasicJets_cmsTopTagPFJetsCHS__L1_present;   //!
   TBranch        *b_recoBasicJets_cmsTopTagPFJetsCHS__L1_obj;   //!
   TBranch        *b_recoCaloClusters_hfEMClusters__L1_present;   //!
   TBranch        *b_recoCaloClusters_hfEMClusters__L1_obj;   //!
   TBranch        *b_recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_obj;   //!
   TBranch        *b_recoCaloClusters_particleFlowEGamma_ESClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_particleFlowEGamma_ESClusters_L1_obj;   //!
   TBranch        *b_recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_obj;   //!
   TBranch        *b_recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_obj;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_present;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_obj;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_present;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_obj;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_present;   //!
   TBranch        *b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_obj;   //!
   TBranch        *b_recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_obj;   //!
   TBranch        *b_recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_present;   //!
   TBranch        *b_recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_obj;   //!
   TBranch        *b_recoCaloJets_ak4CaloJets__L1_present;   //!
   TBranch        *b_recoCaloJets_ak4CaloJets__L1_obj;   //!
   TBranch        *b_recoCaloJets_ak5CaloJets__L1_present;   //!
   TBranch        *b_recoCaloJets_ak5CaloJets__L1_obj;   //!
   TBranch        *b_recoCaloMETs_corMetGlobalMuons__L1_present;   //!
   TBranch        *b_recoCaloMETs_corMetGlobalMuons__L1_obj;   //!
   TBranch        *b_recoCaloMETs_met__L1_present;   //!
   TBranch        *b_recoCaloMETs_met__L1_obj;   //!
   TBranch        *b_recoCaloMETs_metHO__L1_present;   //!
   TBranch        *b_recoCaloMETs_metHO__L1_obj;   //!
   TBranch        *b_recoCaloMETs_metNoHF__L1_present;   //!
   TBranch        *b_recoCaloMETs_metNoHF__L1_obj;   //!
   TBranch        *b_recoCaloMuons_calomuons__L1_present;   //!
   TBranch        *b_recoCaloMuons_calomuons__L1_obj;   //!
   TBranch        *b_recoCastorTowers_CastorTowerReco__L1_present;   //!
   TBranch        *b_recoCastorTowers_CastorTowerReco__L1_obj;   //!
   TBranch        *b_recoConversions_allConversions__L1_present;   //!
   TBranch        *b_recoConversions_allConversions__L1_obj;   //!
   TBranch        *b_recoConversions_conversions__L1_present;   //!
   TBranch        *b_recoConversions_conversions__L1_obj;   //!
   TBranch        *b_recoConversions_gedPhotonCore__L1_present;   //!
   TBranch        *b_recoConversions_gedPhotonCore__L1_obj;   //!
   TBranch        *b_recoConversions_uncleanedOnlyAllConversions__L1_present;   //!
   TBranch        *b_recoConversions_uncleanedOnlyAllConversions__L1_obj;   //!
   TBranch        *b_recoElectronSeeds_electronMergedSeeds__L1_present;   //!
   TBranch        *b_recoElectronSeeds_electronMergedSeeds__L1_obj;   //!
   TBranch        *b_recoGenJets_ak4GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_ak4GenJets__L1_obj;   //!
   TBranch        *b_recoGenJets_ak5GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_ak5GenJets__L1_obj;   //!
   TBranch        *b_recoGenJets_ak8GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_ak8GenJets__L1_obj;   //!
   TBranch        *b_recoGenJets_iterativeCone5GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_iterativeCone5GenJets__L1_obj;   //!
   TBranch        *b_recoGenJets_kt4GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_kt4GenJets__L1_obj;   //!
   TBranch        *b_recoGenJets_kt6GenJets__L1_present;   //!
   TBranch        *b_recoGenJets_kt6GenJets__L1_obj;   //!
   TBranch        *b_recoGenMETs_genMetCalo__L1_present;   //!
   TBranch        *b_recoGenMETs_genMetCalo__L1_obj;   //!
   TBranch        *b_recoGenMETs_genMetCaloAndNonPrompt__L1_present;   //!
   TBranch        *b_recoGenMETs_genMetCaloAndNonPrompt__L1_obj;   //!
   TBranch        *b_recoGenMETs_genMetTrue__L1_present;   //!
   TBranch        *b_recoGenMETs_genMetTrue__L1_obj;   //!
   TBranch        *b_recoGenParticles_genParticles__L1_present;   //!
   TBranch        *b_recoGenParticles_genParticles__L1_obj;   //!
   TBranch        *b_recoGsfElectrons_gedGsfElectrons__L1_present;   //!
   TBranch        *b_recoGsfElectrons_gedGsfElectrons__L1_obj;   //!
   TBranch        *b_recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_present;   //!
   TBranch        *b_recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_obj;   //!
   TBranch        *b_recoGsfElectronCores_gedGsfElectronCores__L1_present;   //!
   TBranch        *b_recoGsfElectronCores_gedGsfElectronCores__L1_obj;   //!
   TBranch        *b_recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_present;   //!
   TBranch        *b_recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_obj;   //!
   TBranch        *b_recoGsfTracks_electronGsfTracks__L1_present;   //!
   TBranch        *b_recoGsfTracks_electronGsfTracks__L1_obj;   //!
   TBranch        *b_recoGsfTrackExtras_electronGsfTracks__L1_present;   //!
   TBranch        *b_recoGsfTrackExtras_electronGsfTracks__L1_obj;   //!
   TBranch        *b_recoHFEMClusterShapes_hfEMClusters__L1_present;   //!
   TBranch        *b_recoHFEMClusterShapes_hfEMClusters__L1_obj;   //!
   TBranch        *b_recoHcalNoiseRBXs_hcalnoise__L1_present;   //!
   TBranch        *b_recoHcalNoiseRBXs_hcalnoise__L1_obj;   //!
   TBranch        *b_recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_present;   //!
   TBranch        *b_recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_obj;   //!
   TBranch        *b_recoMETs_tcMet__L1_present;   //!
   TBranch        *b_recoMETs_tcMet__L1_obj;   //!
   TBranch        *b_recoMETs_tcMetWithPFclusters__L1_present;   //!
   TBranch        *b_recoMETs_tcMetWithPFclusters__L1_obj;   //!
   TBranch        *b_recoMuons_muons__L1_present;   //!
   TBranch        *b_recoMuons_muons__L1_obj;   //!
   TBranch        *b_recoMuons_muonsFromCosmics__L1_present;   //!
   TBranch        *b_recoMuons_muonsFromCosmics__L1_obj;   //!
   TBranch        *b_recoMuons_muonsFromCosmics1Leg__L1_present;   //!
   TBranch        *b_recoMuons_muonsFromCosmics1Leg__L1_obj;   //!
   TBranch        *b_recoPFBlocks_particleFlowBlock__L1_present;   //!
   TBranch        *b_recoPFBlocks_particleFlowBlock__L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlow__L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlow__L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowEGamma__L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowEGamma__L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedHF_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedHF_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_obj;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_present;   //!
   TBranch        *b_recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_obj;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterECAL__L1_present;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterECAL__L1_obj;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterHCAL__L1_present;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterHCAL__L1_obj;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterHO__L1_present;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterHO__L1_obj;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterPS__L1_present;   //!
   TBranch        *b_recoPFClusters_particleFlowClusterPS__L1_obj;   //!
   TBranch        *b_recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_present;   //!
   TBranch        *b_recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_obj;   //!
   TBranch        *b_recoPFJets_ak4PFJetsCHS__L1_present;   //!
   TBranch        *b_recoPFJets_ak4PFJetsCHS__L1_obj;   //!
   TBranch        *b_recoPFJets_ak5PFJets__L1_present;   //!
   TBranch        *b_recoPFJets_ak5PFJets__L1_obj;   //!
   TBranch        *b_recoPFJets_ak5PFJetsCHS__L1_present;   //!
   TBranch        *b_recoPFJets_ak5PFJetsCHS__L1_obj;   //!
   TBranch        *b_recoPFJets_ak8PFJets__L1_present;   //!
   TBranch        *b_recoPFJets_ak8PFJets__L1_obj;   //!
   TBranch        *b_recoPFJets_ak8PFJetsCHS__L1_present;   //!
   TBranch        *b_recoPFJets_ak8PFJetsCHS__L1_obj;   //!
   TBranch        *b_recoPFJets_ca8PFJetsCHS__L1_present;   //!
   TBranch        *b_recoPFJets_ca8PFJetsCHS__L1_obj;   //!
   TBranch        *b_recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_present;   //!
   TBranch        *b_recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_obj;   //!
   TBranch        *b_recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_present;   //!
   TBranch        *b_recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_obj;   //!
   TBranch        *b_recoPFMETs_pfMet__L1_present;   //!
   TBranch        *b_recoPFMETs_pfMet__L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHO_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterHO_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterPS_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowClusterPS_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_present;   //!
   TBranch        *b_recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_obj;   //!
   TBranch        *b_recoPFTaus_hpsPFTauProducer__L1_present;   //!
   TBranch        *b_recoPFTaus_hpsPFTauProducer__L1_obj;   //!
   TBranch        *b_recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_present;   //!
   TBranch        *b_recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_obj;   //!
   TBranch        *b_recoPhotons_gedPhotons__L1_present;   //!
   TBranch        *b_recoPhotons_gedPhotons__L1_obj;   //!
   TBranch        *b_recoPhotons_mustachePhotons__L1_present;   //!
   TBranch        *b_recoPhotons_mustachePhotons__L1_obj;   //!
   TBranch        *b_recoPhotons_photons__L1_present;   //!
   TBranch        *b_recoPhotons_photons__L1_obj;   //!
   TBranch        *b_recoPhotonCores_gedPhotonCore__L1_present;   //!
   TBranch        *b_recoPhotonCores_gedPhotonCore__L1_obj;   //!
   TBranch        *b_recoPhotonCores_mustachePhotonCore__L1_present;   //!
   TBranch        *b_recoPhotonCores_mustachePhotonCore__L1_obj;   //!
   TBranch        *b_recoPhotonCores_photonCore__L1_present;   //!
   TBranch        *b_recoPhotonCores_photonCore__L1_obj;   //!
   TBranch        *b_recoPreIds_trackerDrivenElectronSeeds_preid_L1_present;   //!
   TBranch        *b_recoPreIds_trackerDrivenElectronSeeds_preid_L1_obj;   //!
   TBranch        *b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_present;   //!
   TBranch        *b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_obj;   //!
   TBranch        *b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_present;   //!
   TBranch        *b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_obj;   //!
   TBranch        *b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_present;   //!
   TBranch        *b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_obj;   //!
   TBranch        *b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_present;   //!
   TBranch        *b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_obj;   //!
   TBranch        *b_recoRecoChargedRefCandidates_trackRefsForJets__L1_present;   //!
   TBranch        *b_recoRecoChargedRefCandidates_trackRefsForJets__L1_obj;   //!
   TBranch        *b_recoRecoEcalCandidates_hfRecoEcalCandidate__L1_present;   //!
   TBranch        *b_recoRecoEcalCandidates_hfRecoEcalCandidate__L1_obj;   //!
   TBranch        *b_recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_present;   //!
   TBranch        *b_recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_obj;   //!
   TBranch        *b_recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_present;   //!
   TBranch        *b_recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_obj;   //!
   TBranch        *b_recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_present;   //!
   TBranch        *b_recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_obj;   //!
   TBranch        *b_recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_present;   //!
   TBranch        *b_recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_obj;   //!
   TBranch        *b_recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_present;   //!
   TBranch        *b_recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_obj;   //!
   TBranch        *b_recoSuperClusters_correctedHybridSuperClusters__L1_present;   //!
   TBranch        *b_recoSuperClusters_correctedHybridSuperClusters__L1_obj;   //!
   TBranch        *b_recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_present;   //!
   TBranch        *b_recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_obj;   //!
   TBranch        *b_recoSuperClusters_hfEMClusters__L1_present;   //!
   TBranch        *b_recoSuperClusters_hfEMClusters__L1_obj;   //!
   TBranch        *b_recoSuperClusters_hybridSuperClusters__L1_present;   //!
   TBranch        *b_recoSuperClusters_hybridSuperClusters__L1_obj;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_present;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_obj;   //!
   TBranch        *b_recoSuperClusters_particleFlowEGamma__L1_present;   //!
   TBranch        *b_recoSuperClusters_particleFlowEGamma__L1_obj;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_present;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_obj;   //!
   TBranch        *b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_present;   //!
   TBranch        *b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_obj;   //!
   TBranch        *b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_present;   //!
   TBranch        *b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_obj;   //!
   TBranch        *b_recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_present;   //!
   TBranch        *b_recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_obj;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_present;   //!
   TBranch        *b_recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_obj;   //!
   TBranch        *b_recoTracks_ckfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTracks_ckfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTracks_ckfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTracks_ckfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTracks_conversionStepTracks__L1_present;   //!
   TBranch        *b_recoTracks_conversionStepTracks__L1_obj;   //!
   TBranch        *b_recoTracks_cosmicMuons__L1_present;   //!
   TBranch        *b_recoTracks_cosmicMuons__L1_obj;   //!
   TBranch        *b_recoTracks_cosmicMuons1Leg__L1_present;   //!
   TBranch        *b_recoTracks_cosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_recoTracks_cosmicsVetoTracks__L1_present;   //!
   TBranch        *b_recoTracks_cosmicsVetoTracks__L1_obj;   //!
   TBranch        *b_recoTracks_generalTracks__L1_present;   //!
   TBranch        *b_recoTracks_generalTracks__L1_obj;   //!
   TBranch        *b_recoTracks_globalCosmicMuons__L1_present;   //!
   TBranch        *b_recoTracks_globalCosmicMuons__L1_obj;   //!
   TBranch        *b_recoTracks_globalCosmicMuons1Leg__L1_present;   //!
   TBranch        *b_recoTracks_globalCosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_recoTracks_globalMuons__L1_present;   //!
   TBranch        *b_recoTracks_globalMuons__L1_obj;   //!
   TBranch        *b_recoTracks_globalSETMuons__L1_present;   //!
   TBranch        *b_recoTracks_globalSETMuons__L1_obj;   //!
   TBranch        *b_recoTracks_pixelTracks__L1_present;   //!
   TBranch        *b_recoTracks_pixelTracks__L1_obj;   //!
   TBranch        *b_recoTracks_refittedStandAloneMuons__L1_present;   //!
   TBranch        *b_recoTracks_refittedStandAloneMuons__L1_obj;   //!
   TBranch        *b_recoTracks_regionalCosmicTracks__L1_present;   //!
   TBranch        *b_recoTracks_regionalCosmicTracks__L1_obj;   //!
   TBranch        *b_recoTracks_standAloneMuons__L1_present;   //!
   TBranch        *b_recoTracks_standAloneMuons__L1_obj;   //!
   TBranch        *b_recoTracks_standAloneSETMuons__L1_present;   //!
   TBranch        *b_recoTracks_standAloneSETMuons__L1_obj;   //!
   TBranch        *b_recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_present;   //!
   TBranch        *b_recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_obj;   //!
   TBranch        *b_recoTracks_standAloneMuons_UpdatedAtVtx_L1_present;   //!
   TBranch        *b_recoTracks_standAloneMuons_UpdatedAtVtx_L1_obj;   //!
   TBranch        *b_recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_present;   //!
   TBranch        *b_recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_obj;   //!
   TBranch        *b_recoTracks_tevMuons_default_L1_present;   //!
   TBranch        *b_recoTracks_tevMuons_default_L1_obj;   //!
   TBranch        *b_recoTracks_tevMuons_dyt_L1_present;   //!
   TBranch        *b_recoTracks_tevMuons_dyt_L1_obj;   //!
   TBranch        *b_recoTracks_tevMuons_firstHit_L1_present;   //!
   TBranch        *b_recoTracks_tevMuons_firstHit_L1_obj;   //!
   TBranch        *b_recoTracks_impactParameterTagInfos_ghostTracks_L1_present;   //!
   TBranch        *b_recoTracks_impactParameterTagInfos_ghostTracks_L1_obj;   //!
   TBranch        *b_recoTracks_tevMuons_picky_L1_present;   //!
   TBranch        *b_recoTracks_tevMuons_picky_L1_obj;   //!
   TBranch        *b_recoTrackExtras_ckfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTrackExtras_ckfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTrackExtras_ckfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTrackExtras_ckfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTrackExtras_conversionStepTracks__L1_present;   //!
   TBranch        *b_recoTrackExtras_conversionStepTracks__L1_obj;   //!
   TBranch        *b_recoTrackExtras_cosmicMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_cosmicMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_cosmicMuons1Leg__L1_present;   //!
   TBranch        *b_recoTrackExtras_cosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_recoTrackExtras_electronGsfTracks__L1_present;   //!
   TBranch        *b_recoTrackExtras_electronGsfTracks__L1_obj;   //!
   TBranch        *b_recoTrackExtras_generalTracks__L1_present;   //!
   TBranch        *b_recoTrackExtras_generalTracks__L1_obj;   //!
   TBranch        *b_recoTrackExtras_globalCosmicMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_globalCosmicMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_globalCosmicMuons1Leg__L1_present;   //!
   TBranch        *b_recoTrackExtras_globalCosmicMuons1Leg__L1_obj;   //!
   TBranch        *b_recoTrackExtras_globalMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_globalMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_globalSETMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_globalSETMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_pixelTracks__L1_present;   //!
   TBranch        *b_recoTrackExtras_pixelTracks__L1_obj;   //!
   TBranch        *b_recoTrackExtras_refittedStandAloneMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_refittedStandAloneMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_regionalCosmicTracks__L1_present;   //!
   TBranch        *b_recoTrackExtras_regionalCosmicTracks__L1_obj;   //!
   TBranch        *b_recoTrackExtras_standAloneMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_standAloneMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_standAloneSETMuons__L1_present;   //!
   TBranch        *b_recoTrackExtras_standAloneSETMuons__L1_obj;   //!
   TBranch        *b_recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_present;   //!
   TBranch        *b_recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj;   //!
   TBranch        *b_recoTrackExtras_tevMuons_default_L1_present;   //!
   TBranch        *b_recoTrackExtras_tevMuons_default_L1_obj;   //!
   TBranch        *b_recoTrackExtras_tevMuons_dyt_L1_present;   //!
   TBranch        *b_recoTrackExtras_tevMuons_dyt_L1_obj;   //!
   TBranch        *b_recoTrackExtras_tevMuons_firstHit_L1_present;   //!
   TBranch        *b_recoTrackExtras_tevMuons_firstHit_L1_obj;   //!
   TBranch        *b_recoTrackExtras_tevMuons_picky_L1_present;   //!
   TBranch        *b_recoTrackExtras_tevMuons_picky_L1_obj;   //!
   TBranch        *b_recoTrackExtrapolations_trackExtrapolator__L1_present;   //!
   TBranch        *b_recoTrackExtrapolations_trackExtrapolator__L1_obj;   //!
   TBranch        *b_recoTrackIPTagInfos_impactParameterTagInfos__L1_present;   //!
   TBranch        *b_recoTrackIPTagInfos_impactParameterTagInfos__L1_obj;   //!
   TBranch        *b_recoTrackJets_ak5TrackJets__L1_present;   //!
   TBranch        *b_recoTrackJets_ak5TrackJets__L1_obj;   //!
   TBranch        *b_recoVertexs_offlinePrimaryVertices__L1_present;   //!
   TBranch        *b_recoVertexs_offlinePrimaryVertices__L1_obj;   //!
   TBranch        *b_recoVertexs_offlinePrimaryVerticesWithBS__L1_present;   //!
   TBranch        *b_recoVertexs_offlinePrimaryVerticesWithBS__L1_obj;   //!
   TBranch        *b_recoVertexs_pixelVertices__L1_present;   //!
   TBranch        *b_recoVertexs_pixelVertices__L1_obj;   //!
   TBranch        *b_recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_present;   //!
   TBranch        *b_recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_obj;   //!
   TBranch        *b_recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_present;   //!
   TBranch        *b_recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_obj;   //!
   TBranch        *b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_present;   //!
   TBranch        *b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_obj;   //!
   TBranch        *b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_present;   //!
   TBranch        *b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_obj;   //!

   HOMuon_TreeLoop_ClusterInves_Plotter(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~HOMuon_TreeLoop_ClusterInves_Plotter() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(HOMuon_TreeLoop_ClusterInves_Plotter,0);
};

#endif

#ifdef HOMuon_TreeLoop_ClusterInves_Plotter_cxx
void HOMuon_TreeLoop_ClusterInves_Plotter::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   EventAuxiliary = 0;
   EventProductProvenance = 0;
   EventSelections = 0;
   BranchListIndexes = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventAuxiliary", &EventAuxiliary, &b_EventAuxiliary);
   fChain->SetBranchAddress("EventProductProvenance", &EventProductProvenance, &b_EventProductProvenance);
   fChain->SetBranchAddress("EventSelections", &EventSelections, &b_EventSelections);
   fChain->SetBranchAddress("BranchListIndexes", &BranchListIndexes, &b_BranchListIndexes);
   fChain->SetBranchAddress("csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1.present", &csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_present, &b_csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_present);
   fChain->SetBranchAddress("csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1.obj", &csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_obj, &b_csctfTrackStubCSCTriggerContainer_simCsctfTrackDigis__L1_obj);
   fChain->SetBranchAddress("csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1.present", &csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_present, &b_csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_present);
   fChain->SetBranchAddress("csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1.obj", &csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_obj, &b_csctfTrackStubCSCTriggerContainer_csctfDigis_DT_L1_obj);
   fChain->SetBranchAddress("ClusterSummary_clusterSummaryProducer__L1.present", &ClusterSummary_clusterSummaryProducer__L1_present, &b_ClusterSummary_clusterSummaryProducer__L1_present);
   fChain->SetBranchAddress("ClusterSummary_clusterSummaryProducer__L1.obj", &ClusterSummary_clusterSummaryProducer__L1_obj, &b_ClusterSummary_clusterSummaryProducer__L1_obj);
   fChain->SetBranchAddress("CrossingFramePlaybackInfoExtended_mix__L1.present", &CrossingFramePlaybackInfoExtended_mix__L1_present, &b_CrossingFramePlaybackInfoExtended_mix__L1_present);
   fChain->SetBranchAddress("CrossingFramePlaybackInfoExtended_mix__L1.obj", &CrossingFramePlaybackInfoExtended_mix__L1_obj, &b_CrossingFramePlaybackInfoExtended_mix__L1_obj);
   fChain->SetBranchAddress("EBDigiCollection_simEcalDigis_ebDigis_L1.present", &EBDigiCollection_simEcalDigis_ebDigis_L1_present, &b_EBDigiCollection_simEcalDigis_ebDigis_L1_present);
   fChain->SetBranchAddress("EBDigiCollection_simEcalDigis_ebDigis_L1.obj", &EBDigiCollection_simEcalDigis_ebDigis_L1_obj, &b_EBDigiCollection_simEcalDigis_ebDigis_L1_obj);
   fChain->SetBranchAddress("EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1.present", &EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_present, &b_EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_present);
   fChain->SetBranchAddress("EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1.obj", &EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_obj, &b_EBDigiCollection_selectDigi_selectedEcalEBDigiCollection_L1_obj);
   fChain->SetBranchAddress("EEDigiCollection_simEcalDigis_eeDigis_L1.present", &EEDigiCollection_simEcalDigis_eeDigis_L1_present, &b_EEDigiCollection_simEcalDigis_eeDigis_L1_present);
   fChain->SetBranchAddress("EEDigiCollection_simEcalDigis_eeDigis_L1.obj", &EEDigiCollection_simEcalDigis_eeDigis_L1_obj, &b_EEDigiCollection_simEcalDigis_eeDigis_L1_obj);
   fChain->SetBranchAddress("EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1.present", &EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_present, &b_EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_present);
   fChain->SetBranchAddress("EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1.obj", &EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_obj, &b_EEDigiCollection_selectDigi_selectedEcalEEDigiCollection_L1_obj);
   fChain->SetBranchAddress("ESDigiCollection_simEcalPreshowerDigis__L1.present", &ESDigiCollection_simEcalPreshowerDigis__L1_present, &b_ESDigiCollection_simEcalPreshowerDigis__L1_present);
   fChain->SetBranchAddress("ESDigiCollection_simEcalPreshowerDigis__L1.obj", &ESDigiCollection_simEcalPreshowerDigis__L1_obj, &b_ESDigiCollection_simEcalPreshowerDigis__L1_obj);
   fChain->SetBranchAddress("EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1.present", &EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_present, &b_EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_present);
   fChain->SetBranchAddress("EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1.obj", &EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_obj, &b_EcalTrigPrimCompactColl_ecalCompactTrigPrim__L1_obj);
   fChain->SetBranchAddress("FEDRawDataCollection_rawDataCollector__L1.present", &FEDRawDataCollection_rawDataCollector__L1_present, &b_FEDRawDataCollection_rawDataCollector__L1_present);
   fChain->SetBranchAddress("FEDRawDataCollection_rawDataCollector__L1.obj", &FEDRawDataCollection_rawDataCollector__L1_obj, &b_FEDRawDataCollection_rawDataCollector__L1_obj);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__L1.present", &GenEventInfoProduct_generator__L1_present, &b_GenEventInfoProduct_generator__L1_present);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__L1.obj", &GenEventInfoProduct_generator__L1_obj, &b_GenEventInfoProduct_generator__L1_obj);
   fChain->SetBranchAddress("HcalNoiseSummary_hcalnoise__L1.present", &HcalNoiseSummary_hcalnoise__L1_present, &b_HcalNoiseSummary_hcalnoise__L1_present);
   fChain->SetBranchAddress("HcalNoiseSummary_hcalnoise__L1.obj", &HcalNoiseSummary_hcalnoise__L1_obj, &b_HcalNoiseSummary_hcalnoise__L1_obj);
   fChain->SetBranchAddress("HcalUnpackerReport_castorDigis__L1.present", &HcalUnpackerReport_castorDigis__L1_present, &b_HcalUnpackerReport_castorDigis__L1_present);
   fChain->SetBranchAddress("HcalUnpackerReport_castorDigis__L1.obj", &HcalUnpackerReport_castorDigis__L1_obj, &b_HcalUnpackerReport_castorDigis__L1_obj);
   fChain->SetBranchAddress("HcalUnpackerReport_hcalDigis__L1.present", &HcalUnpackerReport_hcalDigis__L1_present, &b_HcalUnpackerReport_hcalDigis__L1_present);
   fChain->SetBranchAddress("HcalUnpackerReport_hcalDigis__L1.obj", &HcalUnpackerReport_hcalDigis__L1_obj, &b_HcalUnpackerReport_hcalDigis__L1_obj);
   fChain->SetBranchAddress("L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1.present", &L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_present, &b_L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_present);
   fChain->SetBranchAddress("L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1.obj", &L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_obj, &b_L1GlobalTriggerEvmReadoutRecord_gtEvmDigis__L1_obj);
   fChain->SetBranchAddress("L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1.present", &L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_present, &b_L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_present);
   fChain->SetBranchAddress("L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1.obj", &L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_obj, &b_L1GlobalTriggerEvmReadoutRecord_simGtDigis__L1_obj);
   fChain->SetBranchAddress("L1GlobalTriggerObjectMapRecord_simGtDigis__L1.present", &L1GlobalTriggerObjectMapRecord_simGtDigis__L1_present, &b_L1GlobalTriggerObjectMapRecord_simGtDigis__L1_present);
   fChain->SetBranchAddress("L1GlobalTriggerObjectMapRecord_simGtDigis__L1.obj", &L1GlobalTriggerObjectMapRecord_simGtDigis__L1_obj, &b_L1GlobalTriggerObjectMapRecord_simGtDigis__L1_obj);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_gtDigis__L1.present", &L1GlobalTriggerReadoutRecord_gtDigis__L1_present, &b_L1GlobalTriggerReadoutRecord_gtDigis__L1_present);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_gtDigis__L1.obj", &L1GlobalTriggerReadoutRecord_gtDigis__L1_obj, &b_L1GlobalTriggerReadoutRecord_gtDigis__L1_obj);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_simGtDigis__L1.present", &L1GlobalTriggerReadoutRecord_simGtDigis__L1_present, &b_L1GlobalTriggerReadoutRecord_simGtDigis__L1_present);
   fChain->SetBranchAddress("L1GlobalTriggerReadoutRecord_simGtDigis__L1.obj", &L1GlobalTriggerReadoutRecord_simGtDigis__L1_obj, &b_L1GlobalTriggerReadoutRecord_simGtDigis__L1_obj);
   fChain->SetBranchAddress("L1MuDTChambPhContainer_dttfDigis__L1.present", &L1MuDTChambPhContainer_dttfDigis__L1_present, &b_L1MuDTChambPhContainer_dttfDigis__L1_present);
   fChain->SetBranchAddress("L1MuDTChambPhContainer_dttfDigis__L1.obj", &L1MuDTChambPhContainer_dttfDigis__L1_obj, &b_L1MuDTChambPhContainer_dttfDigis__L1_obj);
   fChain->SetBranchAddress("L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1.present", &L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_present, &b_L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1.obj", &L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_obj, &b_L1MuDTChambPhContainer_simDtTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("L1MuDTChambThContainer_dttfDigis__L1.present", &L1MuDTChambThContainer_dttfDigis__L1_present, &b_L1MuDTChambThContainer_dttfDigis__L1_present);
   fChain->SetBranchAddress("L1MuDTChambThContainer_dttfDigis__L1.obj", &L1MuDTChambThContainer_dttfDigis__L1_obj, &b_L1MuDTChambThContainer_dttfDigis__L1_obj);
   fChain->SetBranchAddress("L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1.present", &L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_present, &b_L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1.obj", &L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_obj, &b_L1MuDTChambThContainer_simDtTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("L1MuDTTrackContainer_dttfDigis_DATA_L1.present", &L1MuDTTrackContainer_dttfDigis_DATA_L1_present, &b_L1MuDTTrackContainer_dttfDigis_DATA_L1_present);
   fChain->SetBranchAddress("L1MuDTTrackContainer_dttfDigis_DATA_L1.obj", &L1MuDTTrackContainer_dttfDigis_DATA_L1_obj, &b_L1MuDTTrackContainer_dttfDigis_DATA_L1_obj);
   fChain->SetBranchAddress("L1MuDTTrackContainer_simDttfDigis_DTTF_L1.present", &L1MuDTTrackContainer_simDttfDigis_DTTF_L1_present, &b_L1MuDTTrackContainer_simDttfDigis_DTTF_L1_present);
   fChain->SetBranchAddress("L1MuDTTrackContainer_simDttfDigis_DTTF_L1.obj", &L1MuDTTrackContainer_simDttfDigis_DTTF_L1_obj, &b_L1MuDTTrackContainer_simDttfDigis_DTTF_L1_obj);
   fChain->SetBranchAddress("L1MuGMTReadoutCollection_gtDigis__L1.present", &L1MuGMTReadoutCollection_gtDigis__L1_present, &b_L1MuGMTReadoutCollection_gtDigis__L1_present);
   fChain->SetBranchAddress("L1MuGMTReadoutCollection_gtDigis__L1.obj", &L1MuGMTReadoutCollection_gtDigis__L1_obj, &b_L1MuGMTReadoutCollection_gtDigis__L1_obj);
   fChain->SetBranchAddress("L1MuGMTReadoutCollection_simGmtDigis__L1.present", &L1MuGMTReadoutCollection_simGmtDigis__L1_present, &b_L1MuGMTReadoutCollection_simGmtDigis__L1_present);
   fChain->SetBranchAddress("L1MuGMTReadoutCollection_simGmtDigis__L1.obj", &L1MuGMTReadoutCollection_simGmtDigis__L1_obj, &b_L1MuGMTReadoutCollection_simGmtDigis__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.present", &CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present, &b_CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj", &CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj, &b_CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.present", &CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present, &b_CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj", &CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj, &b_CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1.present", &CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_present, &b_CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1.obj", &CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_obj, &b_CSCDetIdCSCComparatorDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCComparatorDigi_L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1.present", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_present, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1.obj", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_obj, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.present", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1.present", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_present, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1.obj", &CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_obj, &b_CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1.present", &CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_present, &b_CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1.obj", &CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_obj, &b_CSCDetIdCSCStripDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCStripDigi_L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1.present", &CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_present, &b_CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1.obj", &CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_obj, &b_CSCDetIdCSCWireDigiMuonDigiCollection_simMuonCSCDigis_MuonCSCWireDigi_L1_obj);
   fChain->SetBranchAddress("CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.present", &CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present, &b_CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj", &CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj, &b_CSCDetIdintMuonDigiCollection_simCscTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1.present", &DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_present, &b_DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_present);
   fChain->SetBranchAddress("DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1.obj", &DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_obj, &b_DTLayerIdDTDigiMuonDigiCollection_simMuonDTDigis__L1_obj);
   fChain->SetBranchAddress("DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1.present", &DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_present, &b_DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_present);
   fChain->SetBranchAddress("DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1.obj", &DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_obj, &b_DTLayerIdDTDigiSimLinkMuonDigiCollection_simMuonDTDigis__L1_obj);
   fChain->SetBranchAddress("RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1.present", &RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_present, &b_RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_present);
   fChain->SetBranchAddress("RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1.obj", &RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_obj, &b_RPCDetIdRPCDigiMuonDigiCollection_simMuonRPCDigis__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoAll__L1.present", &double_fixedGridRhoAll__L1_present, &b_double_fixedGridRhoAll__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoAll__L1.obj", &double_fixedGridRhoAll__L1_obj, &b_double_fixedGridRhoAll__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAll__L1.present", &double_fixedGridRhoFastjetAll__L1_present, &b_double_fixedGridRhoFastjetAll__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAll__L1.obj", &double_fixedGridRhoFastjetAll__L1_obj, &b_double_fixedGridRhoFastjetAll__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAllCalo__L1.present", &double_fixedGridRhoFastjetAllCalo__L1_present, &b_double_fixedGridRhoFastjetAllCalo__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetAllCalo__L1.obj", &double_fixedGridRhoFastjetAllCalo__L1_obj, &b_double_fixedGridRhoFastjetAllCalo__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralCalo__L1.present", &double_fixedGridRhoFastjetCentralCalo__L1_present, &b_double_fixedGridRhoFastjetCentralCalo__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralCalo__L1.obj", &double_fixedGridRhoFastjetCentralCalo__L1_obj, &b_double_fixedGridRhoFastjetCentralCalo__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralChargedPileUp__L1.present", &double_fixedGridRhoFastjetCentralChargedPileUp__L1_present, &b_double_fixedGridRhoFastjetCentralChargedPileUp__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralChargedPileUp__L1.obj", &double_fixedGridRhoFastjetCentralChargedPileUp__L1_obj, &b_double_fixedGridRhoFastjetCentralChargedPileUp__L1_obj);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralNeutral__L1.present", &double_fixedGridRhoFastjetCentralNeutral__L1_present, &b_double_fixedGridRhoFastjetCentralNeutral__L1_present);
   fChain->SetBranchAddress("double_fixedGridRhoFastjetCentralNeutral__L1.obj", &double_fixedGridRhoFastjetCentralNeutral__L1_obj, &b_double_fixedGridRhoFastjetCentralNeutral__L1_obj);
   fChain->SetBranchAddress("double_ak4CaloJets_rho_L1.present", &double_ak4CaloJets_rho_L1_present, &b_double_ak4CaloJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak4CaloJets_rho_L1.obj", &double_ak4CaloJets_rho_L1_obj, &b_double_ak4CaloJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak4GenJets_rho_L1.present", &double_ak4GenJets_rho_L1_present, &b_double_ak4GenJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak4GenJets_rho_L1.obj", &double_ak4GenJets_rho_L1_obj, &b_double_ak4GenJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak4PFJetsCHS_rho_L1.present", &double_ak4PFJetsCHS_rho_L1_present, &b_double_ak4PFJetsCHS_rho_L1_present);
   fChain->SetBranchAddress("double_ak4PFJetsCHS_rho_L1.obj", &double_ak4PFJetsCHS_rho_L1_obj, &b_double_ak4PFJetsCHS_rho_L1_obj);
   fChain->SetBranchAddress("double_ak5CaloJets_rho_L1.present", &double_ak5CaloJets_rho_L1_present, &b_double_ak5CaloJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak5CaloJets_rho_L1.obj", &double_ak5CaloJets_rho_L1_obj, &b_double_ak5CaloJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak5GenJets_rho_L1.present", &double_ak5GenJets_rho_L1_present, &b_double_ak5GenJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak5GenJets_rho_L1.obj", &double_ak5GenJets_rho_L1_obj, &b_double_ak5GenJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak5PFJets_rho_L1.present", &double_ak5PFJets_rho_L1_present, &b_double_ak5PFJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak5PFJets_rho_L1.obj", &double_ak5PFJets_rho_L1_obj, &b_double_ak5PFJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak5PFJetsCHS_rho_L1.present", &double_ak5PFJetsCHS_rho_L1_present, &b_double_ak5PFJetsCHS_rho_L1_present);
   fChain->SetBranchAddress("double_ak5PFJetsCHS_rho_L1.obj", &double_ak5PFJetsCHS_rho_L1_obj, &b_double_ak5PFJetsCHS_rho_L1_obj);
   fChain->SetBranchAddress("double_ak5TrackJets_rho_L1.present", &double_ak5TrackJets_rho_L1_present, &b_double_ak5TrackJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak5TrackJets_rho_L1.obj", &double_ak5TrackJets_rho_L1_obj, &b_double_ak5TrackJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak7BasicJets_rho_L1.present", &double_ak7BasicJets_rho_L1_present, &b_double_ak7BasicJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak7BasicJets_rho_L1.obj", &double_ak7BasicJets_rho_L1_obj, &b_double_ak7BasicJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak8PFJets_rho_L1.present", &double_ak8PFJets_rho_L1_present, &b_double_ak8PFJets_rho_L1_present);
   fChain->SetBranchAddress("double_ak8PFJets_rho_L1.obj", &double_ak8PFJets_rho_L1_obj, &b_double_ak8PFJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak8PFJetsCHS_rho_L1.present", &double_ak8PFJetsCHS_rho_L1_present, &b_double_ak8PFJetsCHS_rho_L1_present);
   fChain->SetBranchAddress("double_ak8PFJetsCHS_rho_L1.obj", &double_ak8PFJetsCHS_rho_L1_obj, &b_double_ak8PFJetsCHS_rho_L1_obj);
   fChain->SetBranchAddress("double_ca8PFJetsCHS_rho_L1.present", &double_ca8PFJetsCHS_rho_L1_present, &b_double_ca8PFJetsCHS_rho_L1_present);
   fChain->SetBranchAddress("double_ca8PFJetsCHS_rho_L1.obj", &double_ca8PFJetsCHS_rho_L1_obj, &b_double_ca8PFJetsCHS_rho_L1_obj);
   fChain->SetBranchAddress("double_ca8PFJetsCHSPruned_rho_L1.present", &double_ca8PFJetsCHSPruned_rho_L1_present, &b_double_ca8PFJetsCHSPruned_rho_L1_present);
   fChain->SetBranchAddress("double_ca8PFJetsCHSPruned_rho_L1.obj", &double_ca8PFJetsCHSPruned_rho_L1_obj, &b_double_ca8PFJetsCHSPruned_rho_L1_obj);
   fChain->SetBranchAddress("double_cmsTopTagPFJetsCHS_rho_L1.present", &double_cmsTopTagPFJetsCHS_rho_L1_present, &b_double_cmsTopTagPFJetsCHS_rho_L1_present);
   fChain->SetBranchAddress("double_cmsTopTagPFJetsCHS_rho_L1.obj", &double_cmsTopTagPFJetsCHS_rho_L1_obj, &b_double_cmsTopTagPFJetsCHS_rho_L1_obj);
   fChain->SetBranchAddress("double_iterativeCone5GenJets_rho_L1.present", &double_iterativeCone5GenJets_rho_L1_present, &b_double_iterativeCone5GenJets_rho_L1_present);
   fChain->SetBranchAddress("double_iterativeCone5GenJets_rho_L1.obj", &double_iterativeCone5GenJets_rho_L1_obj, &b_double_iterativeCone5GenJets_rho_L1_obj);
   fChain->SetBranchAddress("double_kt4GenJets_rho_L1.present", &double_kt4GenJets_rho_L1_present, &b_double_kt4GenJets_rho_L1_present);
   fChain->SetBranchAddress("double_kt4GenJets_rho_L1.obj", &double_kt4GenJets_rho_L1_obj, &b_double_kt4GenJets_rho_L1_obj);
   fChain->SetBranchAddress("double_kt6GenJets_rho_L1.present", &double_kt6GenJets_rho_L1_present, &b_double_kt6GenJets_rho_L1_present);
   fChain->SetBranchAddress("double_kt6GenJets_rho_L1.obj", &double_kt6GenJets_rho_L1_obj, &b_double_kt6GenJets_rho_L1_obj);
   fChain->SetBranchAddress("double_ak4CaloJets_sigma_L1.present", &double_ak4CaloJets_sigma_L1_present, &b_double_ak4CaloJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak4CaloJets_sigma_L1.obj", &double_ak4CaloJets_sigma_L1_obj, &b_double_ak4CaloJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak4GenJets_sigma_L1.present", &double_ak4GenJets_sigma_L1_present, &b_double_ak4GenJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak4GenJets_sigma_L1.obj", &double_ak4GenJets_sigma_L1_obj, &b_double_ak4GenJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak4PFJetsCHS_sigma_L1.present", &double_ak4PFJetsCHS_sigma_L1_present, &b_double_ak4PFJetsCHS_sigma_L1_present);
   fChain->SetBranchAddress("double_ak4PFJetsCHS_sigma_L1.obj", &double_ak4PFJetsCHS_sigma_L1_obj, &b_double_ak4PFJetsCHS_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak5CaloJets_sigma_L1.present", &double_ak5CaloJets_sigma_L1_present, &b_double_ak5CaloJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak5CaloJets_sigma_L1.obj", &double_ak5CaloJets_sigma_L1_obj, &b_double_ak5CaloJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak5GenJets_sigma_L1.present", &double_ak5GenJets_sigma_L1_present, &b_double_ak5GenJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak5GenJets_sigma_L1.obj", &double_ak5GenJets_sigma_L1_obj, &b_double_ak5GenJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak5PFJets_sigma_L1.present", &double_ak5PFJets_sigma_L1_present, &b_double_ak5PFJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak5PFJets_sigma_L1.obj", &double_ak5PFJets_sigma_L1_obj, &b_double_ak5PFJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak5PFJetsCHS_sigma_L1.present", &double_ak5PFJetsCHS_sigma_L1_present, &b_double_ak5PFJetsCHS_sigma_L1_present);
   fChain->SetBranchAddress("double_ak5PFJetsCHS_sigma_L1.obj", &double_ak5PFJetsCHS_sigma_L1_obj, &b_double_ak5PFJetsCHS_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak5TrackJets_sigma_L1.present", &double_ak5TrackJets_sigma_L1_present, &b_double_ak5TrackJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak5TrackJets_sigma_L1.obj", &double_ak5TrackJets_sigma_L1_obj, &b_double_ak5TrackJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak7BasicJets_sigma_L1.present", &double_ak7BasicJets_sigma_L1_present, &b_double_ak7BasicJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak7BasicJets_sigma_L1.obj", &double_ak7BasicJets_sigma_L1_obj, &b_double_ak7BasicJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak8PFJets_sigma_L1.present", &double_ak8PFJets_sigma_L1_present, &b_double_ak8PFJets_sigma_L1_present);
   fChain->SetBranchAddress("double_ak8PFJets_sigma_L1.obj", &double_ak8PFJets_sigma_L1_obj, &b_double_ak8PFJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_ak8PFJetsCHS_sigma_L1.present", &double_ak8PFJetsCHS_sigma_L1_present, &b_double_ak8PFJetsCHS_sigma_L1_present);
   fChain->SetBranchAddress("double_ak8PFJetsCHS_sigma_L1.obj", &double_ak8PFJetsCHS_sigma_L1_obj, &b_double_ak8PFJetsCHS_sigma_L1_obj);
   fChain->SetBranchAddress("double_ca8PFJetsCHS_sigma_L1.present", &double_ca8PFJetsCHS_sigma_L1_present, &b_double_ca8PFJetsCHS_sigma_L1_present);
   fChain->SetBranchAddress("double_ca8PFJetsCHS_sigma_L1.obj", &double_ca8PFJetsCHS_sigma_L1_obj, &b_double_ca8PFJetsCHS_sigma_L1_obj);
   fChain->SetBranchAddress("double_ca8PFJetsCHSPruned_sigma_L1.present", &double_ca8PFJetsCHSPruned_sigma_L1_present, &b_double_ca8PFJetsCHSPruned_sigma_L1_present);
   fChain->SetBranchAddress("double_ca8PFJetsCHSPruned_sigma_L1.obj", &double_ca8PFJetsCHSPruned_sigma_L1_obj, &b_double_ca8PFJetsCHSPruned_sigma_L1_obj);
   fChain->SetBranchAddress("double_cmsTopTagPFJetsCHS_sigma_L1.present", &double_cmsTopTagPFJetsCHS_sigma_L1_present, &b_double_cmsTopTagPFJetsCHS_sigma_L1_present);
   fChain->SetBranchAddress("double_cmsTopTagPFJetsCHS_sigma_L1.obj", &double_cmsTopTagPFJetsCHS_sigma_L1_obj, &b_double_cmsTopTagPFJetsCHS_sigma_L1_obj);
   fChain->SetBranchAddress("double_iterativeCone5GenJets_sigma_L1.present", &double_iterativeCone5GenJets_sigma_L1_present, &b_double_iterativeCone5GenJets_sigma_L1_present);
   fChain->SetBranchAddress("double_iterativeCone5GenJets_sigma_L1.obj", &double_iterativeCone5GenJets_sigma_L1_obj, &b_double_iterativeCone5GenJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_kt4GenJets_sigma_L1.present", &double_kt4GenJets_sigma_L1_present, &b_double_kt4GenJets_sigma_L1_present);
   fChain->SetBranchAddress("double_kt4GenJets_sigma_L1.obj", &double_kt4GenJets_sigma_L1_obj, &b_double_kt4GenJets_sigma_L1_obj);
   fChain->SetBranchAddress("double_kt6GenJets_sigma_L1.present", &double_kt6GenJets_sigma_L1_present, &b_double_kt6GenJets_sigma_L1_present);
   fChain->SetBranchAddress("double_kt6GenJets_sigma_L1.obj", &double_kt6GenJets_sigma_L1_obj, &b_double_kt6GenJets_sigma_L1_obj);
   fChain->SetBranchAddress("recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1.present", &recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_present, &b_recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_present);
   fChain->SetBranchAddress("recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1.obj", &recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_obj, &b_recoSuperClustersToOnerecoHFEMClusterShapesAssociation_hfEMClusters__L1_obj);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_default_L1.present", &recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_present, &b_recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_present);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_default_L1.obj", &recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_obj, &b_recoTracksToOnerecoTracksAssociation_tevMuons_default_L1_obj);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1.present", &recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_present, &b_recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_present);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1.obj", &recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_obj, &b_recoTracksToOnerecoTracksAssociation_tevMuons_dyt_L1_obj);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1.present", &recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_present, &b_recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_present);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1.obj", &recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_obj, &b_recoTracksToOnerecoTracksAssociation_tevMuons_firstHit_L1_obj);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1.present", &recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_present, &b_recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_present);
   fChain->SetBranchAddress("recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1.obj", &recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_obj, &b_recoTracksToOnerecoTracksAssociation_tevMuons_picky_L1_obj);
   fChain->SetBranchAddress("recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1.present", &recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_present, &b_recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_present);
   fChain->SetBranchAddress("recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1.obj", &recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_obj, &b_recoPFTausedmRefProdrecoPFTauTransverseImpactParametersrecoPFTauTransverseImpactParameterrecoPFTauTransverseImpactParametersTorecoPFTauTransverseImpactParameteredmrefhelperFindUsingAdvanceedmRefsAssociationVector_hpsPFTauTransverseImpactParameters__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1.present", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_present, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1.obj", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_obj, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtCaloFace__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1.present", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_present, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1.obj", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_obj, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertex__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1.present", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_present, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1.obj", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_obj, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorAtVertexPF__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1.present", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_present, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1.obj", &recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_obj, &b_recoJetedmRefToBaseProdrecoTracksrecoTrackrecoTracksTorecoTrackedmrefhelperFindUsingAdvanceedmRefVectorsAssociationVector_ak5JetTracksAssociatorExplicit__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_combinedSecondaryVertexMVABJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_ghostTrackBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetBProbabilityBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_jetProbabilityBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighEffBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_simpleSecondaryVertexHighPurBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFElectronBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_softPFMuonBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighEffBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1.present", &recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_present, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1.obj", &recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_obj, &b_recoJetedmRefToBaseProdTofloatsAssociationVector_trackCountingHighPurBJetTags__L1_obj);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1.present", &recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_present, &b_recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_present);
   fChain->SetBranchAddress("recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1.obj", &recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_obj, &b_recoJetedmRefToBaseProdTorecoJetExtendedAssociationJetExtendedDatasAssociationVector_ak5JetExtender__L1_obj);
   fChain->SetBranchAddress("PixelDigiedmDetSetVector_simSiPixelDigis__L1.present", &PixelDigiedmDetSetVector_simSiPixelDigis__L1_present, &b_PixelDigiedmDetSetVector_simSiPixelDigis__L1_present);
   fChain->SetBranchAddress("PixelDigiedmDetSetVector_simSiPixelDigis__L1.obj", &PixelDigiedmDetSetVector_simSiPixelDigis__L1_obj, &b_PixelDigiedmDetSetVector_simSiPixelDigis__L1_obj);
   fChain->SetBranchAddress("PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1.present", &PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_present, &b_PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_present);
   fChain->SetBranchAddress("PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1.obj", &PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_obj, &b_PixelDigiSimLinkedmDetSetVector_simSiPixelDigis__L1_obj);
   fChain->SetBranchAddress("RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1.present", &RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_present, &b_RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_present);
   fChain->SetBranchAddress("RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1.obj", &RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_obj, &b_RPCDigiSimLinkedmDetSetVector_simMuonRPCDigis_RPCDigiSimLink_L1_obj);
   fChain->SetBranchAddress("SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1.present", &SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_present, &b_SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_present);
   fChain->SetBranchAddress("SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1.obj", &SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_obj, &b_SiStripDigiedmDetSetVector_simSiStripDigis_ZeroSuppressed_L1_obj);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1.present", &SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_present, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_present);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1.obj", &SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_obj, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ProcessedRaw_L1_obj);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1.present", &SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_present, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_present);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1.obj", &SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_obj, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_ScopeMode_L1_obj);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1.present", &SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_present, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_present);
   fChain->SetBranchAddress("SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1.obj", &SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_obj, &b_SiStripRawDigiedmDetSetVector_simSiStripDigis_VirginRaw_L1_obj);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1.present", &StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_present, &b_StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_present);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1.obj", &StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_obj, &b_StripDigiSimLinkedmDetSetVector_simSiStripDigis__L1_obj);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1.present", &StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_present, &b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_present);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1.obj", &StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_obj, &b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCStripDigiSimLinks_L1_obj);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1.present", &StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_present, &b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_present);
   fChain->SetBranchAddress("StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1.obj", &StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_obj, &b_StripDigiSimLinkedmDetSetVector_simMuonCSCDigis_MuonCSCWireDigiSimLinks_L1_obj);
   fChain->SetBranchAddress("DetIdedmEDCollection_siPixelDigis__L1.present", &DetIdedmEDCollection_siPixelDigis__L1_present, &b_DetIdedmEDCollection_siPixelDigis__L1_present);
   fChain->SetBranchAddress("DetIdedmEDCollection_siPixelDigis__L1.obj", &DetIdedmEDCollection_siPixelDigis__L1_obj, &b_DetIdedmEDCollection_siPixelDigis__L1_obj);
   fChain->SetBranchAddress("DetIdedmEDCollection_siStripDigis__L1.present", &DetIdedmEDCollection_siStripDigis__L1_present, &b_DetIdedmEDCollection_siStripDigis__L1_present);
   fChain->SetBranchAddress("DetIdedmEDCollection_siStripDigis__L1.obj", &DetIdedmEDCollection_siStripDigis__L1_obj, &b_DetIdedmEDCollection_siStripDigis__L1_obj);
   fChain->SetBranchAddress("DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1.present", &DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_present, &b_DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_present);
   fChain->SetBranchAddress("DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1.obj", &DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_obj, &b_DetIdedmEDCollection_siPixelDigis_UserErrorModules_L1_obj);
   fChain->SetBranchAddress("edmHepMCProduct_generator__L1.present", &edmHepMCProduct_generator__L1_present, &b_edmHepMCProduct_generator__L1_present);
   fChain->SetBranchAddress("edmHepMCProduct_generator__L1.obj", &edmHepMCProduct_generator__L1_obj, &b_edmHepMCProduct_generator__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1.present", &TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_present, &b_TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1.obj", &TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_obj, &b_TrackingRecHitsOwned_ckfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1.present", &TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_present, &b_TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1.obj", &TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_obj, &b_TrackingRecHitsOwned_ckfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_conversionStepTracks__L1.present", &TrackingRecHitsOwned_conversionStepTracks__L1_present, &b_TrackingRecHitsOwned_conversionStepTracks__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_conversionStepTracks__L1.obj", &TrackingRecHitsOwned_conversionStepTracks__L1_obj, &b_TrackingRecHitsOwned_conversionStepTracks__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_cosmicMuons__L1.present", &TrackingRecHitsOwned_cosmicMuons__L1_present, &b_TrackingRecHitsOwned_cosmicMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_cosmicMuons__L1.obj", &TrackingRecHitsOwned_cosmicMuons__L1_obj, &b_TrackingRecHitsOwned_cosmicMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_cosmicMuons1Leg__L1.present", &TrackingRecHitsOwned_cosmicMuons1Leg__L1_present, &b_TrackingRecHitsOwned_cosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_cosmicMuons1Leg__L1.obj", &TrackingRecHitsOwned_cosmicMuons1Leg__L1_obj, &b_TrackingRecHitsOwned_cosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_electronGsfTracks__L1.present", &TrackingRecHitsOwned_electronGsfTracks__L1_present, &b_TrackingRecHitsOwned_electronGsfTracks__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_electronGsfTracks__L1.obj", &TrackingRecHitsOwned_electronGsfTracks__L1_obj, &b_TrackingRecHitsOwned_electronGsfTracks__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_generalTracks__L1.present", &TrackingRecHitsOwned_generalTracks__L1_present, &b_TrackingRecHitsOwned_generalTracks__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_generalTracks__L1.obj", &TrackingRecHitsOwned_generalTracks__L1_obj, &b_TrackingRecHitsOwned_generalTracks__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalCosmicMuons__L1.present", &TrackingRecHitsOwned_globalCosmicMuons__L1_present, &b_TrackingRecHitsOwned_globalCosmicMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalCosmicMuons__L1.obj", &TrackingRecHitsOwned_globalCosmicMuons__L1_obj, &b_TrackingRecHitsOwned_globalCosmicMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalCosmicMuons1Leg__L1.present", &TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_present, &b_TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalCosmicMuons1Leg__L1.obj", &TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_obj, &b_TrackingRecHitsOwned_globalCosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalMuons__L1.present", &TrackingRecHitsOwned_globalMuons__L1_present, &b_TrackingRecHitsOwned_globalMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalMuons__L1.obj", &TrackingRecHitsOwned_globalMuons__L1_obj, &b_TrackingRecHitsOwned_globalMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalSETMuons__L1.present", &TrackingRecHitsOwned_globalSETMuons__L1_present, &b_TrackingRecHitsOwned_globalSETMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_globalSETMuons__L1.obj", &TrackingRecHitsOwned_globalSETMuons__L1_obj, &b_TrackingRecHitsOwned_globalSETMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_pixelTracks__L1.present", &TrackingRecHitsOwned_pixelTracks__L1_present, &b_TrackingRecHitsOwned_pixelTracks__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_pixelTracks__L1.obj", &TrackingRecHitsOwned_pixelTracks__L1_obj, &b_TrackingRecHitsOwned_pixelTracks__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_refittedStandAloneMuons__L1.present", &TrackingRecHitsOwned_refittedStandAloneMuons__L1_present, &b_TrackingRecHitsOwned_refittedStandAloneMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_refittedStandAloneMuons__L1.obj", &TrackingRecHitsOwned_refittedStandAloneMuons__L1_obj, &b_TrackingRecHitsOwned_refittedStandAloneMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_regionalCosmicTracks__L1.present", &TrackingRecHitsOwned_regionalCosmicTracks__L1_present, &b_TrackingRecHitsOwned_regionalCosmicTracks__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_regionalCosmicTracks__L1.obj", &TrackingRecHitsOwned_regionalCosmicTracks__L1_obj, &b_TrackingRecHitsOwned_regionalCosmicTracks__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_standAloneMuons__L1.present", &TrackingRecHitsOwned_standAloneMuons__L1_present, &b_TrackingRecHitsOwned_standAloneMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_standAloneMuons__L1.obj", &TrackingRecHitsOwned_standAloneMuons__L1_obj, &b_TrackingRecHitsOwned_standAloneMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_standAloneSETMuons__L1.present", &TrackingRecHitsOwned_standAloneSETMuons__L1_present, &b_TrackingRecHitsOwned_standAloneSETMuons__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_standAloneSETMuons__L1.obj", &TrackingRecHitsOwned_standAloneSETMuons__L1_obj, &b_TrackingRecHitsOwned_standAloneSETMuons__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1.present", &TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_present, &b_TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1.obj", &TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj, &b_TrackingRecHitsOwned_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1.present", &TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_present, &b_TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1.obj", &TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj, &b_TrackingRecHitsOwned_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_default_L1.present", &TrackingRecHitsOwned_tevMuons_default_L1_present, &b_TrackingRecHitsOwned_tevMuons_default_L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_default_L1.obj", &TrackingRecHitsOwned_tevMuons_default_L1_obj, &b_TrackingRecHitsOwned_tevMuons_default_L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_dyt_L1.present", &TrackingRecHitsOwned_tevMuons_dyt_L1_present, &b_TrackingRecHitsOwned_tevMuons_dyt_L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_dyt_L1.obj", &TrackingRecHitsOwned_tevMuons_dyt_L1_obj, &b_TrackingRecHitsOwned_tevMuons_dyt_L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_firstHit_L1.present", &TrackingRecHitsOwned_tevMuons_firstHit_L1_present, &b_TrackingRecHitsOwned_tevMuons_firstHit_L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_firstHit_L1.obj", &TrackingRecHitsOwned_tevMuons_firstHit_L1_obj, &b_TrackingRecHitsOwned_tevMuons_firstHit_L1_obj);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_picky_L1.present", &TrackingRecHitsOwned_tevMuons_picky_L1_present, &b_TrackingRecHitsOwned_tevMuons_picky_L1_present);
   fChain->SetBranchAddress("TrackingRecHitsOwned_tevMuons_picky_L1.obj", &TrackingRecHitsOwned_tevMuons_picky_L1_obj, &b_TrackingRecHitsOwned_tevMuons_picky_L1_obj);
   fChain->SetBranchAddress("edmRandomEngineStates_randomEngineStateProducer__L1.present", &edmRandomEngineStates_randomEngineStateProducer__L1_present, &b_edmRandomEngineStates_randomEngineStateProducer__L1_present);
   fChain->SetBranchAddress("edmRandomEngineStates_randomEngineStateProducer__L1.obj", &edmRandomEngineStates_randomEngineStateProducer__L1_obj, &b_edmRandomEngineStates_randomEngineStateProducer__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1.present", &CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_present, &b_CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1.obj", &CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_obj, &b_CSCDetIdCSCRecHit2DsOwnedRangeMap_csc2DRecHits__L1_obj);
   fChain->SetBranchAddress("CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1.present", &CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_present, &b_CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_present);
   fChain->SetBranchAddress("CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1.obj", &CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_obj, &b_CSCDetIdCSCSegmentsOwnedRangeMap_cscSegments__L1_obj);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1.present", &DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_present, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_present);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1.obj", &DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_obj, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DCosmicSegments__L1_obj);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1.present", &DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_present, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_present);
   fChain->SetBranchAddress("DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1.obj", &DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_obj, &b_DTChamberIdDTRecSegment4DsOwnedRangeMap_dt4DSegments__L1_obj);
   fChain->SetBranchAddress("DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1.present", &DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_present, &b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_present);
   fChain->SetBranchAddress("DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1.obj", &DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_obj, &b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DCosmicRecHits__L1_obj);
   fChain->SetBranchAddress("DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1.present", &DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_present, &b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_present);
   fChain->SetBranchAddress("DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1.obj", &DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_obj, &b_DTLayerIdDTRecHit1DPairsOwnedRangeMap_dt1DRecHits__L1_obj);
   fChain->SetBranchAddress("RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1.present", &RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_present, &b_RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_present);
   fChain->SetBranchAddress("RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1.obj", &RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_obj, &b_RPCDetIdRPCRecHitsOwnedRangeMap_rpcRecHits__L1_obj);
   fChain->SetBranchAddress("CaloTowersSorted_towerMaker__L1.present", &CaloTowersSorted_towerMaker__L1_present, &b_CaloTowersSorted_towerMaker__L1_present);
   fChain->SetBranchAddress("CaloTowersSorted_towerMaker__L1.obj", &CaloTowersSorted_towerMaker__L1_obj, &b_CaloTowersSorted_towerMaker__L1_obj);
   fChain->SetBranchAddress("CastorRecHitsSorted_castorreco__L1.present", &CastorRecHitsSorted_castorreco__L1_present, &b_CastorRecHitsSorted_castorreco__L1_present);
   fChain->SetBranchAddress("CastorRecHitsSorted_castorreco__L1.obj", &CastorRecHitsSorted_castorreco__L1_obj, &b_CastorRecHitsSorted_castorreco__L1_obj);
   fChain->SetBranchAddress("EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1.present", &EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_present, &b_EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_present);
   fChain->SetBranchAddress("EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1.obj", &EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_obj, &b_EBSrFlagsSorted_simEcalDigis_ebSrFlags_L1_obj);
   fChain->SetBranchAddress("EESrFlagsSorted_simEcalDigis_eeSrFlags_L1.present", &EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_present, &b_EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_present);
   fChain->SetBranchAddress("EESrFlagsSorted_simEcalDigis_eeSrFlags_L1.obj", &EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_obj, &b_EESrFlagsSorted_simEcalDigis_eeSrFlags_L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsEB__L1.present", &EcalRecHitsSorted_reducedEcalRecHitsEB__L1_present, &b_EcalRecHitsSorted_reducedEcalRecHitsEB__L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsEB__L1.obj", &EcalRecHitsSorted_reducedEcalRecHitsEB__L1_obj, &b_EcalRecHitsSorted_reducedEcalRecHitsEB__L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsEE__L1.present", &EcalRecHitsSorted_reducedEcalRecHitsEE__L1_present, &b_EcalRecHitsSorted_reducedEcalRecHitsEE__L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsEE__L1.obj", &EcalRecHitsSorted_reducedEcalRecHitsEE__L1_obj, &b_EcalRecHitsSorted_reducedEcalRecHitsEE__L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsES__L1.present", &EcalRecHitsSorted_reducedEcalRecHitsES__L1_present, &b_EcalRecHitsSorted_reducedEcalRecHitsES__L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_reducedEcalRecHitsES__L1.obj", &EcalRecHitsSorted_reducedEcalRecHitsES__L1_obj, &b_EcalRecHitsSorted_reducedEcalRecHitsES__L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1.present", &EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_present, &b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1.obj", &EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_obj, &b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEB_L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1.present", &EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_present, &b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1.obj", &EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_obj, &b_EcalRecHitsSorted_ecalRecHit_EcalRecHitsEE_L1_obj);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1.present", &EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_present, &b_EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_present);
   fChain->SetBranchAddress("EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1.obj", &EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_obj, &b_EcalRecHitsSorted_ecalPreshowerRecHit_EcalRecHitsES_L1_obj);
   fChain->SetBranchAddress("EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1.present", &EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_present, &b_EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_present);
   fChain->SetBranchAddress("EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1.obj", &EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_obj, &b_EcalTriggerPrimitiveDigisSorted_ecalTPSkim__L1_obj);
   fChain->SetBranchAddress("EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1.present", &EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_present, &b_EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1.obj", &EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_obj, &b_EcalTriggerPrimitiveDigisSorted_simEcalTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("HBHEDataFramesSorted_simHcalDigis__L1.present", &HBHEDataFramesSorted_simHcalDigis__L1_present, &b_HBHEDataFramesSorted_simHcalDigis__L1_present);
   fChain->SetBranchAddress("HBHEDataFramesSorted_simHcalDigis__L1.obj", &HBHEDataFramesSorted_simHcalDigis__L1_obj, &b_HBHEDataFramesSorted_simHcalDigis__L1_obj);
   fChain->SetBranchAddress("HBHERecHitsSorted_hbhereco__L1.present", &HBHERecHitsSorted_hbhereco__L1_present, &b_HBHERecHitsSorted_hbhereco__L1_present);
   fChain->SetBranchAddress("HBHERecHitsSorted_hbhereco__L1.obj", &HBHERecHitsSorted_hbhereco__L1_obj, &b_HBHERecHitsSorted_hbhereco__L1_obj);
   fChain->SetBranchAddress("HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1.present", &HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_present, &b_HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_present);
   fChain->SetBranchAddress("HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1.obj", &HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_obj, &b_HBHERecHitsSorted_reducedHcalRecHits_hbhereco_L1_obj);
   fChain->SetBranchAddress("HFDataFramesSorted_simHcalDigis__L1.present", &HFDataFramesSorted_simHcalDigis__L1_present, &b_HFDataFramesSorted_simHcalDigis__L1_present);
   fChain->SetBranchAddress("HFDataFramesSorted_simHcalDigis__L1.obj", &HFDataFramesSorted_simHcalDigis__L1_obj, &b_HFDataFramesSorted_simHcalDigis__L1_obj);
   fChain->SetBranchAddress("HFRecHitsSorted_hfreco__L1.present", &HFRecHitsSorted_hfreco__L1_present, &b_HFRecHitsSorted_hfreco__L1_present);
   fChain->SetBranchAddress("HFRecHitsSorted_hfreco__L1.obj", &HFRecHitsSorted_hfreco__L1_obj, &b_HFRecHitsSorted_hfreco__L1_obj);
   fChain->SetBranchAddress("HFRecHitsSorted_reducedHcalRecHits_hfreco_L1.present", &HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_present, &b_HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_present);
   fChain->SetBranchAddress("HFRecHitsSorted_reducedHcalRecHits_hfreco_L1.obj", &HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_obj, &b_HFRecHitsSorted_reducedHcalRecHits_hfreco_L1_obj);
   fChain->SetBranchAddress("HODataFramesSorted_simHcalDigis__L1.present", &HODataFramesSorted_simHcalDigis__L1_present, &b_HODataFramesSorted_simHcalDigis__L1_present);
   fChain->SetBranchAddress("HODataFramesSorted_simHcalDigis__L1.obj", &HODataFramesSorted_simHcalDigis__L1_obj, &b_HODataFramesSorted_simHcalDigis__L1_obj);
   fChain->SetBranchAddress("HORecHitsSorted_horeco__L1.present", &HORecHitsSorted_horeco__L1_present, &b_HORecHitsSorted_horeco__L1_present);
   fChain->SetBranchAddress("HORecHitsSorted_horeco__L1.obj", &HORecHitsSorted_horeco__L1_obj, &b_HORecHitsSorted_horeco__L1_obj);
   fChain->SetBranchAddress("HORecHitsSorted_reducedHcalRecHits_horeco_L1.present", &HORecHitsSorted_reducedHcalRecHits_horeco_L1_present, &b_HORecHitsSorted_reducedHcalRecHits_horeco_L1_present);
   fChain->SetBranchAddress("HORecHitsSorted_reducedHcalRecHits_horeco_L1.obj", &HORecHitsSorted_reducedHcalRecHits_horeco_L1_obj, &b_HORecHitsSorted_reducedHcalRecHits_horeco_L1_obj);
   fChain->SetBranchAddress("HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1.present", &HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_present, &b_HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_present);
   fChain->SetBranchAddress("HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1.obj", &HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_obj, &b_HcalTriggerPrimitiveDigisSorted_simHcalTriggerPrimitiveDigis__L1_obj);
   fChain->SetBranchAddress("HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1.present", &HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_present, &b_HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_present);
   fChain->SetBranchAddress("HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1.obj", &HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_obj, &b_HcalUpgradeDataFramesSorted_simHcalDigis_HBHEUpgradeDigiCollection_L1_obj);
   fChain->SetBranchAddress("HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1.present", &HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_present, &b_HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_present);
   fChain->SetBranchAddress("HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1.obj", &HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_obj, &b_HcalUpgradeDataFramesSorted_simHcalDigis_HFUpgradeDigiCollection_L1_obj);
   fChain->SetBranchAddress("ZDCDataFramesSorted_hcalDigis__L1.present", &ZDCDataFramesSorted_hcalDigis__L1_present, &b_ZDCDataFramesSorted_hcalDigis__L1_present);
   fChain->SetBranchAddress("ZDCDataFramesSorted_hcalDigis__L1.obj", &ZDCDataFramesSorted_hcalDigis__L1_obj, &b_ZDCDataFramesSorted_hcalDigis__L1_obj);
   fChain->SetBranchAddress("ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1.present", &ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_present, &b_ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_present);
   fChain->SetBranchAddress("ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1.obj", &ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_obj, &b_ZDCDataFramesSorted_simHcalUnsuppressedDigis__L1_obj);
   fChain->SetBranchAddress("ZDCRecHitsSorted_zdcreco__L1.present", &ZDCRecHitsSorted_zdcreco__L1_present, &b_ZDCRecHitsSorted_zdcreco__L1_present);
   fChain->SetBranchAddress("ZDCRecHitsSorted_zdcreco__L1.obj", &ZDCRecHitsSorted_zdcreco__L1_obj, &b_ZDCRecHitsSorted_zdcreco__L1_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__L1.present", &edmTriggerResults_TriggerResults__L1_present, &b_edmTriggerResults_TriggerResults__L1_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__L1.obj", &edmTriggerResults_TriggerResults__L1_obj, &b_edmTriggerResults_TriggerResults__L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1.present", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_present, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1.obj", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_obj, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1.present", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_present, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1.obj", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_obj, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1.present", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_present, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1.obj", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_obj, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDLooseEM_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1.present", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_present, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1.obj", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_obj, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDLooseEM_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1.present", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_present, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1.obj", &booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_obj, &b_booledmValueMap_PhotonIDProd_PhotonCutBasedIDTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1.present", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_present, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1.obj", &booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_obj, &b_booledmValueMap_PhotonIDProdGED_PhotonCutBasedIDTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidAllArbitrated_L1.present", &booledmValueMap_muons_muidAllArbitrated_L1_present, &b_booledmValueMap_muons_muidAllArbitrated_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidAllArbitrated_L1.obj", &booledmValueMap_muons_muidAllArbitrated_L1_obj, &b_booledmValueMap_muons_muidAllArbitrated_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMStaChiCompatibility_L1.present", &booledmValueMap_muons_muidGMStaChiCompatibility_L1_present, &b_booledmValueMap_muons_muidGMStaChiCompatibility_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMStaChiCompatibility_L1.obj", &booledmValueMap_muons_muidGMStaChiCompatibility_L1_obj, &b_booledmValueMap_muons_muidGMStaChiCompatibility_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMTkChiCompatibility_L1.present", &booledmValueMap_muons_muidGMTkChiCompatibility_L1_present, &b_booledmValueMap_muons_muidGMTkChiCompatibility_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMTkChiCompatibility_L1.obj", &booledmValueMap_muons_muidGMTkChiCompatibility_L1_obj, &b_booledmValueMap_muons_muidGMTkChiCompatibility_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMTkKinkTight_L1.present", &booledmValueMap_muons_muidGMTkKinkTight_L1_present, &b_booledmValueMap_muons_muidGMTkKinkTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGMTkKinkTight_L1.obj", &booledmValueMap_muons_muidGMTkKinkTight_L1_obj, &b_booledmValueMap_muons_muidGMTkKinkTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGlobalMuonPromptTight_L1.present", &booledmValueMap_muons_muidGlobalMuonPromptTight_L1_present, &b_booledmValueMap_muons_muidGlobalMuonPromptTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidGlobalMuonPromptTight_L1.obj", &booledmValueMap_muons_muidGlobalMuonPromptTight_L1_obj, &b_booledmValueMap_muons_muidGlobalMuonPromptTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidRPCMuLoose_L1.present", &booledmValueMap_muons_muidRPCMuLoose_L1_present, &b_booledmValueMap_muons_muidRPCMuLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidRPCMuLoose_L1.obj", &booledmValueMap_muons_muidRPCMuLoose_L1_obj, &b_booledmValueMap_muons_muidRPCMuLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTM2DCompatibilityLoose_L1.present", &booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_present, &b_booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTM2DCompatibilityLoose_L1.obj", &booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_obj, &b_booledmValueMap_muons_muidTM2DCompatibilityLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTM2DCompatibilityTight_L1.present", &booledmValueMap_muons_muidTM2DCompatibilityTight_L1_present, &b_booledmValueMap_muons_muidTM2DCompatibilityTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTM2DCompatibilityTight_L1.obj", &booledmValueMap_muons_muidTM2DCompatibilityTight_L1_obj, &b_booledmValueMap_muons_muidTM2DCompatibilityTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationAngLoose_L1.present", &booledmValueMap_muons_muidTMLastStationAngLoose_L1_present, &b_booledmValueMap_muons_muidTMLastStationAngLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationAngLoose_L1.obj", &booledmValueMap_muons_muidTMLastStationAngLoose_L1_obj, &b_booledmValueMap_muons_muidTMLastStationAngLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationAngTight_L1.present", &booledmValueMap_muons_muidTMLastStationAngTight_L1_present, &b_booledmValueMap_muons_muidTMLastStationAngTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationAngTight_L1.obj", &booledmValueMap_muons_muidTMLastStationAngTight_L1_obj, &b_booledmValueMap_muons_muidTMLastStationAngTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationLoose_L1.present", &booledmValueMap_muons_muidTMLastStationLoose_L1_present, &b_booledmValueMap_muons_muidTMLastStationLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationLoose_L1.obj", &booledmValueMap_muons_muidTMLastStationLoose_L1_obj, &b_booledmValueMap_muons_muidTMLastStationLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1.present", &booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_present, &b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1.obj", &booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_obj, &b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1.present", &booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_present, &b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1.obj", &booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_obj, &b_booledmValueMap_muons_muidTMLastStationOptimizedLowPtTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationTight_L1.present", &booledmValueMap_muons_muidTMLastStationTight_L1_present, &b_booledmValueMap_muons_muidTMLastStationTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMLastStationTight_L1.obj", &booledmValueMap_muons_muidTMLastStationTight_L1_obj, &b_booledmValueMap_muons_muidTMLastStationTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationAngLoose_L1.present", &booledmValueMap_muons_muidTMOneStationAngLoose_L1_present, &b_booledmValueMap_muons_muidTMOneStationAngLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationAngLoose_L1.obj", &booledmValueMap_muons_muidTMOneStationAngLoose_L1_obj, &b_booledmValueMap_muons_muidTMOneStationAngLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationAngTight_L1.present", &booledmValueMap_muons_muidTMOneStationAngTight_L1_present, &b_booledmValueMap_muons_muidTMOneStationAngTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationAngTight_L1.obj", &booledmValueMap_muons_muidTMOneStationAngTight_L1_obj, &b_booledmValueMap_muons_muidTMOneStationAngTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationLoose_L1.present", &booledmValueMap_muons_muidTMOneStationLoose_L1_present, &b_booledmValueMap_muons_muidTMOneStationLoose_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationLoose_L1.obj", &booledmValueMap_muons_muidTMOneStationLoose_L1_obj, &b_booledmValueMap_muons_muidTMOneStationLoose_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationTight_L1.present", &booledmValueMap_muons_muidTMOneStationTight_L1_present, &b_booledmValueMap_muons_muidTMOneStationTight_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTMOneStationTight_L1.obj", &booledmValueMap_muons_muidTMOneStationTight_L1_obj, &b_booledmValueMap_muons_muidTMOneStationTight_L1_obj);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTrackerMuonArbitrated_L1.present", &booledmValueMap_muons_muidTrackerMuonArbitrated_L1_present, &b_booledmValueMap_muons_muidTrackerMuonArbitrated_L1_present);
   fChain->SetBranchAddress("booledmValueMap_muons_muidTrackerMuonArbitrated_L1.obj", &booledmValueMap_muons_muidTrackerMuonArbitrated_L1_obj, &b_booledmValueMap_muons_muidTrackerMuonArbitrated_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueCharged04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueChargedAll04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGamma04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueGammaHighThreshold04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutral04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValueNeutralHighThreshold04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1.present", &doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_present, &b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1.obj", &doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_obj, &b_doubleedmValueMap_muons_muPFMeanDRIsoValuePU04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueCharged04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueChargedAll04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGamma04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueGammaHighThreshold04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutral04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValueNeutralHighThreshold04_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValuePU03_L1_obj);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1.present", &doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_present, &b_doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_present);
   fChain->SetBranchAddress("doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1.obj", &doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_obj, &b_doubleedmValueMap_muons_muPFSumDRIsoValuePU04_L1_obj);
   fChain->SetBranchAddress("recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1.present", &recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_present, &b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_present);
   fChain->SetBranchAddress("recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1.obj", &recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_obj, &b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationEBEE_L1_obj);
   fChain->SetBranchAddress("recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1.present", &recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_present, &b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_present);
   fChain->SetBranchAddress("recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1.obj", &recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_obj, &b_recoCaloClusteredmPtredmValueMap_particleFlowSuperClusterECAL_PFClusterAssociationES_L1_obj);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1.present", &recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_present, &b_recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_present);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1.obj", &recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_obj, &b_recoPFCandidateedmPtredmValueMap_particleFlow_electrons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1.present", &recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_present, &b_recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_present);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1.obj", &recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_obj, &b_recoPFCandidateedmPtredmValueMap_particleFlow_muons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1.present", &recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_present, &b_recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_present);
   fChain->SetBranchAddress("recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1.obj", &recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_obj, &b_recoPFCandidateedmPtredmValueMap_particleFlow_photons_L1_obj);
   fChain->SetBranchAddress("recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1.present", &recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_present, &b_recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_present);
   fChain->SetBranchAddress("recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1.obj", &recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_obj, &b_recoPhotonsrecoPhotonrecoPhotonsrecoPhotonedmrefhelperFindUsingAdvanceedmRefedmValueMap_gedPhotons_valMapPFEgammaCandToPhoton_L1_obj);
   fChain->SetBranchAddress("recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1.present", &recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_present, &b_recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_present);
   fChain->SetBranchAddress("recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1.obj", &recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_obj, &b_recoPreIdsrecoPreIdrecoPreIdsrecoPreIdedmrefhelperFindUsingAdvanceedmRefedmValueMap_trackerDrivenElectronSeeds_preid_L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_eidLoose__L1.present", &floatedmValueMap_eidLoose__L1_present, &b_floatedmValueMap_eidLoose__L1_present);
   fChain->SetBranchAddress("floatedmValueMap_eidLoose__L1.obj", &floatedmValueMap_eidLoose__L1_obj, &b_floatedmValueMap_eidLoose__L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustHighEnergy__L1.present", &floatedmValueMap_eidRobustHighEnergy__L1_present, &b_floatedmValueMap_eidRobustHighEnergy__L1_present);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustHighEnergy__L1.obj", &floatedmValueMap_eidRobustHighEnergy__L1_obj, &b_floatedmValueMap_eidRobustHighEnergy__L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustLoose__L1.present", &floatedmValueMap_eidRobustLoose__L1_present, &b_floatedmValueMap_eidRobustLoose__L1_present);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustLoose__L1.obj", &floatedmValueMap_eidRobustLoose__L1_obj, &b_floatedmValueMap_eidRobustLoose__L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustTight__L1.present", &floatedmValueMap_eidRobustTight__L1_present, &b_floatedmValueMap_eidRobustTight__L1_present);
   fChain->SetBranchAddress("floatedmValueMap_eidRobustTight__L1.obj", &floatedmValueMap_eidRobustTight__L1_obj, &b_floatedmValueMap_eidRobustTight__L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_eidTight__L1.present", &floatedmValueMap_eidTight__L1_present, &b_floatedmValueMap_eidTight__L1_present);
   fChain->SetBranchAddress("floatedmValueMap_eidTight__L1.obj", &floatedmValueMap_eidTight__L1_obj, &b_floatedmValueMap_eidTight__L1_obj);
   fChain->SetBranchAddress("floatedmValueMap_generalTracks_MVAVals_L1.present", &floatedmValueMap_generalTracks_MVAVals_L1_present, &b_floatedmValueMap_generalTracks_MVAVals_L1_present);
   fChain->SetBranchAddress("floatedmValueMap_generalTracks_MVAVals_L1.obj", &floatedmValueMap_generalTracks_MVAVals_L1_obj, &b_floatedmValueMap_generalTracks_MVAVals_L1_obj);
   fChain->SetBranchAddress("recoCastorJetIDedmValueMap_ak7CastorJetID__L1.present", &recoCastorJetIDedmValueMap_ak7CastorJetID__L1_present, &b_recoCastorJetIDedmValueMap_ak7CastorJetID__L1_present);
   fChain->SetBranchAddress("recoCastorJetIDedmValueMap_ak7CastorJetID__L1.obj", &recoCastorJetIDedmValueMap_ak7CastorJetID__L1_obj, &b_recoCastorJetIDedmValueMap_ak7CastorJetID__L1_obj);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxDiscrimASmi__L1.present", &recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_present, &b_recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_present);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxDiscrimASmi__L1.obj", &recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_obj, &b_recoDeDxDataedmValueMap_dedxDiscrimASmi__L1_obj);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxHarmonic2__L1.present", &recoDeDxDataedmValueMap_dedxHarmonic2__L1_present, &b_recoDeDxDataedmValueMap_dedxHarmonic2__L1_present);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxHarmonic2__L1.obj", &recoDeDxDataedmValueMap_dedxHarmonic2__L1_obj, &b_recoDeDxDataedmValueMap_dedxHarmonic2__L1_obj);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxTruncated40__L1.present", &recoDeDxDataedmValueMap_dedxTruncated40__L1_present, &b_recoDeDxDataedmValueMap_dedxTruncated40__L1_present);
   fChain->SetBranchAddress("recoDeDxDataedmValueMap_dedxTruncated40__L1.obj", &recoDeDxDataedmValueMap_dedxTruncated40__L1_obj, &b_recoDeDxDataedmValueMap_dedxTruncated40__L1_obj);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositJets__L1.present", &recoIsoDepositedmValueMap_muIsoDepositJets__L1_present, &b_recoIsoDepositedmValueMap_muIsoDepositJets__L1_present);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositJets__L1.obj", &recoIsoDepositedmValueMap_muIsoDepositJets__L1_obj, &b_recoIsoDepositedmValueMap_muIsoDepositJets__L1_obj);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositTk__L1.present", &recoIsoDepositedmValueMap_muIsoDepositTk__L1_present, &b_recoIsoDepositedmValueMap_muIsoDepositTk__L1_present);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositTk__L1.obj", &recoIsoDepositedmValueMap_muIsoDepositTk__L1_obj, &b_recoIsoDepositedmValueMap_muIsoDepositTk__L1_obj);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1.present", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_present, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_present);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1.obj", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_obj, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ecal_L1_obj);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1.present", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_present, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_present);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1.obj", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_obj, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_hcal_L1_obj);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1.present", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_present, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_present);
   fChain->SetBranchAddress("recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1.obj", &recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_obj, &b_recoIsoDepositedmValueMap_muIsoDepositCalByAssociatorTowers_ho_L1_obj);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ak5JetID__L1.present", &recoJetIDedmValueMap_ak5JetID__L1_present, &b_recoJetIDedmValueMap_ak5JetID__L1_present);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ak5JetID__L1.obj", &recoJetIDedmValueMap_ak5JetID__L1_obj, &b_recoJetIDedmValueMap_ak5JetID__L1_obj);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ak7JetID__L1.present", &recoJetIDedmValueMap_ak7JetID__L1_present, &b_recoJetIDedmValueMap_ak7JetID__L1_present);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ak7JetID__L1.obj", &recoJetIDedmValueMap_ak7JetID__L1_obj, &b_recoJetIDedmValueMap_ak7JetID__L1_obj);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ic5JetID__L1.present", &recoJetIDedmValueMap_ic5JetID__L1_present, &b_recoJetIDedmValueMap_ic5JetID__L1_present);
   fChain->SetBranchAddress("recoJetIDedmValueMap_ic5JetID__L1.obj", &recoJetIDedmValueMap_ic5JetID__L1_obj, &b_recoJetIDedmValueMap_ic5JetID__L1_obj);
   fChain->SetBranchAddress("recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1.present", &recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_present, &b_recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_present);
   fChain->SetBranchAddress("recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1.obj", &recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_obj, &b_recoMuonCosmicCompatibilityedmValueMap_muons_cosmicsVeto_L1_obj);
   fChain->SetBranchAddress("recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1.present", &recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_present, &b_recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_present);
   fChain->SetBranchAddress("recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1.obj", &recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_obj, &b_recoMuonMETCorrectionDataedmValueMap_muonMETValueMapProducer_muCorrData_L1_obj);
   fChain->SetBranchAddress("recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1.present", &recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_present, &b_recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_present);
   fChain->SetBranchAddress("recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1.obj", &recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_obj, &b_recoMuonMETCorrectionDataedmValueMap_muonTCMETValueMapProducer_muCorrData_L1_obj);
   fChain->SetBranchAddress("recoMuonShoweredmValueMap_muons_muonShowerInformation_L1.present", &recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_present, &b_recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_present);
   fChain->SetBranchAddress("recoMuonShoweredmValueMap_muons_muonShowerInformation_L1.obj", &recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_obj, &b_recoMuonShoweredmValueMap_muons_muonShowerInformation_L1_obj);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_combined_L1.present", &recoMuonTimeExtraedmValueMap_muons_combined_L1_present, &b_recoMuonTimeExtraedmValueMap_muons_combined_L1_present);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_combined_L1.obj", &recoMuonTimeExtraedmValueMap_muons_combined_L1_obj, &b_recoMuonTimeExtraedmValueMap_muons_combined_L1_obj);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_csc_L1.present", &recoMuonTimeExtraedmValueMap_muons_csc_L1_present, &b_recoMuonTimeExtraedmValueMap_muons_csc_L1_present);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_csc_L1.obj", &recoMuonTimeExtraedmValueMap_muons_csc_L1_obj, &b_recoMuonTimeExtraedmValueMap_muons_csc_L1_obj);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_dt_L1.present", &recoMuonTimeExtraedmValueMap_muons_dt_L1_present, &b_recoMuonTimeExtraedmValueMap_muons_dt_L1_present);
   fChain->SetBranchAddress("recoMuonTimeExtraedmValueMap_muons_dt_L1.obj", &recoMuonTimeExtraedmValueMap_muons_dt_L1_obj, &b_recoMuonTimeExtraedmValueMap_muons_dt_L1_obj);
   fChain->SetBranchAddress("recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1.present", &recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_present, &b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_present);
   fChain->SetBranchAddress("recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1.obj", &recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_obj, &b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedGsfElectrons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1.present", &recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_present, &b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_present);
   fChain->SetBranchAddress("recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1.obj", &recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_obj, &b_recoPFCandidatesrecoPFCandidaterecoPFCandidatesrecoPFCandidateedmrefhelperFindUsingAdvanceedmRefsedmValueMap_particleBasedIsolation_gedPhotons_L1_obj);
   fChain->SetBranchAddress("uintedmValueMap_muons_cosmicsVeto_L1.present", &uintedmValueMap_muons_cosmicsVeto_L1_present, &b_uintedmValueMap_muons_cosmicsVeto_L1_present);
   fChain->SetBranchAddress("uintedmValueMap_muons_cosmicsVeto_L1.obj", &uintedmValueMap_muons_cosmicsVeto_L1_obj, &b_uintedmValueMap_muons_cosmicsVeto_L1_obj);
   fChain->SetBranchAddress("SiPixelClusteredmNewDetSetVector_siPixelClusters__L1.present", &SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_present, &b_SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_present);
   fChain->SetBranchAddress("SiPixelClusteredmNewDetSetVector_siPixelClusters__L1.obj", &SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_obj, &b_SiPixelClusteredmNewDetSetVector_siPixelClusters__L1_obj);
   fChain->SetBranchAddress("SiStripClusteredmNewDetSetVector_siStripClusters__L1.present", &SiStripClusteredmNewDetSetVector_siStripClusters__L1_present, &b_SiStripClusteredmNewDetSetVector_siStripClusters__L1_present);
   fChain->SetBranchAddress("SiStripClusteredmNewDetSetVector_siStripClusters__L1.obj", &SiStripClusteredmNewDetSetVector_siStripClusters__L1_obj, &b_SiStripClusteredmNewDetSetVector_siStripClusters__L1_obj);
   fChain->SetBranchAddress("recoBeamHaloSummary_BeamHaloSummary__L1.present", &recoBeamHaloSummary_BeamHaloSummary__L1_present, &b_recoBeamHaloSummary_BeamHaloSummary__L1_present);
   fChain->SetBranchAddress("recoBeamHaloSummary_BeamHaloSummary__L1.obj", &recoBeamHaloSummary_BeamHaloSummary__L1_obj, &b_recoBeamHaloSummary_BeamHaloSummary__L1_obj);
   fChain->SetBranchAddress("recoBeamSpot_offlineBeamSpot__L1.present", &recoBeamSpot_offlineBeamSpot__L1_present, &b_recoBeamSpot_offlineBeamSpot__L1_present);
   fChain->SetBranchAddress("recoBeamSpot_offlineBeamSpot__L1.obj", &recoBeamSpot_offlineBeamSpot__L1_obj, &b_recoBeamSpot_offlineBeamSpot__L1_obj);
   fChain->SetBranchAddress("recoCSCHaloData_CSCHaloData__L1.present", &recoCSCHaloData_CSCHaloData__L1_present, &b_recoCSCHaloData_CSCHaloData__L1_present);
   fChain->SetBranchAddress("recoCSCHaloData_CSCHaloData__L1.obj", &recoCSCHaloData_CSCHaloData__L1_obj, &b_recoCSCHaloData_CSCHaloData__L1_obj);
   fChain->SetBranchAddress("recoEcalHaloData_EcalHaloData__L1.present", &recoEcalHaloData_EcalHaloData__L1_present, &b_recoEcalHaloData_EcalHaloData__L1_present);
   fChain->SetBranchAddress("recoEcalHaloData_EcalHaloData__L1.obj", &recoEcalHaloData_EcalHaloData__L1_obj, &b_recoEcalHaloData_EcalHaloData__L1_obj);
   fChain->SetBranchAddress("recoGlobalHaloData_GlobalHaloData__L1.present", &recoGlobalHaloData_GlobalHaloData__L1_present, &b_recoGlobalHaloData_GlobalHaloData__L1_present);
   fChain->SetBranchAddress("recoGlobalHaloData_GlobalHaloData__L1.obj", &recoGlobalHaloData_GlobalHaloData__L1_obj, &b_recoGlobalHaloData_GlobalHaloData__L1_obj);
   fChain->SetBranchAddress("recoHcalHaloData_HcalHaloData__L1.present", &recoHcalHaloData_HcalHaloData__L1_present, &b_recoHcalHaloData_HcalHaloData__L1_present);
   fChain->SetBranchAddress("recoHcalHaloData_HcalHaloData__L1.obj", &recoHcalHaloData_HcalHaloData__L1_obj, &b_recoHcalHaloData_HcalHaloData__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDeadECALElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFinding__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingNewDMs__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByDecayModeFindingOldDMs__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseChargedIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection2__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByLooseMuonRejection3__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5LooseElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5MediumElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5TightElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VLooseElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5VTightElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVALooseMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVAMediumMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVATightMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumChargedIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMediumMuonRejection2__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawChargedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawCombinedIsolationDBSumPtCorr3Hits__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByRawGammaIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightChargedIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightElectronRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection2__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByTightMuonRejection3__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseChargedIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseCombinedIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolation__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationDBSumPtCorr__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVLooseIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVTightIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3newDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByVVTightIsolationMVA3oldDMwoLT__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1.present", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_present, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1.obj", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationChargedIsoPtSum__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1.present", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_present, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1.obj", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationNeutralIsoPtSum__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1.present", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_present, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1.obj", &recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_obj, &b_recoPFTauDiscriminator_hpsPFTauMVA3IsolationPUcorrPtSum__L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwLTraw_category_L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3newDMwoLTraw_category_L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwLTraw_category_L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByIsolationMVA3oldDMwoLTraw_category_L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVA5rawElectronRejection_category_L1_obj);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1.present", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_present, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_present);
   fChain->SetBranchAddress("recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1.obj", &recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_obj, &b_recoPFTauDiscriminator_hpsPFTauDiscriminationByMVArawMuonRejection_category_L1_obj);
   fChain->SetBranchAddress("intL1CSCSPStatusDigisstdpair_csctfDigis__L1.present", &intL1CSCSPStatusDigisstdpair_csctfDigis__L1_present, &b_intL1CSCSPStatusDigisstdpair_csctfDigis__L1_present);
   fChain->SetBranchAddress("intL1CSCSPStatusDigisstdpair_csctfDigis__L1.obj", &intL1CSCSPStatusDigisstdpair_csctfDigis__L1_obj, &b_intL1CSCSPStatusDigisstdpair_csctfDigis__L1_obj);
   fChain->SetBranchAddress("BeamSpotOnlines_scalersRawToDigi__L1.present", &BeamSpotOnlines_scalersRawToDigi__L1_present, &b_BeamSpotOnlines_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("BeamSpotOnlines_scalersRawToDigi__L1.obj", &BeamSpotOnlines_scalersRawToDigi__L1_obj, &b_BeamSpotOnlines_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("DcsStatuss_scalersRawToDigi__L1.present", &DcsStatuss_scalersRawToDigi__L1_present, &b_DcsStatuss_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("DcsStatuss_scalersRawToDigi__L1.obj", &DcsStatuss_scalersRawToDigi__L1_obj, &b_DcsStatuss_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("L1AcceptBunchCrossings_scalersRawToDigi__L1.present", &L1AcceptBunchCrossings_scalersRawToDigi__L1_present, &b_L1AcceptBunchCrossings_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("L1AcceptBunchCrossings_scalersRawToDigi__L1.obj", &L1AcceptBunchCrossings_scalersRawToDigi__L1_obj, &b_L1AcceptBunchCrossings_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("L1CaloEmCands_gctDigis__L1.present", &L1CaloEmCands_gctDigis__L1_present, &b_L1CaloEmCands_gctDigis__L1_present);
   fChain->SetBranchAddress("L1CaloEmCands_gctDigis__L1.obj", &L1CaloEmCands_gctDigis__L1_obj, &b_L1CaloEmCands_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1CaloEmCands_simRctDigis__L1.present", &L1CaloEmCands_simRctDigis__L1_present, &b_L1CaloEmCands_simRctDigis__L1_present);
   fChain->SetBranchAddress("L1CaloEmCands_simRctDigis__L1.obj", &L1CaloEmCands_simRctDigis__L1_obj, &b_L1CaloEmCands_simRctDigis__L1_obj);
   fChain->SetBranchAddress("L1CaloRegions_gctDigis__L1.present", &L1CaloRegions_gctDigis__L1_present, &b_L1CaloRegions_gctDigis__L1_present);
   fChain->SetBranchAddress("L1CaloRegions_gctDigis__L1.obj", &L1CaloRegions_gctDigis__L1_obj, &b_L1CaloRegions_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1CaloRegions_simRctDigis__L1.present", &L1CaloRegions_simRctDigis__L1_present, &b_L1CaloRegions_simRctDigis__L1_present);
   fChain->SetBranchAddress("L1CaloRegions_simRctDigis__L1.obj", &L1CaloRegions_simRctDigis__L1_obj, &b_L1CaloRegions_simRctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEmCands_gctDigis_isoEm_L1.present", &L1GctEmCands_gctDigis_isoEm_L1_present, &b_L1GctEmCands_gctDigis_isoEm_L1_present);
   fChain->SetBranchAddress("L1GctEmCands_gctDigis_isoEm_L1.obj", &L1GctEmCands_gctDigis_isoEm_L1_obj, &b_L1GctEmCands_gctDigis_isoEm_L1_obj);
   fChain->SetBranchAddress("L1GctEmCands_simGctDigis_isoEm_L1.present", &L1GctEmCands_simGctDigis_isoEm_L1_present, &b_L1GctEmCands_simGctDigis_isoEm_L1_present);
   fChain->SetBranchAddress("L1GctEmCands_simGctDigis_isoEm_L1.obj", &L1GctEmCands_simGctDigis_isoEm_L1_obj, &b_L1GctEmCands_simGctDigis_isoEm_L1_obj);
   fChain->SetBranchAddress("L1GctEmCands_gctDigis_nonIsoEm_L1.present", &L1GctEmCands_gctDigis_nonIsoEm_L1_present, &b_L1GctEmCands_gctDigis_nonIsoEm_L1_present);
   fChain->SetBranchAddress("L1GctEmCands_gctDigis_nonIsoEm_L1.obj", &L1GctEmCands_gctDigis_nonIsoEm_L1_obj, &b_L1GctEmCands_gctDigis_nonIsoEm_L1_obj);
   fChain->SetBranchAddress("L1GctEmCands_simGctDigis_nonIsoEm_L1.present", &L1GctEmCands_simGctDigis_nonIsoEm_L1_present, &b_L1GctEmCands_simGctDigis_nonIsoEm_L1_present);
   fChain->SetBranchAddress("L1GctEmCands_simGctDigis_nonIsoEm_L1.obj", &L1GctEmCands_simGctDigis_nonIsoEm_L1_obj, &b_L1GctEmCands_simGctDigis_nonIsoEm_L1_obj);
   fChain->SetBranchAddress("L1GctEtHads_gctDigis__L1.present", &L1GctEtHads_gctDigis__L1_present, &b_L1GctEtHads_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtHads_gctDigis__L1.obj", &L1GctEtHads_gctDigis__L1_obj, &b_L1GctEtHads_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEtHads_simGctDigis__L1.present", &L1GctEtHads_simGctDigis__L1_present, &b_L1GctEtHads_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtHads_simGctDigis__L1.obj", &L1GctEtHads_simGctDigis__L1_obj, &b_L1GctEtHads_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEtMisss_gctDigis__L1.present", &L1GctEtMisss_gctDigis__L1_present, &b_L1GctEtMisss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtMisss_gctDigis__L1.obj", &L1GctEtMisss_gctDigis__L1_obj, &b_L1GctEtMisss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEtMisss_simGctDigis__L1.present", &L1GctEtMisss_simGctDigis__L1_present, &b_L1GctEtMisss_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtMisss_simGctDigis__L1.obj", &L1GctEtMisss_simGctDigis__L1_obj, &b_L1GctEtMisss_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEtTotals_gctDigis__L1.present", &L1GctEtTotals_gctDigis__L1_present, &b_L1GctEtTotals_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtTotals_gctDigis__L1.obj", &L1GctEtTotals_gctDigis__L1_obj, &b_L1GctEtTotals_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctEtTotals_simGctDigis__L1.present", &L1GctEtTotals_simGctDigis__L1_present, &b_L1GctEtTotals_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctEtTotals_simGctDigis__L1.obj", &L1GctEtTotals_simGctDigis__L1_obj, &b_L1GctEtTotals_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctFibreWords_gctDigis__L1.present", &L1GctFibreWords_gctDigis__L1_present, &b_L1GctFibreWords_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctFibreWords_gctDigis__L1.obj", &L1GctFibreWords_gctDigis__L1_obj, &b_L1GctFibreWords_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHFBitCountss_gctDigis__L1.present", &L1GctHFBitCountss_gctDigis__L1_present, &b_L1GctHFBitCountss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHFBitCountss_gctDigis__L1.obj", &L1GctHFBitCountss_gctDigis__L1_obj, &b_L1GctHFBitCountss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHFBitCountss_simGctDigis__L1.present", &L1GctHFBitCountss_simGctDigis__L1_present, &b_L1GctHFBitCountss_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHFBitCountss_simGctDigis__L1.obj", &L1GctHFBitCountss_simGctDigis__L1_obj, &b_L1GctHFBitCountss_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHFRingEtSumss_gctDigis__L1.present", &L1GctHFRingEtSumss_gctDigis__L1_present, &b_L1GctHFRingEtSumss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHFRingEtSumss_gctDigis__L1.obj", &L1GctHFRingEtSumss_gctDigis__L1_obj, &b_L1GctHFRingEtSumss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHFRingEtSumss_simGctDigis__L1.present", &L1GctHFRingEtSumss_simGctDigis__L1_present, &b_L1GctHFRingEtSumss_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHFRingEtSumss_simGctDigis__L1.obj", &L1GctHFRingEtSumss_simGctDigis__L1_obj, &b_L1GctHFRingEtSumss_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHtMisss_gctDigis__L1.present", &L1GctHtMisss_gctDigis__L1_present, &b_L1GctHtMisss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHtMisss_gctDigis__L1.obj", &L1GctHtMisss_gctDigis__L1_obj, &b_L1GctHtMisss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctHtMisss_simGctDigis__L1.present", &L1GctHtMisss_simGctDigis__L1_present, &b_L1GctHtMisss_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctHtMisss_simGctDigis__L1.obj", &L1GctHtMisss_simGctDigis__L1_obj, &b_L1GctHtMisss_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternEmCands_gctDigis__L1.present", &L1GctInternEmCands_gctDigis__L1_present, &b_L1GctInternEmCands_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternEmCands_gctDigis__L1.obj", &L1GctInternEmCands_gctDigis__L1_obj, &b_L1GctInternEmCands_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternEtSums_gctDigis__L1.present", &L1GctInternEtSums_gctDigis__L1_present, &b_L1GctInternEtSums_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternEtSums_gctDigis__L1.obj", &L1GctInternEtSums_gctDigis__L1_obj, &b_L1GctInternEtSums_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternEtSums_simGctDigis__L1.present", &L1GctInternEtSums_simGctDigis__L1_present, &b_L1GctInternEtSums_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternEtSums_simGctDigis__L1.obj", &L1GctInternEtSums_simGctDigis__L1_obj, &b_L1GctInternEtSums_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternHFDatas_gctDigis__L1.present", &L1GctInternHFDatas_gctDigis__L1_present, &b_L1GctInternHFDatas_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternHFDatas_gctDigis__L1.obj", &L1GctInternHFDatas_gctDigis__L1_obj, &b_L1GctInternHFDatas_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternHtMisss_gctDigis__L1.present", &L1GctInternHtMisss_gctDigis__L1_present, &b_L1GctInternHtMisss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternHtMisss_gctDigis__L1.obj", &L1GctInternHtMisss_gctDigis__L1_obj, &b_L1GctInternHtMisss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternHtMisss_simGctDigis__L1.present", &L1GctInternHtMisss_simGctDigis__L1_present, &b_L1GctInternHtMisss_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternHtMisss_simGctDigis__L1.obj", &L1GctInternHtMisss_simGctDigis__L1_obj, &b_L1GctInternHtMisss_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternJetDatas_gctDigis__L1.present", &L1GctInternJetDatas_gctDigis__L1_present, &b_L1GctInternJetDatas_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternJetDatas_gctDigis__L1.obj", &L1GctInternJetDatas_gctDigis__L1_obj, &b_L1GctInternJetDatas_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctInternJetDatas_simGctDigis__L1.present", &L1GctInternJetDatas_simGctDigis__L1_present, &b_L1GctInternJetDatas_simGctDigis__L1_present);
   fChain->SetBranchAddress("L1GctInternJetDatas_simGctDigis__L1.obj", &L1GctInternJetDatas_simGctDigis__L1_obj, &b_L1GctInternJetDatas_simGctDigis__L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_cenJets_L1.present", &L1GctJetCands_gctDigis_cenJets_L1_present, &b_L1GctJetCands_gctDigis_cenJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_cenJets_L1.obj", &L1GctJetCands_gctDigis_cenJets_L1_obj, &b_L1GctJetCands_gctDigis_cenJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_cenJets_L1.present", &L1GctJetCands_simGctDigis_cenJets_L1_present, &b_L1GctJetCands_simGctDigis_cenJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_cenJets_L1.obj", &L1GctJetCands_simGctDigis_cenJets_L1_obj, &b_L1GctJetCands_simGctDigis_cenJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_forJets_L1.present", &L1GctJetCands_gctDigis_forJets_L1_present, &b_L1GctJetCands_gctDigis_forJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_forJets_L1.obj", &L1GctJetCands_gctDigis_forJets_L1_obj, &b_L1GctJetCands_gctDigis_forJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_forJets_L1.present", &L1GctJetCands_simGctDigis_forJets_L1_present, &b_L1GctJetCands_simGctDigis_forJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_forJets_L1.obj", &L1GctJetCands_simGctDigis_forJets_L1_obj, &b_L1GctJetCands_simGctDigis_forJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_tauJets_L1.present", &L1GctJetCands_gctDigis_tauJets_L1_present, &b_L1GctJetCands_gctDigis_tauJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_gctDigis_tauJets_L1.obj", &L1GctJetCands_gctDigis_tauJets_L1_obj, &b_L1GctJetCands_gctDigis_tauJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_tauJets_L1.present", &L1GctJetCands_simGctDigis_tauJets_L1_present, &b_L1GctJetCands_simGctDigis_tauJets_L1_present);
   fChain->SetBranchAddress("L1GctJetCands_simGctDigis_tauJets_L1.obj", &L1GctJetCands_simGctDigis_tauJets_L1_obj, &b_L1GctJetCands_simGctDigis_tauJets_L1_obj);
   fChain->SetBranchAddress("L1GctJetCountss_gctDigis__L1.present", &L1GctJetCountss_gctDigis__L1_present, &b_L1GctJetCountss_gctDigis__L1_present);
   fChain->SetBranchAddress("L1GctJetCountss_gctDigis__L1.obj", &L1GctJetCountss_gctDigis__L1_obj, &b_L1GctJetCountss_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1MuGMTCands_gtDigis__L1.present", &L1MuGMTCands_gtDigis__L1_present, &b_L1MuGMTCands_gtDigis__L1_present);
   fChain->SetBranchAddress("L1MuGMTCands_gtDigis__L1.obj", &L1MuGMTCands_gtDigis__L1_obj, &b_L1MuGMTCands_gtDigis__L1_obj);
   fChain->SetBranchAddress("L1MuGMTCands_simGmtDigis__L1.present", &L1MuGMTCands_simGmtDigis__L1_present, &b_L1MuGMTCands_simGmtDigis__L1_present);
   fChain->SetBranchAddress("L1MuGMTCands_simGmtDigis__L1.obj", &L1MuGMTCands_simGmtDigis__L1_obj, &b_L1MuGMTCands_simGmtDigis__L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_CSC_L1.present", &L1MuRegionalCands_gtDigis_CSC_L1_present, &b_L1MuRegionalCands_gtDigis_CSC_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_CSC_L1.obj", &L1MuRegionalCands_gtDigis_CSC_L1_obj, &b_L1MuRegionalCands_gtDigis_CSC_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_simCsctfDigis_CSC_L1.present", &L1MuRegionalCands_simCsctfDigis_CSC_L1_present, &b_L1MuRegionalCands_simCsctfDigis_CSC_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_simCsctfDigis_CSC_L1.obj", &L1MuRegionalCands_simCsctfDigis_CSC_L1_obj, &b_L1MuRegionalCands_simCsctfDigis_CSC_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_DT_L1.present", &L1MuRegionalCands_gtDigis_DT_L1_present, &b_L1MuRegionalCands_gtDigis_DT_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_DT_L1.obj", &L1MuRegionalCands_gtDigis_DT_L1_obj, &b_L1MuRegionalCands_gtDigis_DT_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_simDttfDigis_DT_L1.present", &L1MuRegionalCands_simDttfDigis_DT_L1_present, &b_L1MuRegionalCands_simDttfDigis_DT_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_simDttfDigis_DT_L1.obj", &L1MuRegionalCands_simDttfDigis_DT_L1_obj, &b_L1MuRegionalCands_simDttfDigis_DT_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_RPCb_L1.present", &L1MuRegionalCands_gtDigis_RPCb_L1_present, &b_L1MuRegionalCands_gtDigis_RPCb_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_RPCb_L1.obj", &L1MuRegionalCands_gtDigis_RPCb_L1_obj, &b_L1MuRegionalCands_gtDigis_RPCb_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1.present", &L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_present, &b_L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1.obj", &L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_obj, &b_L1MuRegionalCands_simRpcTriggerDigis_RPCb_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_RPCf_L1.present", &L1MuRegionalCands_gtDigis_RPCf_L1_present, &b_L1MuRegionalCands_gtDigis_RPCf_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_gtDigis_RPCf_L1.obj", &L1MuRegionalCands_gtDigis_RPCf_L1_obj, &b_L1MuRegionalCands_gtDigis_RPCf_L1_obj);
   fChain->SetBranchAddress("L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1.present", &L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_present, &b_L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_present);
   fChain->SetBranchAddress("L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1.obj", &L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_obj, &b_L1MuRegionalCands_simRpcTriggerDigis_RPCf_L1_obj);
   fChain->SetBranchAddress("L1TriggerErrors_gctDigis__L1.present", &L1TriggerErrors_gctDigis__L1_present, &b_L1TriggerErrors_gctDigis__L1_present);
   fChain->SetBranchAddress("L1TriggerErrors_gctDigis__L1.obj", &L1TriggerErrors_gctDigis__L1_obj, &b_L1TriggerErrors_gctDigis__L1_obj);
   fChain->SetBranchAddress("L1TriggerScalerss_scalersRawToDigi__L1.present", &L1TriggerScalerss_scalersRawToDigi__L1_present, &b_L1TriggerScalerss_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("L1TriggerScalerss_scalersRawToDigi__L1.obj", &L1TriggerScalerss_scalersRawToDigi__L1_obj, &b_L1TriggerScalerss_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("Level1TriggerScalerss_scalersRawToDigi__L1.present", &Level1TriggerScalerss_scalersRawToDigi__L1_present, &b_Level1TriggerScalerss_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("Level1TriggerScalerss_scalersRawToDigi__L1.obj", &Level1TriggerScalerss_scalersRawToDigi__L1_obj, &b_Level1TriggerScalerss_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("LumiScalerss_scalersRawToDigi__L1.present", &LumiScalerss_scalersRawToDigi__L1_present, &b_LumiScalerss_scalersRawToDigi__L1_present);
   fChain->SetBranchAddress("LumiScalerss_scalersRawToDigi__L1.obj", &LumiScalerss_scalersRawToDigi__L1_obj, &b_LumiScalerss_scalersRawToDigi__L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CaloHitsTk_L1.present", &PCaloHits_g4SimHits_CaloHitsTk_L1_present, &b_PCaloHits_g4SimHits_CaloHitsTk_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CaloHitsTk_L1.obj", &PCaloHits_g4SimHits_CaloHitsTk_L1_obj, &b_PCaloHits_g4SimHits_CaloHitsTk_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorBU_L1.present", &PCaloHits_g4SimHits_CastorBU_L1_present, &b_PCaloHits_g4SimHits_CastorBU_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorBU_L1.obj", &PCaloHits_g4SimHits_CastorBU_L1_obj, &b_PCaloHits_g4SimHits_CastorBU_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorFI_L1.present", &PCaloHits_g4SimHits_CastorFI_L1_present, &b_PCaloHits_g4SimHits_CastorFI_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorFI_L1.obj", &PCaloHits_g4SimHits_CastorFI_L1_obj, &b_PCaloHits_g4SimHits_CastorFI_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorPL_L1.present", &PCaloHits_g4SimHits_CastorPL_L1_present, &b_PCaloHits_g4SimHits_CastorPL_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorPL_L1.obj", &PCaloHits_g4SimHits_CastorPL_L1_obj, &b_PCaloHits_g4SimHits_CastorPL_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorTU_L1.present", &PCaloHits_g4SimHits_CastorTU_L1_present, &b_PCaloHits_g4SimHits_CastorTU_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_CastorTU_L1.obj", &PCaloHits_g4SimHits_CastorTU_L1_obj, &b_PCaloHits_g4SimHits_CastorTU_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_ChamberHits_L1.present", &PCaloHits_g4SimHits_ChamberHits_L1_present, &b_PCaloHits_g4SimHits_ChamberHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_ChamberHits_L1.obj", &PCaloHits_g4SimHits_ChamberHits_L1_obj, &b_PCaloHits_g4SimHits_ChamberHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsEB_L1.present", &PCaloHits_g4SimHits_EcalHitsEB_L1_present, &b_PCaloHits_g4SimHits_EcalHitsEB_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsEB_L1.obj", &PCaloHits_g4SimHits_EcalHitsEB_L1_obj, &b_PCaloHits_g4SimHits_EcalHitsEB_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsEE_L1.present", &PCaloHits_g4SimHits_EcalHitsEE_L1_present, &b_PCaloHits_g4SimHits_EcalHitsEE_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsEE_L1.obj", &PCaloHits_g4SimHits_EcalHitsEE_L1_obj, &b_PCaloHits_g4SimHits_EcalHitsEE_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsES_L1.present", &PCaloHits_g4SimHits_EcalHitsES_L1_present, &b_PCaloHits_g4SimHits_EcalHitsES_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalHitsES_L1.obj", &PCaloHits_g4SimHits_EcalHitsES_L1_obj, &b_PCaloHits_g4SimHits_EcalHitsES_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalTBH4BeamHits_L1.present", &PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_present, &b_PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_EcalTBH4BeamHits_L1.obj", &PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_obj, &b_PCaloHits_g4SimHits_EcalTBH4BeamHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_FibreHits_L1.present", &PCaloHits_g4SimHits_FibreHits_L1_present, &b_PCaloHits_g4SimHits_FibreHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_FibreHits_L1.obj", &PCaloHits_g4SimHits_FibreHits_L1_obj, &b_PCaloHits_g4SimHits_FibreHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_HcalHits_L1.present", &PCaloHits_g4SimHits_HcalHits_L1_present, &b_PCaloHits_g4SimHits_HcalHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_HcalHits_L1.obj", &PCaloHits_g4SimHits_HcalHits_L1_obj, &b_PCaloHits_g4SimHits_HcalHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_HcalTB06BeamHits_L1.present", &PCaloHits_g4SimHits_HcalTB06BeamHits_L1_present, &b_PCaloHits_g4SimHits_HcalTB06BeamHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_HcalTB06BeamHits_L1.obj", &PCaloHits_g4SimHits_HcalTB06BeamHits_L1_obj, &b_PCaloHits_g4SimHits_HcalTB06BeamHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_WedgeHits_L1.present", &PCaloHits_g4SimHits_WedgeHits_L1_present, &b_PCaloHits_g4SimHits_WedgeHits_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_WedgeHits_L1.obj", &PCaloHits_g4SimHits_WedgeHits_L1_obj, &b_PCaloHits_g4SimHits_WedgeHits_L1_obj);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_ZDCHITS_L1.present", &PCaloHits_g4SimHits_ZDCHITS_L1_present, &b_PCaloHits_g4SimHits_ZDCHITS_L1_present);
   fChain->SetBranchAddress("PCaloHits_g4SimHits_ZDCHITS_L1.obj", &PCaloHits_g4SimHits_ZDCHITS_L1_obj, &b_PCaloHits_g4SimHits_ZDCHITS_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_BSCHits_L1.present", &PSimHits_g4SimHits_BSCHits_L1_present, &b_PSimHits_g4SimHits_BSCHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_BSCHits_L1.obj", &PSimHits_g4SimHits_BSCHits_L1_obj, &b_PSimHits_g4SimHits_BSCHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_FP420SI_L1.present", &PSimHits_g4SimHits_FP420SI_L1_present, &b_PSimHits_g4SimHits_FP420SI_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_FP420SI_L1.obj", &PSimHits_g4SimHits_FP420SI_L1_obj, &b_PSimHits_g4SimHits_FP420SI_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonCSCHits_L1.present", &PSimHits_g4SimHits_MuonCSCHits_L1_present, &b_PSimHits_g4SimHits_MuonCSCHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonCSCHits_L1.obj", &PSimHits_g4SimHits_MuonCSCHits_L1_obj, &b_PSimHits_g4SimHits_MuonCSCHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonDTHits_L1.present", &PSimHits_g4SimHits_MuonDTHits_L1_present, &b_PSimHits_g4SimHits_MuonDTHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonDTHits_L1.obj", &PSimHits_g4SimHits_MuonDTHits_L1_obj, &b_PSimHits_g4SimHits_MuonDTHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonGEMHits_L1.present", &PSimHits_g4SimHits_MuonGEMHits_L1_present, &b_PSimHits_g4SimHits_MuonGEMHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonGEMHits_L1.obj", &PSimHits_g4SimHits_MuonGEMHits_L1_obj, &b_PSimHits_g4SimHits_MuonGEMHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonRPCHits_L1.present", &PSimHits_g4SimHits_MuonRPCHits_L1_present, &b_PSimHits_g4SimHits_MuonRPCHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_MuonRPCHits_L1.obj", &PSimHits_g4SimHits_MuonRPCHits_L1_obj, &b_PSimHits_g4SimHits_MuonRPCHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_PLTHits_L1.present", &PSimHits_g4SimHits_PLTHits_L1_present, &b_PSimHits_g4SimHits_PLTHits_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_PLTHits_L1.obj", &PSimHits_g4SimHits_PLTHits_L1_obj, &b_PSimHits_g4SimHits_PLTHits_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsRP_L1.present", &PSimHits_g4SimHits_TotemHitsRP_L1_present, &b_PSimHits_g4SimHits_TotemHitsRP_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsRP_L1.obj", &PSimHits_g4SimHits_TotemHitsRP_L1_obj, &b_PSimHits_g4SimHits_TotemHitsRP_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsT1_L1.present", &PSimHits_g4SimHits_TotemHitsT1_L1_present, &b_PSimHits_g4SimHits_TotemHitsT1_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsT1_L1.obj", &PSimHits_g4SimHits_TotemHitsT1_L1_obj, &b_PSimHits_g4SimHits_TotemHitsT1_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsT2Gem_L1.present", &PSimHits_g4SimHits_TotemHitsT2Gem_L1_present, &b_PSimHits_g4SimHits_TotemHitsT2Gem_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TotemHitsT2Gem_L1.obj", &PSimHits_g4SimHits_TotemHitsT2Gem_L1_obj, &b_PSimHits_g4SimHits_TotemHitsT2Gem_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsPixelBarrelHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsPixelBarrelLowTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsPixelEndcapHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsPixelEndcapLowTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTECHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTECHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTECHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTECLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTECLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTECLowTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTIBHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTIBLowTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTIDHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTIDLowTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTOBHighTof_L1_obj);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1.present", &PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_present, &b_PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_present);
   fChain->SetBranchAddress("PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1.obj", &PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_obj, &b_PSimHits_g4SimHits_TrackerHitsTOBLowTof_L1_obj);
   fChain->SetBranchAddress("PileupSummaryInfos_addPileupInfo__L1.present", &PileupSummaryInfos_addPileupInfo__L1_present, &b_PileupSummaryInfos_addPileupInfo__L1_present);
   fChain->SetBranchAddress("PileupSummaryInfos_addPileupInfo__L1.obj", &PileupSummaryInfos_addPileupInfo__L1_obj, &b_PileupSummaryInfos_addPileupInfo__L1_obj);
   fChain->SetBranchAddress("RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1.present", &RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_present, &b_RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_present);
   fChain->SetBranchAddress("RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1.obj", &RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_obj, &b_RPCDigiL1Links_simRpcTriggerDigis_RPCb_L1_obj);
   fChain->SetBranchAddress("RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1.present", &RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_present, &b_RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_present);
   fChain->SetBranchAddress("RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1.obj", &RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_obj, &b_RPCDigiL1Links_simRpcTriggerDigis_RPCf_L1_obj);
   fChain->SetBranchAddress("SimTracks_g4SimHits__L1.present", &SimTracks_g4SimHits__L1_present, &b_SimTracks_g4SimHits__L1_present);
   fChain->SetBranchAddress("SimTracks_g4SimHits__L1.obj", &SimTracks_g4SimHits__L1_obj, &b_SimTracks_g4SimHits__L1_obj);
   fChain->SetBranchAddress("SimVertexs_g4SimHits__L1.present", &SimVertexs_g4SimHits__L1_present, &b_SimVertexs_g4SimHits__L1_present);
   fChain->SetBranchAddress("SimVertexs_g4SimHits__L1.obj", &SimVertexs_g4SimHits__L1_obj, &b_SimVertexs_g4SimHits__L1_obj);
   fChain->SetBranchAddress("TrajectorySeeds_CosmicMuonSeed__L1.present", &TrajectorySeeds_CosmicMuonSeed__L1_present, &b_TrajectorySeeds_CosmicMuonSeed__L1_present);
   fChain->SetBranchAddress("TrajectorySeeds_CosmicMuonSeed__L1.obj", &TrajectorySeeds_CosmicMuonSeed__L1_obj, &b_TrajectorySeeds_CosmicMuonSeed__L1_obj);
   fChain->SetBranchAddress("TrajectorySeeds_SETMuonSeed__L1.present", &TrajectorySeeds_SETMuonSeed__L1_present, &b_TrajectorySeeds_SETMuonSeed__L1_present);
   fChain->SetBranchAddress("TrajectorySeeds_SETMuonSeed__L1.obj", &TrajectorySeeds_SETMuonSeed__L1_obj, &b_TrajectorySeeds_SETMuonSeed__L1_obj);
   fChain->SetBranchAddress("TrajectorySeeds_ancientMuonSeed__L1.present", &TrajectorySeeds_ancientMuonSeed__L1_present, &b_TrajectorySeeds_ancientMuonSeed__L1_present);
   fChain->SetBranchAddress("TrajectorySeeds_ancientMuonSeed__L1.obj", &TrajectorySeeds_ancientMuonSeed__L1_obj, &b_TrajectorySeeds_ancientMuonSeed__L1_obj);
   fChain->SetBranchAddress("doubles_ak4CaloJets_rhos_L1.present", &doubles_ak4CaloJets_rhos_L1_present, &b_doubles_ak4CaloJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak4CaloJets_rhos_L1.obj", &doubles_ak4CaloJets_rhos_L1_obj, &b_doubles_ak4CaloJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak4GenJets_rhos_L1.present", &doubles_ak4GenJets_rhos_L1_present, &b_doubles_ak4GenJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak4GenJets_rhos_L1.obj", &doubles_ak4GenJets_rhos_L1_obj, &b_doubles_ak4GenJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak4PFJetsCHS_rhos_L1.present", &doubles_ak4PFJetsCHS_rhos_L1_present, &b_doubles_ak4PFJetsCHS_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak4PFJetsCHS_rhos_L1.obj", &doubles_ak4PFJetsCHS_rhos_L1_obj, &b_doubles_ak4PFJetsCHS_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak5CaloJets_rhos_L1.present", &doubles_ak5CaloJets_rhos_L1_present, &b_doubles_ak5CaloJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak5CaloJets_rhos_L1.obj", &doubles_ak5CaloJets_rhos_L1_obj, &b_doubles_ak5CaloJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak5GenJets_rhos_L1.present", &doubles_ak5GenJets_rhos_L1_present, &b_doubles_ak5GenJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak5GenJets_rhos_L1.obj", &doubles_ak5GenJets_rhos_L1_obj, &b_doubles_ak5GenJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak5PFJets_rhos_L1.present", &doubles_ak5PFJets_rhos_L1_present, &b_doubles_ak5PFJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak5PFJets_rhos_L1.obj", &doubles_ak5PFJets_rhos_L1_obj, &b_doubles_ak5PFJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak5PFJetsCHS_rhos_L1.present", &doubles_ak5PFJetsCHS_rhos_L1_present, &b_doubles_ak5PFJetsCHS_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak5PFJetsCHS_rhos_L1.obj", &doubles_ak5PFJetsCHS_rhos_L1_obj, &b_doubles_ak5PFJetsCHS_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak5TrackJets_rhos_L1.present", &doubles_ak5TrackJets_rhos_L1_present, &b_doubles_ak5TrackJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak5TrackJets_rhos_L1.obj", &doubles_ak5TrackJets_rhos_L1_obj, &b_doubles_ak5TrackJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak7BasicJets_rhos_L1.present", &doubles_ak7BasicJets_rhos_L1_present, &b_doubles_ak7BasicJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak7BasicJets_rhos_L1.obj", &doubles_ak7BasicJets_rhos_L1_obj, &b_doubles_ak7BasicJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak8PFJets_rhos_L1.present", &doubles_ak8PFJets_rhos_L1_present, &b_doubles_ak8PFJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak8PFJets_rhos_L1.obj", &doubles_ak8PFJets_rhos_L1_obj, &b_doubles_ak8PFJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak8PFJetsCHS_rhos_L1.present", &doubles_ak8PFJetsCHS_rhos_L1_present, &b_doubles_ak8PFJetsCHS_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ak8PFJetsCHS_rhos_L1.obj", &doubles_ak8PFJetsCHS_rhos_L1_obj, &b_doubles_ak8PFJetsCHS_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHS_rhos_L1.present", &doubles_ca8PFJetsCHS_rhos_L1_present, &b_doubles_ca8PFJetsCHS_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHS_rhos_L1.obj", &doubles_ca8PFJetsCHS_rhos_L1_obj, &b_doubles_ca8PFJetsCHS_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHSPruned_rhos_L1.present", &doubles_ca8PFJetsCHSPruned_rhos_L1_present, &b_doubles_ca8PFJetsCHSPruned_rhos_L1_present);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHSPruned_rhos_L1.obj", &doubles_ca8PFJetsCHSPruned_rhos_L1_obj, &b_doubles_ca8PFJetsCHSPruned_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_cmsTopTagPFJetsCHS_rhos_L1.present", &doubles_cmsTopTagPFJetsCHS_rhos_L1_present, &b_doubles_cmsTopTagPFJetsCHS_rhos_L1_present);
   fChain->SetBranchAddress("doubles_cmsTopTagPFJetsCHS_rhos_L1.obj", &doubles_cmsTopTagPFJetsCHS_rhos_L1_obj, &b_doubles_cmsTopTagPFJetsCHS_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_iterativeCone5GenJets_rhos_L1.present", &doubles_iterativeCone5GenJets_rhos_L1_present, &b_doubles_iterativeCone5GenJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_iterativeCone5GenJets_rhos_L1.obj", &doubles_iterativeCone5GenJets_rhos_L1_obj, &b_doubles_iterativeCone5GenJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_kt4GenJets_rhos_L1.present", &doubles_kt4GenJets_rhos_L1_present, &b_doubles_kt4GenJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_kt4GenJets_rhos_L1.obj", &doubles_kt4GenJets_rhos_L1_obj, &b_doubles_kt4GenJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_kt6GenJets_rhos_L1.present", &doubles_kt6GenJets_rhos_L1_present, &b_doubles_kt6GenJets_rhos_L1_present);
   fChain->SetBranchAddress("doubles_kt6GenJets_rhos_L1.obj", &doubles_kt6GenJets_rhos_L1_obj, &b_doubles_kt6GenJets_rhos_L1_obj);
   fChain->SetBranchAddress("doubles_ak4CaloJets_sigmas_L1.present", &doubles_ak4CaloJets_sigmas_L1_present, &b_doubles_ak4CaloJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak4CaloJets_sigmas_L1.obj", &doubles_ak4CaloJets_sigmas_L1_obj, &b_doubles_ak4CaloJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak4GenJets_sigmas_L1.present", &doubles_ak4GenJets_sigmas_L1_present, &b_doubles_ak4GenJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak4GenJets_sigmas_L1.obj", &doubles_ak4GenJets_sigmas_L1_obj, &b_doubles_ak4GenJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak4PFJetsCHS_sigmas_L1.present", &doubles_ak4PFJetsCHS_sigmas_L1_present, &b_doubles_ak4PFJetsCHS_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak4PFJetsCHS_sigmas_L1.obj", &doubles_ak4PFJetsCHS_sigmas_L1_obj, &b_doubles_ak4PFJetsCHS_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak5CaloJets_sigmas_L1.present", &doubles_ak5CaloJets_sigmas_L1_present, &b_doubles_ak5CaloJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak5CaloJets_sigmas_L1.obj", &doubles_ak5CaloJets_sigmas_L1_obj, &b_doubles_ak5CaloJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak5GenJets_sigmas_L1.present", &doubles_ak5GenJets_sigmas_L1_present, &b_doubles_ak5GenJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak5GenJets_sigmas_L1.obj", &doubles_ak5GenJets_sigmas_L1_obj, &b_doubles_ak5GenJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak5PFJets_sigmas_L1.present", &doubles_ak5PFJets_sigmas_L1_present, &b_doubles_ak5PFJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak5PFJets_sigmas_L1.obj", &doubles_ak5PFJets_sigmas_L1_obj, &b_doubles_ak5PFJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak5PFJetsCHS_sigmas_L1.present", &doubles_ak5PFJetsCHS_sigmas_L1_present, &b_doubles_ak5PFJetsCHS_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak5PFJetsCHS_sigmas_L1.obj", &doubles_ak5PFJetsCHS_sigmas_L1_obj, &b_doubles_ak5PFJetsCHS_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak5TrackJets_sigmas_L1.present", &doubles_ak5TrackJets_sigmas_L1_present, &b_doubles_ak5TrackJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak5TrackJets_sigmas_L1.obj", &doubles_ak5TrackJets_sigmas_L1_obj, &b_doubles_ak5TrackJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak7BasicJets_sigmas_L1.present", &doubles_ak7BasicJets_sigmas_L1_present, &b_doubles_ak7BasicJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak7BasicJets_sigmas_L1.obj", &doubles_ak7BasicJets_sigmas_L1_obj, &b_doubles_ak7BasicJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak8PFJets_sigmas_L1.present", &doubles_ak8PFJets_sigmas_L1_present, &b_doubles_ak8PFJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak8PFJets_sigmas_L1.obj", &doubles_ak8PFJets_sigmas_L1_obj, &b_doubles_ak8PFJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ak8PFJetsCHS_sigmas_L1.present", &doubles_ak8PFJetsCHS_sigmas_L1_present, &b_doubles_ak8PFJetsCHS_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ak8PFJetsCHS_sigmas_L1.obj", &doubles_ak8PFJetsCHS_sigmas_L1_obj, &b_doubles_ak8PFJetsCHS_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHS_sigmas_L1.present", &doubles_ca8PFJetsCHS_sigmas_L1_present, &b_doubles_ca8PFJetsCHS_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHS_sigmas_L1.obj", &doubles_ca8PFJetsCHS_sigmas_L1_obj, &b_doubles_ca8PFJetsCHS_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHSPruned_sigmas_L1.present", &doubles_ca8PFJetsCHSPruned_sigmas_L1_present, &b_doubles_ca8PFJetsCHSPruned_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_ca8PFJetsCHSPruned_sigmas_L1.obj", &doubles_ca8PFJetsCHSPruned_sigmas_L1_obj, &b_doubles_ca8PFJetsCHSPruned_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_cmsTopTagPFJetsCHS_sigmas_L1.present", &doubles_cmsTopTagPFJetsCHS_sigmas_L1_present, &b_doubles_cmsTopTagPFJetsCHS_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_cmsTopTagPFJetsCHS_sigmas_L1.obj", &doubles_cmsTopTagPFJetsCHS_sigmas_L1_obj, &b_doubles_cmsTopTagPFJetsCHS_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_iterativeCone5GenJets_sigmas_L1.present", &doubles_iterativeCone5GenJets_sigmas_L1_present, &b_doubles_iterativeCone5GenJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_iterativeCone5GenJets_sigmas_L1.obj", &doubles_iterativeCone5GenJets_sigmas_L1_obj, &b_doubles_iterativeCone5GenJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_kt4GenJets_sigmas_L1.present", &doubles_kt4GenJets_sigmas_L1_present, &b_doubles_kt4GenJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_kt4GenJets_sigmas_L1.obj", &doubles_kt4GenJets_sigmas_L1_obj, &b_doubles_kt4GenJets_sigmas_L1_obj);
   fChain->SetBranchAddress("doubles_kt6GenJets_sigmas_L1.present", &doubles_kt6GenJets_sigmas_L1_present, &b_doubles_kt6GenJets_sigmas_L1_present);
   fChain->SetBranchAddress("doubles_kt6GenJets_sigmas_L1.obj", &doubles_kt6GenJets_sigmas_L1_obj, &b_doubles_kt6GenJets_sigmas_L1_obj);
   fChain->SetBranchAddress("edmErrorSummaryEntrys_logErrorHarvester__L1.present", &edmErrorSummaryEntrys_logErrorHarvester__L1_present, &b_edmErrorSummaryEntrys_logErrorHarvester__L1_present);
   fChain->SetBranchAddress("edmErrorSummaryEntrys_logErrorHarvester__L1.obj", &edmErrorSummaryEntrys_logErrorHarvester__L1_obj, &b_edmErrorSummaryEntrys_logErrorHarvester__L1_obj);
   fChain->SetBranchAddress("recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1.present", &recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_present, &b_recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_present);
   fChain->SetBranchAddress("recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1.obj", &recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_obj, &b_recoPFCandidateedmFwdPtrs_particleFlowPtrs__L1_obj);
   fChain->SetBranchAddress("recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1.present", &recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_present, &b_recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_present);
   fChain->SetBranchAddress("recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1.obj", &recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_obj, &b_recoPFCandidateedmFwdPtrs_particleFlowTmpPtrs__L1_obj);
   fChain->SetBranchAddress("ints_genParticles__L1.present", &ints_genParticles__L1_present, &b_ints_genParticles__L1_present);
   fChain->SetBranchAddress("ints_genParticles__L1.obj", &ints_genParticles__L1_obj, &b_ints_genParticles__L1_obj);
   fChain->SetBranchAddress("recoBasicJets_ak7BasicJets__L1.present", &recoBasicJets_ak7BasicJets__L1_present, &b_recoBasicJets_ak7BasicJets__L1_present);
   fChain->SetBranchAddress("recoBasicJets_ak7BasicJets__L1.obj", &recoBasicJets_ak7BasicJets__L1_obj, &b_recoBasicJets_ak7BasicJets__L1_obj);
   fChain->SetBranchAddress("recoBasicJets_ca8PFJetsCHSPruned__L1.present", &recoBasicJets_ca8PFJetsCHSPruned__L1_present, &b_recoBasicJets_ca8PFJetsCHSPruned__L1_present);
   fChain->SetBranchAddress("recoBasicJets_ca8PFJetsCHSPruned__L1.obj", &recoBasicJets_ca8PFJetsCHSPruned__L1_obj, &b_recoBasicJets_ca8PFJetsCHSPruned__L1_obj);
   fChain->SetBranchAddress("recoBasicJets_cmsTopTagPFJetsCHS__L1.present", &recoBasicJets_cmsTopTagPFJetsCHS__L1_present, &b_recoBasicJets_cmsTopTagPFJetsCHS__L1_present);
   fChain->SetBranchAddress("recoBasicJets_cmsTopTagPFJetsCHS__L1.obj", &recoBasicJets_cmsTopTagPFJetsCHS__L1_obj, &b_recoBasicJets_cmsTopTagPFJetsCHS__L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_hfEMClusters__L1.present", &recoCaloClusters_hfEMClusters__L1_present, &b_recoCaloClusters_hfEMClusters__L1_present);
   fChain->SetBranchAddress("recoCaloClusters_hfEMClusters__L1.obj", &recoCaloClusters_hfEMClusters__L1_obj, &b_recoCaloClusters_hfEMClusters__L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowEGamma_EBEEClusters_L1.present", &recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_present, &b_recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowEGamma_EBEEClusters_L1.obj", &recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_obj, &b_recoCaloClusters_particleFlowEGamma_EBEEClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowEGamma_ESClusters_L1.present", &recoCaloClusters_particleFlowEGamma_ESClusters_L1_present, &b_recoCaloClusters_particleFlowEGamma_ESClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowEGamma_ESClusters_L1.obj", &recoCaloClusters_particleFlowEGamma_ESClusters_L1_obj, &b_recoCaloClusters_particleFlowEGamma_ESClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1.present", &recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_present, &b_recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1.obj", &recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_obj, &b_recoCaloClusters_hybridSuperClusters_hybridBarrelBasicClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1.present", &recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_present, &b_recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1.obj", &recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_obj, &b_recoCaloClusters_multi5x5SuperClusters_multi5x5EndcapBasicClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1.present", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_present, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1.obj", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_obj, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALBarrel_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1.present", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_present, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1.obj", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_obj, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALEndcap_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1.present", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_present, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1.obj", &recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_obj, &b_recoCaloClusters_particleFlowSuperClusterECAL_particleFlowBasicClusterECALPreshower_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1.present", &recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_present, &b_recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1.obj", &recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_obj, &b_recoCaloClusters_hybridSuperClusters_uncleanOnlyHybridBarrelBasicClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1.present", &recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_present, &b_recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_present);
   fChain->SetBranchAddress("recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1.obj", &recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_obj, &b_recoCaloClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapBasicClusters_L1_obj);
   fChain->SetBranchAddress("recoCaloJets_ak4CaloJets__L1.present", &recoCaloJets_ak4CaloJets__L1_present, &b_recoCaloJets_ak4CaloJets__L1_present);
   fChain->SetBranchAddress("recoCaloJets_ak4CaloJets__L1.obj", &recoCaloJets_ak4CaloJets__L1_obj, &b_recoCaloJets_ak4CaloJets__L1_obj);
   fChain->SetBranchAddress("recoCaloJets_ak5CaloJets__L1.present", &recoCaloJets_ak5CaloJets__L1_present, &b_recoCaloJets_ak5CaloJets__L1_present);
   fChain->SetBranchAddress("recoCaloJets_ak5CaloJets__L1.obj", &recoCaloJets_ak5CaloJets__L1_obj, &b_recoCaloJets_ak5CaloJets__L1_obj);
   fChain->SetBranchAddress("recoCaloMETs_corMetGlobalMuons__L1.present", &recoCaloMETs_corMetGlobalMuons__L1_present, &b_recoCaloMETs_corMetGlobalMuons__L1_present);
   fChain->SetBranchAddress("recoCaloMETs_corMetGlobalMuons__L1.obj", &recoCaloMETs_corMetGlobalMuons__L1_obj, &b_recoCaloMETs_corMetGlobalMuons__L1_obj);
   fChain->SetBranchAddress("recoCaloMETs_met__L1.present", &recoCaloMETs_met__L1_present, &b_recoCaloMETs_met__L1_present);
   fChain->SetBranchAddress("recoCaloMETs_met__L1.obj", &recoCaloMETs_met__L1_obj, &b_recoCaloMETs_met__L1_obj);
   fChain->SetBranchAddress("recoCaloMETs_metHO__L1.present", &recoCaloMETs_metHO__L1_present, &b_recoCaloMETs_metHO__L1_present);
   fChain->SetBranchAddress("recoCaloMETs_metHO__L1.obj", &recoCaloMETs_metHO__L1_obj, &b_recoCaloMETs_metHO__L1_obj);
   fChain->SetBranchAddress("recoCaloMETs_metNoHF__L1.present", &recoCaloMETs_metNoHF__L1_present, &b_recoCaloMETs_metNoHF__L1_present);
   fChain->SetBranchAddress("recoCaloMETs_metNoHF__L1.obj", &recoCaloMETs_metNoHF__L1_obj, &b_recoCaloMETs_metNoHF__L1_obj);
   fChain->SetBranchAddress("recoCaloMuons_calomuons__L1.present", &recoCaloMuons_calomuons__L1_present, &b_recoCaloMuons_calomuons__L1_present);
   fChain->SetBranchAddress("recoCaloMuons_calomuons__L1.obj", &recoCaloMuons_calomuons__L1_obj, &b_recoCaloMuons_calomuons__L1_obj);
   fChain->SetBranchAddress("recoCastorTowers_CastorTowerReco__L1.present", &recoCastorTowers_CastorTowerReco__L1_present, &b_recoCastorTowers_CastorTowerReco__L1_present);
   fChain->SetBranchAddress("recoCastorTowers_CastorTowerReco__L1.obj", &recoCastorTowers_CastorTowerReco__L1_obj, &b_recoCastorTowers_CastorTowerReco__L1_obj);
   fChain->SetBranchAddress("recoConversions_allConversions__L1.present", &recoConversions_allConversions__L1_present, &b_recoConversions_allConversions__L1_present);
   fChain->SetBranchAddress("recoConversions_allConversions__L1.obj", &recoConversions_allConversions__L1_obj, &b_recoConversions_allConversions__L1_obj);
   fChain->SetBranchAddress("recoConversions_conversions__L1.present", &recoConversions_conversions__L1_present, &b_recoConversions_conversions__L1_present);
   fChain->SetBranchAddress("recoConversions_conversions__L1.obj", &recoConversions_conversions__L1_obj, &b_recoConversions_conversions__L1_obj);
   fChain->SetBranchAddress("recoConversions_gedPhotonCore__L1.present", &recoConversions_gedPhotonCore__L1_present, &b_recoConversions_gedPhotonCore__L1_present);
   fChain->SetBranchAddress("recoConversions_gedPhotonCore__L1.obj", &recoConversions_gedPhotonCore__L1_obj, &b_recoConversions_gedPhotonCore__L1_obj);
   fChain->SetBranchAddress("recoConversions_uncleanedOnlyAllConversions__L1.present", &recoConversions_uncleanedOnlyAllConversions__L1_present, &b_recoConversions_uncleanedOnlyAllConversions__L1_present);
   fChain->SetBranchAddress("recoConversions_uncleanedOnlyAllConversions__L1.obj", &recoConversions_uncleanedOnlyAllConversions__L1_obj, &b_recoConversions_uncleanedOnlyAllConversions__L1_obj);
   fChain->SetBranchAddress("recoElectronSeeds_electronMergedSeeds__L1.present", &recoElectronSeeds_electronMergedSeeds__L1_present, &b_recoElectronSeeds_electronMergedSeeds__L1_present);
   fChain->SetBranchAddress("recoElectronSeeds_electronMergedSeeds__L1.obj", &recoElectronSeeds_electronMergedSeeds__L1_obj, &b_recoElectronSeeds_electronMergedSeeds__L1_obj);
   fChain->SetBranchAddress("recoGenJets_ak4GenJets__L1.present", &recoGenJets_ak4GenJets__L1_present, &b_recoGenJets_ak4GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_ak4GenJets__L1.obj", &recoGenJets_ak4GenJets__L1_obj, &b_recoGenJets_ak4GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenJets_ak5GenJets__L1.present", &recoGenJets_ak5GenJets__L1_present, &b_recoGenJets_ak5GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_ak5GenJets__L1.obj", &recoGenJets_ak5GenJets__L1_obj, &b_recoGenJets_ak5GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenJets_ak8GenJets__L1.present", &recoGenJets_ak8GenJets__L1_present, &b_recoGenJets_ak8GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_ak8GenJets__L1.obj", &recoGenJets_ak8GenJets__L1_obj, &b_recoGenJets_ak8GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenJets_iterativeCone5GenJets__L1.present", &recoGenJets_iterativeCone5GenJets__L1_present, &b_recoGenJets_iterativeCone5GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_iterativeCone5GenJets__L1.obj", &recoGenJets_iterativeCone5GenJets__L1_obj, &b_recoGenJets_iterativeCone5GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenJets_kt4GenJets__L1.present", &recoGenJets_kt4GenJets__L1_present, &b_recoGenJets_kt4GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_kt4GenJets__L1.obj", &recoGenJets_kt4GenJets__L1_obj, &b_recoGenJets_kt4GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenJets_kt6GenJets__L1.present", &recoGenJets_kt6GenJets__L1_present, &b_recoGenJets_kt6GenJets__L1_present);
   fChain->SetBranchAddress("recoGenJets_kt6GenJets__L1.obj", &recoGenJets_kt6GenJets__L1_obj, &b_recoGenJets_kt6GenJets__L1_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetCalo__L1.present", &recoGenMETs_genMetCalo__L1_present, &b_recoGenMETs_genMetCalo__L1_present);
   fChain->SetBranchAddress("recoGenMETs_genMetCalo__L1.obj", &recoGenMETs_genMetCalo__L1_obj, &b_recoGenMETs_genMetCalo__L1_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetCaloAndNonPrompt__L1.present", &recoGenMETs_genMetCaloAndNonPrompt__L1_present, &b_recoGenMETs_genMetCaloAndNonPrompt__L1_present);
   fChain->SetBranchAddress("recoGenMETs_genMetCaloAndNonPrompt__L1.obj", &recoGenMETs_genMetCaloAndNonPrompt__L1_obj, &b_recoGenMETs_genMetCaloAndNonPrompt__L1_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__L1.present", &recoGenMETs_genMetTrue__L1_present, &b_recoGenMETs_genMetTrue__L1_present);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__L1.obj", &recoGenMETs_genMetTrue__L1_obj, &b_recoGenMETs_genMetTrue__L1_obj);
   fChain->SetBranchAddress("recoGenParticles_genParticles__L1.present", &recoGenParticles_genParticles__L1_present, &b_recoGenParticles_genParticles__L1_present);
   fChain->SetBranchAddress("recoGenParticles_genParticles__L1.obj", &recoGenParticles_genParticles__L1_obj, &b_recoGenParticles_genParticles__L1_obj);
   fChain->SetBranchAddress("recoGsfElectrons_gedGsfElectrons__L1.present", &recoGsfElectrons_gedGsfElectrons__L1_present, &b_recoGsfElectrons_gedGsfElectrons__L1_present);
   fChain->SetBranchAddress("recoGsfElectrons_gedGsfElectrons__L1.obj", &recoGsfElectrons_gedGsfElectrons__L1_obj, &b_recoGsfElectrons_gedGsfElectrons__L1_obj);
   fChain->SetBranchAddress("recoGsfElectrons_uncleanedOnlyGsfElectrons__L1.present", &recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_present, &b_recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_present);
   fChain->SetBranchAddress("recoGsfElectrons_uncleanedOnlyGsfElectrons__L1.obj", &recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_obj, &b_recoGsfElectrons_uncleanedOnlyGsfElectrons__L1_obj);
   fChain->SetBranchAddress("recoGsfElectronCores_gedGsfElectronCores__L1.present", &recoGsfElectronCores_gedGsfElectronCores__L1_present, &b_recoGsfElectronCores_gedGsfElectronCores__L1_present);
   fChain->SetBranchAddress("recoGsfElectronCores_gedGsfElectronCores__L1.obj", &recoGsfElectronCores_gedGsfElectronCores__L1_obj, &b_recoGsfElectronCores_gedGsfElectronCores__L1_obj);
   fChain->SetBranchAddress("recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1.present", &recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_present, &b_recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_present);
   fChain->SetBranchAddress("recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1.obj", &recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_obj, &b_recoGsfElectronCores_uncleanedOnlyGsfElectronCores__L1_obj);
   fChain->SetBranchAddress("recoGsfTracks_electronGsfTracks__L1.present", &recoGsfTracks_electronGsfTracks__L1_present, &b_recoGsfTracks_electronGsfTracks__L1_present);
   fChain->SetBranchAddress("recoGsfTracks_electronGsfTracks__L1.obj", &recoGsfTracks_electronGsfTracks__L1_obj, &b_recoGsfTracks_electronGsfTracks__L1_obj);
   fChain->SetBranchAddress("recoGsfTrackExtras_electronGsfTracks__L1.present", &recoGsfTrackExtras_electronGsfTracks__L1_present, &b_recoGsfTrackExtras_electronGsfTracks__L1_present);
   fChain->SetBranchAddress("recoGsfTrackExtras_electronGsfTracks__L1.obj", &recoGsfTrackExtras_electronGsfTracks__L1_obj, &b_recoGsfTrackExtras_electronGsfTracks__L1_obj);
   fChain->SetBranchAddress("recoHFEMClusterShapes_hfEMClusters__L1.present", &recoHFEMClusterShapes_hfEMClusters__L1_present, &b_recoHFEMClusterShapes_hfEMClusters__L1_present);
   fChain->SetBranchAddress("recoHFEMClusterShapes_hfEMClusters__L1.obj", &recoHFEMClusterShapes_hfEMClusters__L1_obj, &b_recoHFEMClusterShapes_hfEMClusters__L1_obj);
   fChain->SetBranchAddress("recoHcalNoiseRBXs_hcalnoise__L1.present", &recoHcalNoiseRBXs_hcalnoise__L1_present, &b_recoHcalNoiseRBXs_hcalnoise__L1_present);
   fChain->SetBranchAddress("recoHcalNoiseRBXs_hcalnoise__L1.obj", &recoHcalNoiseRBXs_hcalnoise__L1_obj, &b_recoHcalNoiseRBXs_hcalnoise__L1_obj);
   fChain->SetBranchAddress("recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1.present", &recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_present, &b_recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_present);
   fChain->SetBranchAddress("recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1.obj", &recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_obj, &b_recoJPTJets_JetPlusTrackZSPCorJetAntiKt5__L1_obj);
   fChain->SetBranchAddress("recoMETs_tcMet__L1.present", &recoMETs_tcMet__L1_present, &b_recoMETs_tcMet__L1_present);
   fChain->SetBranchAddress("recoMETs_tcMet__L1.obj", &recoMETs_tcMet__L1_obj, &b_recoMETs_tcMet__L1_obj);
   fChain->SetBranchAddress("recoMETs_tcMetWithPFclusters__L1.present", &recoMETs_tcMetWithPFclusters__L1_present, &b_recoMETs_tcMetWithPFclusters__L1_present);
   fChain->SetBranchAddress("recoMETs_tcMetWithPFclusters__L1.obj", &recoMETs_tcMetWithPFclusters__L1_obj, &b_recoMETs_tcMetWithPFclusters__L1_obj);
   fChain->SetBranchAddress("recoMuons_muons__L1.present", &recoMuons_muons__L1_present, &b_recoMuons_muons__L1_present);
   fChain->SetBranchAddress("recoMuons_muons__L1.obj", &recoMuons_muons__L1_obj, &b_recoMuons_muons__L1_obj);
   fChain->SetBranchAddress("recoMuons_muonsFromCosmics__L1.present", &recoMuons_muonsFromCosmics__L1_present, &b_recoMuons_muonsFromCosmics__L1_present);
   fChain->SetBranchAddress("recoMuons_muonsFromCosmics__L1.obj", &recoMuons_muonsFromCosmics__L1_obj, &b_recoMuons_muonsFromCosmics__L1_obj);
   fChain->SetBranchAddress("recoMuons_muonsFromCosmics1Leg__L1.present", &recoMuons_muonsFromCosmics1Leg__L1_present, &b_recoMuons_muonsFromCosmics1Leg__L1_present);
   fChain->SetBranchAddress("recoMuons_muonsFromCosmics1Leg__L1.obj", &recoMuons_muonsFromCosmics1Leg__L1_obj, &b_recoMuons_muonsFromCosmics1Leg__L1_obj);
   fChain->SetBranchAddress("recoPFBlocks_particleFlowBlock__L1.present", &recoPFBlocks_particleFlowBlock__L1_present, &b_recoPFBlocks_particleFlowBlock__L1_present);
   fChain->SetBranchAddress("recoPFBlocks_particleFlowBlock__L1.obj", &recoPFBlocks_particleFlowBlock__L1_obj, &b_recoPFBlocks_particleFlowBlock__L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlow__L1.present", &recoPFCandidates_particleFlow__L1_present, &b_recoPFCandidates_particleFlow__L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlow__L1.obj", &recoPFCandidates_particleFlow__L1_obj, &b_recoPFCandidates_particleFlow__L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowEGamma__L1.present", &recoPFCandidates_particleFlowEGamma__L1_present, &b_recoPFCandidates_particleFlowEGamma__L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowEGamma__L1.obj", &recoPFCandidates_particleFlowEGamma__L1_obj, &b_recoPFCandidates_particleFlowEGamma__L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1.present", &recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_present, &b_recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1.obj", &recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_obj, &b_recoPFCandidates_particleFlowTmp_AddedMuonsAndHadrons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1.present", &recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedCosmicsMuons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1.present", &recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedFakeMuons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedHF_L1.present", &recoPFCandidates_particleFlowTmp_CleanedHF_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedHF_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedHF_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedHF_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedHF_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1.present", &recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughMuons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1.present", &recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedPunchThroughNeutralHadrons_L1_obj);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1.present", &recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_present, &b_recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_present);
   fChain->SetBranchAddress("recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1.obj", &recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_obj, &b_recoPFCandidates_particleFlowTmp_CleanedTrackerAndGlobalMuons_L1_obj);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterECAL__L1.present", &recoPFClusters_particleFlowClusterECAL__L1_present, &b_recoPFClusters_particleFlowClusterECAL__L1_present);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterECAL__L1.obj", &recoPFClusters_particleFlowClusterECAL__L1_obj, &b_recoPFClusters_particleFlowClusterECAL__L1_obj);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterHCAL__L1.present", &recoPFClusters_particleFlowClusterHCAL__L1_present, &b_recoPFClusters_particleFlowClusterHCAL__L1_present);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterHCAL__L1.obj", &recoPFClusters_particleFlowClusterHCAL__L1_obj, &b_recoPFClusters_particleFlowClusterHCAL__L1_obj);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterHO__L1.present", &recoPFClusters_particleFlowClusterHO__L1_present, &b_recoPFClusters_particleFlowClusterHO__L1_present);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterHO__L1.obj", &recoPFClusters_particleFlowClusterHO__L1_obj, &b_recoPFClusters_particleFlowClusterHO__L1_obj);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterPS__L1.present", &recoPFClusters_particleFlowClusterPS__L1_present, &b_recoPFClusters_particleFlowClusterPS__L1_present);
   fChain->SetBranchAddress("recoPFClusters_particleFlowClusterPS__L1.obj", &recoPFClusters_particleFlowClusterPS__L1_obj, &b_recoPFClusters_particleFlowClusterPS__L1_obj);
   fChain->SetBranchAddress("recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1.present", &recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_present, &b_recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_present);
   fChain->SetBranchAddress("recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1.obj", &recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_obj, &b_recoPFDisplacedVertexs_particleFlowDisplacedVertex__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ak4PFJetsCHS__L1.present", &recoPFJets_ak4PFJetsCHS__L1_present, &b_recoPFJets_ak4PFJetsCHS__L1_present);
   fChain->SetBranchAddress("recoPFJets_ak4PFJetsCHS__L1.obj", &recoPFJets_ak4PFJetsCHS__L1_obj, &b_recoPFJets_ak4PFJetsCHS__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ak5PFJets__L1.present", &recoPFJets_ak5PFJets__L1_present, &b_recoPFJets_ak5PFJets__L1_present);
   fChain->SetBranchAddress("recoPFJets_ak5PFJets__L1.obj", &recoPFJets_ak5PFJets__L1_obj, &b_recoPFJets_ak5PFJets__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ak5PFJetsCHS__L1.present", &recoPFJets_ak5PFJetsCHS__L1_present, &b_recoPFJets_ak5PFJetsCHS__L1_present);
   fChain->SetBranchAddress("recoPFJets_ak5PFJetsCHS__L1.obj", &recoPFJets_ak5PFJetsCHS__L1_obj, &b_recoPFJets_ak5PFJetsCHS__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ak8PFJets__L1.present", &recoPFJets_ak8PFJets__L1_present, &b_recoPFJets_ak8PFJets__L1_present);
   fChain->SetBranchAddress("recoPFJets_ak8PFJets__L1.obj", &recoPFJets_ak8PFJets__L1_obj, &b_recoPFJets_ak8PFJets__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ak8PFJetsCHS__L1.present", &recoPFJets_ak8PFJetsCHS__L1_present, &b_recoPFJets_ak8PFJetsCHS__L1_present);
   fChain->SetBranchAddress("recoPFJets_ak8PFJetsCHS__L1.obj", &recoPFJets_ak8PFJetsCHS__L1_obj, &b_recoPFJets_ak8PFJetsCHS__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ca8PFJetsCHS__L1.present", &recoPFJets_ca8PFJetsCHS__L1_present, &b_recoPFJets_ca8PFJetsCHS__L1_present);
   fChain->SetBranchAddress("recoPFJets_ca8PFJetsCHS__L1.obj", &recoPFJets_ca8PFJetsCHS__L1_obj, &b_recoPFJets_ca8PFJetsCHS__L1_obj);
   fChain->SetBranchAddress("recoPFJets_ca8PFJetsCHSPruned_SubJets_L1.present", &recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_present, &b_recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_present);
   fChain->SetBranchAddress("recoPFJets_ca8PFJetsCHSPruned_SubJets_L1.obj", &recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_obj, &b_recoPFJets_ca8PFJetsCHSPruned_SubJets_L1_obj);
   fChain->SetBranchAddress("recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1.present", &recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_present, &b_recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_present);
   fChain->SetBranchAddress("recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1.obj", &recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_obj, &b_recoPFJets_cmsTopTagPFJetsCHS_caTopSubJets_L1_obj);
   fChain->SetBranchAddress("recoPFMETs_pfMet__L1.present", &recoPFMETs_pfMet__L1_present, &b_recoPFMETs_pfMet__L1_present);
   fChain->SetBranchAddress("recoPFMETs_pfMet__L1.obj", &recoPFMETs_pfMet__L1_obj, &b_recoPFMETs_pfMet__L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterECAL_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterECAL_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterECAL_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterHCAL_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterHFEM_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterHFHAD_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHO_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterHO_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterHO_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterHO_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterHO_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterHO_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterPS_Cleaned_L1.present", &recoPFRecHits_particleFlowClusterPS_Cleaned_L1_present, &b_recoPFRecHits_particleFlowClusterPS_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowClusterPS_Cleaned_L1.obj", &recoPFRecHits_particleFlowClusterPS_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowClusterPS_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1.present", &recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_present, &b_recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1.obj", &recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowRecHitECAL_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1.present", &recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_present, &b_recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1.obj", &recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowRecHitHCAL_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitHO_Cleaned_L1.present", &recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_present, &b_recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitHO_Cleaned_L1.obj", &recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowRecHitHO_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitPS_Cleaned_L1.present", &recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_present, &b_recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_present);
   fChain->SetBranchAddress("recoPFRecHits_particleFlowRecHitPS_Cleaned_L1.obj", &recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_obj, &b_recoPFRecHits_particleFlowRecHitPS_Cleaned_L1_obj);
   fChain->SetBranchAddress("recoPFTaus_hpsPFTauProducer__L1.present", &recoPFTaus_hpsPFTauProducer__L1_present, &b_recoPFTaus_hpsPFTauProducer__L1_present);
   fChain->SetBranchAddress("recoPFTaus_hpsPFTauProducer__L1.obj", &recoPFTaus_hpsPFTauProducer__L1_obj, &b_recoPFTaus_hpsPFTauProducer__L1_obj);
   fChain->SetBranchAddress("recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1.present", &recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_present, &b_recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_present);
   fChain->SetBranchAddress("recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1.obj", &recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_obj, &b_recoPFTauTransverseImpactParameters_hpsPFTauTransverseImpactParameters_PFTauTIP_L1_obj);
   fChain->SetBranchAddress("recoPhotons_gedPhotons__L1.present", &recoPhotons_gedPhotons__L1_present, &b_recoPhotons_gedPhotons__L1_present);
   fChain->SetBranchAddress("recoPhotons_gedPhotons__L1.obj", &recoPhotons_gedPhotons__L1_obj, &b_recoPhotons_gedPhotons__L1_obj);
   fChain->SetBranchAddress("recoPhotons_mustachePhotons__L1.present", &recoPhotons_mustachePhotons__L1_present, &b_recoPhotons_mustachePhotons__L1_present);
   fChain->SetBranchAddress("recoPhotons_mustachePhotons__L1.obj", &recoPhotons_mustachePhotons__L1_obj, &b_recoPhotons_mustachePhotons__L1_obj);
   fChain->SetBranchAddress("recoPhotons_photons__L1.present", &recoPhotons_photons__L1_present, &b_recoPhotons_photons__L1_present);
   fChain->SetBranchAddress("recoPhotons_photons__L1.obj", &recoPhotons_photons__L1_obj, &b_recoPhotons_photons__L1_obj);
   fChain->SetBranchAddress("recoPhotonCores_gedPhotonCore__L1.present", &recoPhotonCores_gedPhotonCore__L1_present, &b_recoPhotonCores_gedPhotonCore__L1_present);
   fChain->SetBranchAddress("recoPhotonCores_gedPhotonCore__L1.obj", &recoPhotonCores_gedPhotonCore__L1_obj, &b_recoPhotonCores_gedPhotonCore__L1_obj);
   fChain->SetBranchAddress("recoPhotonCores_mustachePhotonCore__L1.present", &recoPhotonCores_mustachePhotonCore__L1_present, &b_recoPhotonCores_mustachePhotonCore__L1_present);
   fChain->SetBranchAddress("recoPhotonCores_mustachePhotonCore__L1.obj", &recoPhotonCores_mustachePhotonCore__L1_obj, &b_recoPhotonCores_mustachePhotonCore__L1_obj);
   fChain->SetBranchAddress("recoPhotonCores_photonCore__L1.present", &recoPhotonCores_photonCore__L1_present, &b_recoPhotonCores_photonCore__L1_present);
   fChain->SetBranchAddress("recoPhotonCores_photonCore__L1.obj", &recoPhotonCores_photonCore__L1_obj, &b_recoPhotonCores_photonCore__L1_obj);
   fChain->SetBranchAddress("recoPreIds_trackerDrivenElectronSeeds_preid_L1.present", &recoPreIds_trackerDrivenElectronSeeds_preid_L1_present, &b_recoPreIds_trackerDrivenElectronSeeds_preid_L1_present);
   fChain->SetBranchAddress("recoPreIds_trackerDrivenElectronSeeds_preid_L1.obj", &recoPreIds_trackerDrivenElectronSeeds_preid_L1_obj, &b_recoPreIds_trackerDrivenElectronSeeds_preid_L1_obj);
   fChain->SetBranchAddress("recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1.present", &recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_present, &b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_present);
   fChain->SetBranchAddress("recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1.obj", &recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_obj, &b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerXClusters_L1_obj);
   fChain->SetBranchAddress("recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1.present", &recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_present, &b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_present);
   fChain->SetBranchAddress("recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1.obj", &recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_obj, &b_recoPreshowerClusters_multi5x5SuperClustersWithPreshower_preshowerYClusters_L1_obj);
   fChain->SetBranchAddress("recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1.present", &recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_present, &b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_present);
   fChain->SetBranchAddress("recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1.obj", &recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_obj, &b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerXClustersShape_L1_obj);
   fChain->SetBranchAddress("recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1.present", &recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_present, &b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_present);
   fChain->SetBranchAddress("recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1.obj", &recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_obj, &b_recoPreshowerClusterShapes_multi5x5PreshowerClusterShape_multi5x5PreshowerYClustersShape_L1_obj);
   fChain->SetBranchAddress("recoRecoChargedRefCandidates_trackRefsForJets__L1.present", &recoRecoChargedRefCandidates_trackRefsForJets__L1_present, &b_recoRecoChargedRefCandidates_trackRefsForJets__L1_present);
   fChain->SetBranchAddress("recoRecoChargedRefCandidates_trackRefsForJets__L1.obj", &recoRecoChargedRefCandidates_trackRefsForJets__L1_obj, &b_recoRecoChargedRefCandidates_trackRefsForJets__L1_obj);
   fChain->SetBranchAddress("recoRecoEcalCandidates_hfRecoEcalCandidate__L1.present", &recoRecoEcalCandidates_hfRecoEcalCandidate__L1_present, &b_recoRecoEcalCandidates_hfRecoEcalCandidate__L1_present);
   fChain->SetBranchAddress("recoRecoEcalCandidates_hfRecoEcalCandidate__L1.obj", &recoRecoEcalCandidates_hfRecoEcalCandidate__L1_obj, &b_recoRecoEcalCandidates_hfRecoEcalCandidate__L1_obj);
   fChain->SetBranchAddress("recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1.present", &recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_present, &b_recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_present);
   fChain->SetBranchAddress("recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1.obj", &recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_obj, &b_recoRecoTauPiZeros_hpsPFTauProducer_pizeros_L1_obj);
   fChain->SetBranchAddress("recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1.present", &recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_present, &b_recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_present);
   fChain->SetBranchAddress("recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1.obj", &recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_obj, &b_recoSecondaryVertexTagInfos_ghostTrackVertexTagInfos__L1_obj);
   fChain->SetBranchAddress("recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1.present", &recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_present, &b_recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_present);
   fChain->SetBranchAddress("recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1.obj", &recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_obj, &b_recoSecondaryVertexTagInfos_secondaryVertexTagInfos__L1_obj);
   fChain->SetBranchAddress("recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1.present", &recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_present, &b_recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_present);
   fChain->SetBranchAddress("recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1.obj", &recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_obj, &b_recoSoftLeptonTagInfos_softPFElectronsTagInfos__L1_obj);
   fChain->SetBranchAddress("recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1.present", &recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_present, &b_recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_present);
   fChain->SetBranchAddress("recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1.obj", &recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_obj, &b_recoSoftLeptonTagInfos_softPFMuonsTagInfos__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_correctedHybridSuperClusters__L1.present", &recoSuperClusters_correctedHybridSuperClusters__L1_present, &b_recoSuperClusters_correctedHybridSuperClusters__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_correctedHybridSuperClusters__L1.obj", &recoSuperClusters_correctedHybridSuperClusters__L1_obj, &b_recoSuperClusters_correctedHybridSuperClusters__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1.present", &recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_present, &b_recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1.obj", &recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_obj, &b_recoSuperClusters_correctedMulti5x5SuperClustersWithPreshower__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_hfEMClusters__L1.present", &recoSuperClusters_hfEMClusters__L1_present, &b_recoSuperClusters_hfEMClusters__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_hfEMClusters__L1.obj", &recoSuperClusters_hfEMClusters__L1_obj, &b_recoSuperClusters_hfEMClusters__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_hybridSuperClusters__L1.present", &recoSuperClusters_hybridSuperClusters__L1_present, &b_recoSuperClusters_hybridSuperClusters__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_hybridSuperClusters__L1.obj", &recoSuperClusters_hybridSuperClusters__L1_obj, &b_recoSuperClusters_hybridSuperClusters__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClustersWithPreshower__L1.present", &recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_present, &b_recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClustersWithPreshower__L1.obj", &recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_obj, &b_recoSuperClusters_multi5x5SuperClustersWithPreshower__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowEGamma__L1.present", &recoSuperClusters_particleFlowEGamma__L1_present, &b_recoSuperClusters_particleFlowEGamma__L1_present);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowEGamma__L1.obj", &recoSuperClusters_particleFlowEGamma__L1_obj, &b_recoSuperClusters_particleFlowEGamma__L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1.present", &recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_present, &b_recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_present);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1.obj", &recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_obj, &b_recoSuperClusters_multi5x5SuperClusters_multi5x5EndcapSuperClusters_L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1.present", &recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_present, &b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_present);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1.obj", &recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_obj, &b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALBarrel_L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1.present", &recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_present, &b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_present);
   fChain->SetBranchAddress("recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1.obj", &recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_obj, &b_recoSuperClusters_particleFlowSuperClusterECAL_particleFlowSuperClusterECALEndcapWithPreshower_L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1.present", &recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_present, &b_recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_present);
   fChain->SetBranchAddress("recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1.obj", &recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_obj, &b_recoSuperClusters_hybridSuperClusters_uncleanOnlyHybridSuperClusters_L1_obj);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1.present", &recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_present, &b_recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_present);
   fChain->SetBranchAddress("recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1.obj", &recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_obj, &b_recoSuperClusters_multi5x5SuperClusters_uncleanOnlyMulti5x5EndcapSuperClusters_L1_obj);
   fChain->SetBranchAddress("recoTracks_ckfInOutTracksFromConversions__L1.present", &recoTracks_ckfInOutTracksFromConversions__L1_present, &b_recoTracks_ckfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTracks_ckfInOutTracksFromConversions__L1.obj", &recoTracks_ckfInOutTracksFromConversions__L1_obj, &b_recoTracks_ckfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTracks_ckfOutInTracksFromConversions__L1.present", &recoTracks_ckfOutInTracksFromConversions__L1_present, &b_recoTracks_ckfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTracks_ckfOutInTracksFromConversions__L1.obj", &recoTracks_ckfOutInTracksFromConversions__L1_obj, &b_recoTracks_ckfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTracks_conversionStepTracks__L1.present", &recoTracks_conversionStepTracks__L1_present, &b_recoTracks_conversionStepTracks__L1_present);
   fChain->SetBranchAddress("recoTracks_conversionStepTracks__L1.obj", &recoTracks_conversionStepTracks__L1_obj, &b_recoTracks_conversionStepTracks__L1_obj);
   fChain->SetBranchAddress("recoTracks_cosmicMuons__L1.present", &recoTracks_cosmicMuons__L1_present, &b_recoTracks_cosmicMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_cosmicMuons__L1.obj", &recoTracks_cosmicMuons__L1_obj, &b_recoTracks_cosmicMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_cosmicMuons1Leg__L1.present", &recoTracks_cosmicMuons1Leg__L1_present, &b_recoTracks_cosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("recoTracks_cosmicMuons1Leg__L1.obj", &recoTracks_cosmicMuons1Leg__L1_obj, &b_recoTracks_cosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("recoTracks_cosmicsVetoTracks__L1.present", &recoTracks_cosmicsVetoTracks__L1_present, &b_recoTracks_cosmicsVetoTracks__L1_present);
   fChain->SetBranchAddress("recoTracks_cosmicsVetoTracks__L1.obj", &recoTracks_cosmicsVetoTracks__L1_obj, &b_recoTracks_cosmicsVetoTracks__L1_obj);
   fChain->SetBranchAddress("recoTracks_generalTracks__L1.present", &recoTracks_generalTracks__L1_present, &b_recoTracks_generalTracks__L1_present);
   fChain->SetBranchAddress("recoTracks_generalTracks__L1.obj", &recoTracks_generalTracks__L1_obj, &b_recoTracks_generalTracks__L1_obj);
   fChain->SetBranchAddress("recoTracks_globalCosmicMuons__L1.present", &recoTracks_globalCosmicMuons__L1_present, &b_recoTracks_globalCosmicMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_globalCosmicMuons__L1.obj", &recoTracks_globalCosmicMuons__L1_obj, &b_recoTracks_globalCosmicMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_globalCosmicMuons1Leg__L1.present", &recoTracks_globalCosmicMuons1Leg__L1_present, &b_recoTracks_globalCosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("recoTracks_globalCosmicMuons1Leg__L1.obj", &recoTracks_globalCosmicMuons1Leg__L1_obj, &b_recoTracks_globalCosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("recoTracks_globalMuons__L1.present", &recoTracks_globalMuons__L1_present, &b_recoTracks_globalMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_globalMuons__L1.obj", &recoTracks_globalMuons__L1_obj, &b_recoTracks_globalMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_globalSETMuons__L1.present", &recoTracks_globalSETMuons__L1_present, &b_recoTracks_globalSETMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_globalSETMuons__L1.obj", &recoTracks_globalSETMuons__L1_obj, &b_recoTracks_globalSETMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_pixelTracks__L1.present", &recoTracks_pixelTracks__L1_present, &b_recoTracks_pixelTracks__L1_present);
   fChain->SetBranchAddress("recoTracks_pixelTracks__L1.obj", &recoTracks_pixelTracks__L1_obj, &b_recoTracks_pixelTracks__L1_obj);
   fChain->SetBranchAddress("recoTracks_refittedStandAloneMuons__L1.present", &recoTracks_refittedStandAloneMuons__L1_present, &b_recoTracks_refittedStandAloneMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_refittedStandAloneMuons__L1.obj", &recoTracks_refittedStandAloneMuons__L1_obj, &b_recoTracks_refittedStandAloneMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_regionalCosmicTracks__L1.present", &recoTracks_regionalCosmicTracks__L1_present, &b_recoTracks_regionalCosmicTracks__L1_present);
   fChain->SetBranchAddress("recoTracks_regionalCosmicTracks__L1.obj", &recoTracks_regionalCosmicTracks__L1_obj, &b_recoTracks_regionalCosmicTracks__L1_obj);
   fChain->SetBranchAddress("recoTracks_standAloneMuons__L1.present", &recoTracks_standAloneMuons__L1_present, &b_recoTracks_standAloneMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_standAloneMuons__L1.obj", &recoTracks_standAloneMuons__L1_obj, &b_recoTracks_standAloneMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_standAloneSETMuons__L1.present", &recoTracks_standAloneSETMuons__L1_present, &b_recoTracks_standAloneSETMuons__L1_present);
   fChain->SetBranchAddress("recoTracks_standAloneSETMuons__L1.obj", &recoTracks_standAloneSETMuons__L1_obj, &b_recoTracks_standAloneSETMuons__L1_obj);
   fChain->SetBranchAddress("recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1.present", &recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_present, &b_recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1.obj", &recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj, &b_recoTracks_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1.present", &recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_present, &b_recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1.obj", &recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj, &b_recoTracks_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1.present", &recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_present, &b_recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_present);
   fChain->SetBranchAddress("recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1.obj", &recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_obj, &b_recoTracks_refittedStandAloneMuons_UpdatedAtVtx_L1_obj);
   fChain->SetBranchAddress("recoTracks_standAloneMuons_UpdatedAtVtx_L1.present", &recoTracks_standAloneMuons_UpdatedAtVtx_L1_present, &b_recoTracks_standAloneMuons_UpdatedAtVtx_L1_present);
   fChain->SetBranchAddress("recoTracks_standAloneMuons_UpdatedAtVtx_L1.obj", &recoTracks_standAloneMuons_UpdatedAtVtx_L1_obj, &b_recoTracks_standAloneMuons_UpdatedAtVtx_L1_obj);
   fChain->SetBranchAddress("recoTracks_standAloneSETMuons_UpdatedAtVtx_L1.present", &recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_present, &b_recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_present);
   fChain->SetBranchAddress("recoTracks_standAloneSETMuons_UpdatedAtVtx_L1.obj", &recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_obj, &b_recoTracks_standAloneSETMuons_UpdatedAtVtx_L1_obj);
   fChain->SetBranchAddress("recoTracks_tevMuons_default_L1.present", &recoTracks_tevMuons_default_L1_present, &b_recoTracks_tevMuons_default_L1_present);
   fChain->SetBranchAddress("recoTracks_tevMuons_default_L1.obj", &recoTracks_tevMuons_default_L1_obj, &b_recoTracks_tevMuons_default_L1_obj);
   fChain->SetBranchAddress("recoTracks_tevMuons_dyt_L1.present", &recoTracks_tevMuons_dyt_L1_present, &b_recoTracks_tevMuons_dyt_L1_present);
   fChain->SetBranchAddress("recoTracks_tevMuons_dyt_L1.obj", &recoTracks_tevMuons_dyt_L1_obj, &b_recoTracks_tevMuons_dyt_L1_obj);
   fChain->SetBranchAddress("recoTracks_tevMuons_firstHit_L1.present", &recoTracks_tevMuons_firstHit_L1_present, &b_recoTracks_tevMuons_firstHit_L1_present);
   fChain->SetBranchAddress("recoTracks_tevMuons_firstHit_L1.obj", &recoTracks_tevMuons_firstHit_L1_obj, &b_recoTracks_tevMuons_firstHit_L1_obj);
   fChain->SetBranchAddress("recoTracks_impactParameterTagInfos_ghostTracks_L1.present", &recoTracks_impactParameterTagInfos_ghostTracks_L1_present, &b_recoTracks_impactParameterTagInfos_ghostTracks_L1_present);
   fChain->SetBranchAddress("recoTracks_impactParameterTagInfos_ghostTracks_L1.obj", &recoTracks_impactParameterTagInfos_ghostTracks_L1_obj, &b_recoTracks_impactParameterTagInfos_ghostTracks_L1_obj);
   fChain->SetBranchAddress("recoTracks_tevMuons_picky_L1.present", &recoTracks_tevMuons_picky_L1_present, &b_recoTracks_tevMuons_picky_L1_present);
   fChain->SetBranchAddress("recoTracks_tevMuons_picky_L1.obj", &recoTracks_tevMuons_picky_L1_obj, &b_recoTracks_tevMuons_picky_L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_ckfInOutTracksFromConversions__L1.present", &recoTrackExtras_ckfInOutTracksFromConversions__L1_present, &b_recoTrackExtras_ckfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_ckfInOutTracksFromConversions__L1.obj", &recoTrackExtras_ckfInOutTracksFromConversions__L1_obj, &b_recoTrackExtras_ckfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_ckfOutInTracksFromConversions__L1.present", &recoTrackExtras_ckfOutInTracksFromConversions__L1_present, &b_recoTrackExtras_ckfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_ckfOutInTracksFromConversions__L1.obj", &recoTrackExtras_ckfOutInTracksFromConversions__L1_obj, &b_recoTrackExtras_ckfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_conversionStepTracks__L1.present", &recoTrackExtras_conversionStepTracks__L1_present, &b_recoTrackExtras_conversionStepTracks__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_conversionStepTracks__L1.obj", &recoTrackExtras_conversionStepTracks__L1_obj, &b_recoTrackExtras_conversionStepTracks__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_cosmicMuons__L1.present", &recoTrackExtras_cosmicMuons__L1_present, &b_recoTrackExtras_cosmicMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_cosmicMuons__L1.obj", &recoTrackExtras_cosmicMuons__L1_obj, &b_recoTrackExtras_cosmicMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_cosmicMuons1Leg__L1.present", &recoTrackExtras_cosmicMuons1Leg__L1_present, &b_recoTrackExtras_cosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_cosmicMuons1Leg__L1.obj", &recoTrackExtras_cosmicMuons1Leg__L1_obj, &b_recoTrackExtras_cosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_electronGsfTracks__L1.present", &recoTrackExtras_electronGsfTracks__L1_present, &b_recoTrackExtras_electronGsfTracks__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_electronGsfTracks__L1.obj", &recoTrackExtras_electronGsfTracks__L1_obj, &b_recoTrackExtras_electronGsfTracks__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_generalTracks__L1.present", &recoTrackExtras_generalTracks__L1_present, &b_recoTrackExtras_generalTracks__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_generalTracks__L1.obj", &recoTrackExtras_generalTracks__L1_obj, &b_recoTrackExtras_generalTracks__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_globalCosmicMuons__L1.present", &recoTrackExtras_globalCosmicMuons__L1_present, &b_recoTrackExtras_globalCosmicMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_globalCosmicMuons__L1.obj", &recoTrackExtras_globalCosmicMuons__L1_obj, &b_recoTrackExtras_globalCosmicMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_globalCosmicMuons1Leg__L1.present", &recoTrackExtras_globalCosmicMuons1Leg__L1_present, &b_recoTrackExtras_globalCosmicMuons1Leg__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_globalCosmicMuons1Leg__L1.obj", &recoTrackExtras_globalCosmicMuons1Leg__L1_obj, &b_recoTrackExtras_globalCosmicMuons1Leg__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_globalMuons__L1.present", &recoTrackExtras_globalMuons__L1_present, &b_recoTrackExtras_globalMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_globalMuons__L1.obj", &recoTrackExtras_globalMuons__L1_obj, &b_recoTrackExtras_globalMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_globalSETMuons__L1.present", &recoTrackExtras_globalSETMuons__L1_present, &b_recoTrackExtras_globalSETMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_globalSETMuons__L1.obj", &recoTrackExtras_globalSETMuons__L1_obj, &b_recoTrackExtras_globalSETMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_pixelTracks__L1.present", &recoTrackExtras_pixelTracks__L1_present, &b_recoTrackExtras_pixelTracks__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_pixelTracks__L1.obj", &recoTrackExtras_pixelTracks__L1_obj, &b_recoTrackExtras_pixelTracks__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_refittedStandAloneMuons__L1.present", &recoTrackExtras_refittedStandAloneMuons__L1_present, &b_recoTrackExtras_refittedStandAloneMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_refittedStandAloneMuons__L1.obj", &recoTrackExtras_refittedStandAloneMuons__L1_obj, &b_recoTrackExtras_refittedStandAloneMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_regionalCosmicTracks__L1.present", &recoTrackExtras_regionalCosmicTracks__L1_present, &b_recoTrackExtras_regionalCosmicTracks__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_regionalCosmicTracks__L1.obj", &recoTrackExtras_regionalCosmicTracks__L1_obj, &b_recoTrackExtras_regionalCosmicTracks__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_standAloneMuons__L1.present", &recoTrackExtras_standAloneMuons__L1_present, &b_recoTrackExtras_standAloneMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_standAloneMuons__L1.obj", &recoTrackExtras_standAloneMuons__L1_obj, &b_recoTrackExtras_standAloneMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_standAloneSETMuons__L1.present", &recoTrackExtras_standAloneSETMuons__L1_present, &b_recoTrackExtras_standAloneSETMuons__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_standAloneSETMuons__L1.obj", &recoTrackExtras_standAloneSETMuons__L1_obj, &b_recoTrackExtras_standAloneSETMuons__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1.present", &recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_present, &b_recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1.obj", &recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj, &b_recoTrackExtras_uncleanedOnlyCkfInOutTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1.present", &recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_present, &b_recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_present);
   fChain->SetBranchAddress("recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1.obj", &recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj, &b_recoTrackExtras_uncleanedOnlyCkfOutInTracksFromConversions__L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_default_L1.present", &recoTrackExtras_tevMuons_default_L1_present, &b_recoTrackExtras_tevMuons_default_L1_present);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_default_L1.obj", &recoTrackExtras_tevMuons_default_L1_obj, &b_recoTrackExtras_tevMuons_default_L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_dyt_L1.present", &recoTrackExtras_tevMuons_dyt_L1_present, &b_recoTrackExtras_tevMuons_dyt_L1_present);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_dyt_L1.obj", &recoTrackExtras_tevMuons_dyt_L1_obj, &b_recoTrackExtras_tevMuons_dyt_L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_firstHit_L1.present", &recoTrackExtras_tevMuons_firstHit_L1_present, &b_recoTrackExtras_tevMuons_firstHit_L1_present);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_firstHit_L1.obj", &recoTrackExtras_tevMuons_firstHit_L1_obj, &b_recoTrackExtras_tevMuons_firstHit_L1_obj);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_picky_L1.present", &recoTrackExtras_tevMuons_picky_L1_present, &b_recoTrackExtras_tevMuons_picky_L1_present);
   fChain->SetBranchAddress("recoTrackExtras_tevMuons_picky_L1.obj", &recoTrackExtras_tevMuons_picky_L1_obj, &b_recoTrackExtras_tevMuons_picky_L1_obj);
   fChain->SetBranchAddress("recoTrackExtrapolations_trackExtrapolator__L1.present", &recoTrackExtrapolations_trackExtrapolator__L1_present, &b_recoTrackExtrapolations_trackExtrapolator__L1_present);
   fChain->SetBranchAddress("recoTrackExtrapolations_trackExtrapolator__L1.obj", &recoTrackExtrapolations_trackExtrapolator__L1_obj, &b_recoTrackExtrapolations_trackExtrapolator__L1_obj);
   fChain->SetBranchAddress("recoTrackIPTagInfos_impactParameterTagInfos__L1.present", &recoTrackIPTagInfos_impactParameterTagInfos__L1_present, &b_recoTrackIPTagInfos_impactParameterTagInfos__L1_present);
   fChain->SetBranchAddress("recoTrackIPTagInfos_impactParameterTagInfos__L1.obj", &recoTrackIPTagInfos_impactParameterTagInfos__L1_obj, &b_recoTrackIPTagInfos_impactParameterTagInfos__L1_obj);
   fChain->SetBranchAddress("recoTrackJets_ak5TrackJets__L1.present", &recoTrackJets_ak5TrackJets__L1_present, &b_recoTrackJets_ak5TrackJets__L1_present);
   fChain->SetBranchAddress("recoTrackJets_ak5TrackJets__L1.obj", &recoTrackJets_ak5TrackJets__L1_obj, &b_recoTrackJets_ak5TrackJets__L1_obj);
   fChain->SetBranchAddress("recoVertexs_offlinePrimaryVertices__L1.present", &recoVertexs_offlinePrimaryVertices__L1_present, &b_recoVertexs_offlinePrimaryVertices__L1_present);
   fChain->SetBranchAddress("recoVertexs_offlinePrimaryVertices__L1.obj", &recoVertexs_offlinePrimaryVertices__L1_obj, &b_recoVertexs_offlinePrimaryVertices__L1_obj);
   fChain->SetBranchAddress("recoVertexs_offlinePrimaryVerticesWithBS__L1.present", &recoVertexs_offlinePrimaryVerticesWithBS__L1_present, &b_recoVertexs_offlinePrimaryVerticesWithBS__L1_present);
   fChain->SetBranchAddress("recoVertexs_offlinePrimaryVerticesWithBS__L1.obj", &recoVertexs_offlinePrimaryVerticesWithBS__L1_obj, &b_recoVertexs_offlinePrimaryVerticesWithBS__L1_obj);
   fChain->SetBranchAddress("recoVertexs_pixelVertices__L1.present", &recoVertexs_pixelVertices__L1_present, &b_recoVertexs_pixelVertices__L1_present);
   fChain->SetBranchAddress("recoVertexs_pixelVertices__L1.obj", &recoVertexs_pixelVertices__L1_obj, &b_recoVertexs_pixelVertices__L1_obj);
   fChain->SetBranchAddress("recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1.present", &recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_present, &b_recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_present);
   fChain->SetBranchAddress("recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1.obj", &recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_obj, &b_recoVertexCompositeCandidates_generalV0Candidates_Kshort_L1_obj);
   fChain->SetBranchAddress("recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1.present", &recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_present, &b_recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_present);
   fChain->SetBranchAddress("recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1.obj", &recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_obj, &b_recoVertexCompositeCandidates_generalV0Candidates_Lambda_L1_obj);
   fChain->SetBranchAddress("cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1.present", &cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_present, &b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_present);
   fChain->SetBranchAddress("cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1.obj", &cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_obj, &b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_csctfDigis__L1_obj);
   fChain->SetBranchAddress("cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1.present", &cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_present, &b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_present);
   fChain->SetBranchAddress("cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1.obj", &cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_obj, &b_cscL1TrackCSCDetIdCSCCorrelatedLCTDigiMuonDigiCollectionstdpairs_simCsctfTrackDigis__L1_obj);
}

Bool_t HOMuon_TreeLoop_ClusterInves_Plotter::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef HOMuon_TreeLoop_ClusterInves_Plotter_cxx
