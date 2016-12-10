#!/usr/bin/env bash




Deploy=nets/tracker.prototxt
Pretrain_model=nets/models/pretrained_model/tracker.caffemodel
videos_folder=/media/cyz/myfiles/tracking_dataset/vot2014
gpu_id=0

#start_video_num=0
#pause_val = 1

cd build
make
cd ..
build/runTracker $Deploy $Pretrain_model $videos_folder $gpu_id
