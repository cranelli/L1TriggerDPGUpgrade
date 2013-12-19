# Auto generated configuration file
# using: 
# Revision: 1.381.2.7 
# Source: /local/reps/CMSSW/CMSSW/Configuration/PyReleaseValidation/python/ConfigBuilder.py,v 
# with command line options: SingleMuFlatLogPt_100MeVto2TeV_cfi.py -s GEN,SIM,DIGI,L1 --conditions START53_V7A::All --eventcontent FEVTDEBUG --no_exec
import FWCore.ParameterSet.Config as cms

process = cms.Process('L1')

# import of standard configurations
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('SimGeneral.MixingModule.mixNoPU_cfi')
process.load('Configuration.StandardSequences.GeometryRecoDB_cff')
process.load('Configuration.StandardSequences.GeometrySimDB_cff')
process.load('Configuration.StandardSequences.MagneticField_38T_cff')
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
    input = cms.untracked.int32(10000)
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

process.FEVTDEBUGoutput = cms.OutputModule("PoolOutputModule",
    splitLevel = cms.untracked.int32(0),
    eventAutoFlushCompressedSize = cms.untracked.int32(5242880),
    outputCommands = process.FEVTDEBUGEventContent.outputCommands,
    fileName = cms.untracked.string('SingleMu14Pt_Barrel_GEN_SIM_DIGI_L1_RECO.root'),
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
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:mc', '')

process.generator = cms.EDProducer("FlatRandomPtGunProducer",
	PGunParameters = cms.PSet(
        MinPt = cms.double(14),
	MaxPt = cms.double(14),
        PartID = cms.vint32(-13), #-13 is muons, 211 is Pi+       
        MaxPhi = cms.double(3.1415),
	MinPhi = cms.double(-3.1415),
	MaxEta = cms.double(1.3),
	MinEta = cms.double(-1.3),
	
	#Alberto's
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

#turn off HO ZS
process.hcalRawData.HO = cms.untracked.InputTag("simHcalUnsuppressedDigis", "", "")



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

