#include <jni.h>

/*
    Java_com_nexon_ngsx_NgsX_NgsXNativeClose
    Java_com_nexon_ngsx_NgsX_NgsXNativeInit
    Java_com_nexon_ngsx_NgsX_NgsXNativePause
    Java_com_nexon_ngsx_NgsX_NgsXNativeResume
    Java_com_nexon_ngsx_NgsX_NgsXNativeRun
    Java_com_nexon_ngsx_NgsX_NgsXNativeSwitch
    Java_com_nexon_ngsx_NgsX_NgsXNativeVersion
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeAddData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeAddDoubleData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeAddFloatData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeCreateData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeGetData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeGetDoubleData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeGetFloatData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeReleaseAllData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeReleaseData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSetData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSetDoubleData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSetFloatData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSubData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSubDoubleData
    Java_com_nexon_ngsx_blackvari_BlackVari_NgsXNativeSubFloatData
    Java_com_nexon_ngsx_capture_CaptureInterface_NgsXNativeDirectCapture
    Java_com_nexon_ngsx_touchevent_TouchEvent_NgsXNativeSetDragPosition
    Java_com_nexon_ngsx_touchevent_TouchEvent_NgsXNativeSetTouchPosition
*/

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_nexon_ngsx_NgsX_NgsXNativeInit(JNIEnv* env, jobject thiz, jobject activity, jobject context, jobject captureInterface, jint i, jint i2) {
    jclass target_class = env->GetObjectClass(thiz);
    jmethodID target_method = env->GetMethodID(target_class, "onInitCallback", "(ZILjava/lang/String;)V");
    env->CallVoidMethod(thiz, target_method, true, 0, env->NewStringUTF("NGS-X Init Success"));
}

JNIEXPORT void JNICALL Java_com_nexon_ngsx_NgsX_NgsXNativePause(JNIEnv* env, jobject thiz) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsx_NgsX_NgsXNativeResume(JNIEnv* env, jobject thiz) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsx_NgsX_NgsXNativeRun(JNIEnv* env, jobject thiz, jstring npacode, jstring userId) {
    jclass target_class = env->GetObjectClass(thiz);
    jmethodID target_method = env->GetMethodID(target_class, "onRunCallback", "(ZILjava/lang/String;)V");
    env->CallVoidMethod(thiz, target_method, true, 0, env->NewStringUTF("AABBCCDDEEFF2333"));
}

JNIEXPORT jstring JNICALL Java_com_nexon_ngsx_NgsX_NgsXNativeVersion(JNIEnv* env, jobject thiz) {
    return env->NewStringUTF("NGS_X_CORE_VERSION : 1.3.5.0");
}

JNIEXPORT void JNICALL Java_com_nexon_ngsx_touchevent_TouchEvent_NgsXNativeSetDragPosition(JNIEnv* env, jobject thiz, jfloat f, jfloat f2, jfloat f3, jfloat f4, jint i) {}

JNIEXPORT void JNICALL Java_com_nexon_ngsx_touchevent_TouchEvent_NgsXNativeSetTouchPosition(JNIEnv* env, jobject thiz, jfloat f, jfloat f2) {}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    return JNI_VERSION_1_6;
}

#ifdef __cplusplus
}
#endif