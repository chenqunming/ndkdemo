//
// Created by chenqm on 2016/12/23.
//
#include <jni.h>

#include <android/log.h>



#ifndef LOG_TAG

#define LOG_TAG"ANDROID_LAB"

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif



/* Header for class com_cqm_ndkdemo_MainActivity */



#ifndef _Included_com_cqm_ndkdemo_MainActivity

#define _Included_com_cqm_ndkdemo_MainActivity

#ifdef __cplusplus

extern "C" {

#endif

/*

 * Class:com_cqm_ndkdemo_MainActivity

 * Method: getStringFromNative

 * Signature: ()Ljava/lang/String;

 */

JNIEXPORT jstring JNICALL Java_com_cqm_ndkdemo_MainActivity_getStringFromNative

  (JNIEnv *env, jobject jObj){

      LOGE("log string from ndk.");

      return (*env)->NewStringUTF(env,"HelloFrom JNI!");

  }



#ifdef __cplusplus

}

#endif

#endif

