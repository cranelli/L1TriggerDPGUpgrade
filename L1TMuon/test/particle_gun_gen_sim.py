# Auto generated configuration file
# using: 
# Revision: 1.381.2.7 
# Source: /local/reps/CMSSW/CMSSW/Configuration/PyReleaseValidation/python/ConfigBuilder.py,v 
# with command line options: SingleMuFlatLogPt_100MeVto2TeV_cfi.py -s GEN,SIM,DIGI,L1 --conditions START53_V7A::All --eventcontent FEVTDEBUG --no_exec
import FWCore.ParameterSet.Config as cms
import runParameters

process = cms.Process('L1')

# import of standard configurations
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('SimGeneral.MixingModule.mixNoPU_cfi')
#process.load('Configuration.StandardSequences.GeometryRecoDB_cff')
#process.load('Configuration.StandardSequences.GeometrySimDB_cff')
process.load('Configuration.Geometry.GeometryExtended2015Reco_cff')
#process.load('Configuration.StandardSequences.MagneticField_38T_cff')
process.load('Configuration.StandardSequences.MagneticField_38T_PostLS1_cff')
process.load('Configuration.StandardSequences.Generator_cff')
process.load('IOMC.EventVertexGenerators.VtxSmearedRealistic8TeVCollision_cfi')
process.load('GeneratorInterface.Core.genFilterSummary_cff')
process.load('Configuration.StandardSequences.SimIdeal_cff')
process.load('Configuration.StandardSequences.Digi_cff')
process.load('Configuration.StandardSequences.SimL1Emulator_cff')

process.load('Configuration.StandardSequences.DigiToRaw_cff')
process.load('Configuration.StandardSequences.RawToDigi_cff')
process.load('Configuration.StandardSequences.Reconstruction_cff')

process.load('Configuration.StandardSequences.EndOfProcess_cff')
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')

process.maxEvents = cms.untracked.PSet(
   # input = cms.untracked.Int32(5000)
    input = cms.untracked.int32(runParameters.NUMEVENTS)
)

# Input source
process.source = cms.Source("EmptySource")

process.options = cms.untracked.PSet(

)

# Production Info
process.configurationMetadata = cms.untracked.PSet(
    version = cms.untracked.string('$Revision: 1.1 $'),
    annotation = cms.untracked.string('SingleMuFlatPt_5GeVto200GeV_cfi.py nevts:500'),
    name = cms.untracked.string('PyReleaseValidation')
)

# Output definition

#New ouputCommands: outputCommands = cms.untracked.vstring('keep *','drop *_mix_*_*'),

process.FEVTDEBUGoutput = cms.OutputModule("PoolOutputModule",
    splitLevel = cms.untracked.int32(0),
    eventAutoFlushCompressedSize = cms.untracked.int32(5242880),
    outputCommands = process.FEVTDEBUGEventContent.outputCommands,
    fileName = cms.untracked.string('SingleMu14Pt_' +runParameters.PREFIX + '_Barrel_GEN_SIM_DIGI_L1_RECO.root'),
    dataset = cms.untracked.PSet(
        filterName = cms.untracked.string(''),
        dataTier = cms.untracked.string('')
    ),
    SelectEvents = cms.untracked.PSet(
        SelectEvents = cms.vstring('generation_step')
    )
)

# Additional output definition

# Other statements
process.genstepfilter.triggerConditions=cms.vstring("generation_step")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:upgradePLS1', '')
#process.GlobalTag = GlobalTag(process.GlobalTag, 'POSTLS170_V3::All','')

process.generator = cms.EDProducer("FlatRandomPtGunProducer",
	PGunParameters = cms.PSet(
        MinPt = cms.double(14),
	MaxPt = cms.double(14),
        PartID = cms.vint32(-13), #-13 is muons, 211 is Pi+       
	MaxPhi = cms.double(3.14159265359),
	MinPhi = cms.double(-3.14159265359),
	MaxEta = cms.double(0.087*15),
        MinEta = cms.double(-0.087*15)

	#MinPt = cms.double(3),
	#MaxPt = cms.double(200),
	#MaxPhi = cms.double(3.14159265359),
	#MinPhi = cms.double(-3.14159265359),
	#MaxEta = cms.double(0.9),
        #MinEta = cms.double(-0.9)        
    ),
    Verbosity = cms.untracked.int32(0),
    psethack = cms.string('single mu pt 5to100'),
    AddAntiParticle = cms.bool(False), 
    firstRun = cms.untracked.uint32(1)
)

# add SiPMs to HO
process.mix.digitizers.hcal.ho.pixels = cms.int32(2500)
process.mix.digitizers.hcal.ho.siPMCode = 1
process.mix.digitizers.hcal.ho.photoelectronsToAnalog = cms.vdouble([4.0]*16)
process.mix.digitizers.hcal.ho.doSiPMSmearing = cms.bool(False)

#turn off HO ZS
process.hcalRawData.HO = cms.untracked.InputTag("simHcalUnsuppressedDigis", "", "")


#Taken from Jake Anderson's code
#ascii file conditions
#process.hcales_ascii = hcales_ascii = cms.ESSource(
#	"HcalTextCalibrations",
#	input = cms.VPSet(
#	cms.PSet(
#	object = cms.string('ChannelQuality'),
#	
#	file = cms.FileInPath('L1TriggerDPGUpgrade/L1TMuon/data/chan_qual_0.txt')
#	),
#	cms.PSet(
#	object = cms.string('Pedestals'),
#	file = cms.FileInPath('L1TriggerDPGUpgrade/L1TMuon/data/test_pedestals.txt')
#	),
#	cms.PSet(
#	object = cms.string('PedestalWidths'),
#	file = cms.FileInPath('L1TriggerDPGUpgrade/L1TMuon/data/test_pedestalWidths.txt')
#	),
#	cms.PSet(
#	object = cms.string('Gains'),
#	file = cms.FileInPath('L1TriggerDPGUpgrade/L1TMuon/data/test_gains.txt')
#	),
#	)
#	)

#process.hcalasciiprefer = cms.ESPrefer("HcalTextCalibrations", "hcales_ascii")

# Automatic addition of the customisation function from SLHCUpgradeSimulations.Configuration.postLS1Customs
from SLHCUpgradeSimulations.Configuration.postLS1Customs import customisePostLS1

#call to customisation function customisePostLS1 imported from SLHCUpgradeSimulations.Configuration.postLS1Customs
process = customisePostLS1(process)

# End of customisation functions

# Path and EndPath definitions

process.calotowermaker.HOThreshold0 = -100

process.generation_step = cms.Path(process.pgen)
process.simulation_step = cms.Path(process.psim)
process.digitisation_step = cms.Path(process.pdigi)
process.L1simulation_step = cms.Path(process.SimL1Emulator)

process.digi2raw_step = cms.Path(process.DigiToRaw)
process.raw2digi_step = cms.Path(process.RawToDigi)
process.reconstruction_step = cms.Path(process.reconstruction)

process.genfiltersummary_step = cms.EndPath(process.genFilterSummary)
process.endjob_step = cms.EndPath(process.endOfProcess)
process.FEVTDEBUGoutput_step = cms.EndPath(process.FEVTDEBUGoutput)

# Schedule definition
process.schedule = cms.Schedule(process.generation_step,
				process.genfiltersummary_step,
				process.simulation_step,
				process.digitisation_step,
				process.L1simulation_step,
				process.digi2raw_step,
				process.raw2digi_step,
				process.reconstruction_step,
				process.endjob_step,
				process.FEVTDEBUGoutput_step)
# filter all path with the production filter sequence
for path in process.paths:
	getattr(process,path)._seq = process.generator * getattr(process,path)._seq 


# customisation of the process From Salavat (For HLT so commented out, but kept for records).

# Automatic addition of the customisation function from HLTrigger.Configuration.customizeHLTforMC
#from HLTrigger.Configuration.customizeHLTforMC import customizeHLTforMC
#call to customisation function customizeHLTforMC imported from HLTrigger.Configuration.customizeHLTforMC

#process = customizeHLTforMC(process)

# Automatic addition of the customisation function from SLHCUpgradeSimulations.Configuration.postLS1Customs
#from SLHCUpgradeSimulations.Configuration.postLS1Customs import customisePostLS1
#call to customisation function customisePostLS1 imported from SLHCUpgradeSimulations.Configuration.postLS1Customs
#process = customisePostLS1(process)

# End of customisation functions
