#!/bin/bash

PT=`echo $1`
PDGID=`echo $2`

PREFIX=PGun_Single
NUMBEREVENTS=100
PARTICLENAME=$PDGID

if [ ${PDGID} = -13 ]; then
    PARTICLENAME=Mu
fi
echo "Particle is a " ${PARTICLENAME}


cat ./Temp_particle_gun_gen_sim.py \
    | sed -e s/INSERTPT/${PT}/\
    | sed -e s/INSERTPDGID/${PDGID}/\
    | sed -e s/INSERTNUMBEREVENTS/${NUMBEREVENTS}/\
    | sed -e s/INSERTNAME/${PREFIX}_${PARTICLENAME}_{PT}/\
    > Test_particle_gun_gen_sim.py
