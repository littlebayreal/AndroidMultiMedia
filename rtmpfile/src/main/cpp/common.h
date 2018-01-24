//
// Created by eric on 2018/1/22.
//

#ifndef FFMPEGDEMO_COMMON_H
#define FFMPEGDEMO_COMMON_H
#include<android/log.h>


#define logw(content)   __android_log_write(ANDROID_LOG_WARN,"eric",content)
#define loge(content)   __android_log_write(ANDROID_LOG_ERROR,"eric",content)
#define logd(content)   __android_log_write(ANDROID_LOG_DEBUG,"eric",content)

#endif //FFMPEGDEMO_COMMON_H
