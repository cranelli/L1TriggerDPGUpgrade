#!/bin/bash

#
# variables from arguments string in jdl
#

CONDOR_CLUSTER=$1
CONDOR_PROCESS=$2
RUN_DIR=$3
#PREFIX_NAME=$4
#INPUT_NAME=$5

#
# header 
#

echo ""
echo "CMSSW on Condor"
echo ""

START_TIME=`/bin/date`
echo "started at $START_TIME"

echo ""
echo "parameter set:"
echo "CONDOR_CLUSTER: $CONDOR_CLUSTER"
echo "CONDOR_PROCESS: $CONDOR_PROCESS"
echo "RUN_DIR: $RUN_DIR"
#echo "PARAMETER_SET: $PREFIX_NAME"
#echo "INPUT_NAME: $INPUT_NAME"
#echo "NUM_EVENTS_PER_JOB: $NUM_EVENTS_PER_JOB"

#
# setup software environment at FNAL for the given CMSSW release
#
export VO_CMS_SW_DIR=/sharesoft/cmssw
. $VO_CMS_SW_DIR/cmsset_default.sh
cd $RUN_DIR
eval `scramv1 runtime -sh`

#
# modify parameter-set
#

#PARAMETER_SET=`echo ${RUN_DIR}/${INPUT_NAME}`
#FINAL_NAME=`echo ${PREFIX_NAME}_${CONDOR_CLUSTER}_${CONDOR_PROCESS}`
#FINAL_PARAMETER_SET=`echo ${FINAL_NAME}_cfg.py`
#FINAL_LOG=`echo $FINAL_NAME.log`
SCRATCH_DIR=`echo ${_CONDOR_SCRATCH_DIR}`
#echo ""
#echo "Writing final parameter-set: $FINAL_PARAMETER_SET to RUN_DIR: $RUN_DIR"
#echo ""

#let "SKIP = $CONDOR_PROCESS * NUM_EVENTS_PER_JOB"

#cat $PARAMETER_SET \
#| sed -e s/CONDOR_MAXEVENTS/$NUM_EVENTS_PER_JOB/ \
#| sed -e s/CONDOR_SKIPEVENTS/$SKIP/ \
#| sed -e s/CONDOR_OUTPUTFILENAME/$FINAL_NAME/ \
#| sed -e s~CONDOR_SCRATCH_DIR~$SCRATCH_DIR~ \
#> $FINAL_PARAMETER_SET

#
# run cmssw
#

#echo "run: time hadupg $PARAMETER_SET > $FINAL_LOG 2>&1"
echo $HOME
#export HOME=/home/cranelli
#source /home/cranelli/setup/setup.sh
#source /home/cranelli/setup/setup_geant_temp.sh
#echo $G4WORKDIR
#/home/cranelli/geant4/geant4.9.4.p02/x86_64-slc5-gcc43/bin/Linux-g++/fcalor $PARAMETER_SET >> $FINAL_LOG 2>&1
#cd /home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/
#cmsRun particle_gun_gen_sim.py
cmsRun run_RAW2DIGI_RECO.py
#echo "working"
#cmsRun run_L1TMuon_cfg.py
#cmsRun run_CaloInspector_cfg.py
#cmsRun Test_particle_gun_gen_sim.py
#cmsRun Test_run_L1TMuon_cfg.py
#cmsRun Test_run_CaloInspector_cfg.py



exitcode=$?

#
# end run
#

echo ""
END_TIME=`/bin/date`
echo "finished at $END_TIME"
exit $exitcode
