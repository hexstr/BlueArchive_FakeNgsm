#include <jni.h>

/*
    Java_com_nexon_ngsm_Ngsm_ngsmNativeVersion
    Java_com_nexon_ngsm_Ngsm_ngsmNativeGetNgsmToken
    Java_com_nexon_ngsm_Ngsm_ngsmNativeInit
    Java_com_nexon_ngsm_Ngsm_ngsmNativeRun
    Java_com_nexon_ngsm_Ngsm_ngsmNativeResume
    Java_com_nexon_ngsm_Ngsm_ngsmNativePause
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSetTouchPosition
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSetDragPosition
    Java_com_nexon_ngsm_Ngsm_ngsmNativeCreateSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeReleaseSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeReleaseSecuDataAll
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSetSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeGetSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeAddSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSubSecuData
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSetSecuDataFloat
    Java_com_nexon_ngsm_Ngsm_ngsmNativeGetSecuDataFloat
    Java_com_nexon_ngsm_Ngsm_ngsmNativeAddSecuDataFloat
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSubSecuDataFloat
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSetSecuDataDouble
    Java_com_nexon_ngsm_Ngsm_ngsmNativeGetSecuDataDouble
    Java_com_nexon_ngsm_Ngsm_ngsmNativeAddSecuDataDouble
    Java_com_nexon_ngsm_Ngsm_ngsmNativeSubSecuDataDouble
*/

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeInit(JNIEnv* env, jobject thiz, jobject activity, jobject context, jobject ngsm, jint i) {
    jclass target_class = env->GetObjectClass(thiz);
    jmethodID target_method = env->GetMethodID(target_class, "onInitComplete", "(I)V");
    env->CallVoidMethod(thiz, target_method, 0);
}

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativePause(JNIEnv* env, jobject thiz) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeResume(JNIEnv* env, jobject thiz) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeRun(JNIEnv* env, jobject thiz, jstring npacode, jstring userId) {
    jclass target_class = env->GetObjectClass(thiz);
    jmethodID target_method = env->GetMethodID(target_class, "onRunComplete", "(I)V");
    env->CallVoidMethod(thiz, target_method, 0);
}

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeSetDragPosition(JNIEnv* env, jobject thiz, jfloat f, jfloat f2, jfloat f3, jfloat f4, jint i) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeSetTouchPosition(JNIEnv* env, jobject thiz, jfloat f, jfloat f2) {}

JNIEXPORT jstring JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeVersion(JNIEnv* env, jobject thiz) {
    return env->NewStringUTF("AABBCCDDEEFF2333");
}

JNIEXPORT jstring JNICALL Java_com_nexon_ngsm_Ngsm_ngsmNativeGetNgsmToken(JNIEnv* env, jobject thiz, jstring npacode, jstring userId) {
    return env->NewStringUTF("AABBCCDDEEFF2333");
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    return JNI_VERSION_1_2;
}

#ifdef __cplusplus
}
#endif