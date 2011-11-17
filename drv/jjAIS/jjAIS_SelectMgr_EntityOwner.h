/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jjAIS_SelectMgr_EntityOwner */

#ifndef _Included_jjAIS_SelectMgr_EntityOwner
#define _Included_jjAIS_SelectMgr_EntityOwner
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_Create_1
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Create_11
  (JNIEnv *, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_Create_2
 * Signature: (LjjAIS/SelectMgr_SelectableObject;I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Create_12
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    HasSelectable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HasSelectable
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    Selectable
 * Signature: ()LjjAIS/SelectMgr_SelectableObject;
 */
JNIEXPORT jobject JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Selectable
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    Set
 * Signature: (LjjAIS/SelectMgr_SelectableObject;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Set
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_Hilight_1
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Hilight_11
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    IsHilighted
 * Signature: (LjjAIS/PrsMgr_PresentationManager;I)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsHilighted
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_Hilight_2
 * Signature: (LjjAIS/PrsMgr_PresentationManager;I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Hilight_12
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    HilightWithColor
 * Signature: (LjjAIS/PrsMgr_PresentationManager3d;SI)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HilightWithColor
  (JNIEnv *, jobject, jobject, jshort, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    Unhilight
 * Signature: (LjjAIS/PrsMgr_PresentationManager;I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Unhilight
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    Clear
 * Signature: (LjjAIS/PrsMgr_PresentationManager;I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Clear
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    HasLocation
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HasLocation
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SetLocation
 * Signature: (LjjAIS/TopLoc_Location;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SetLocation
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    ResetLocation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_ResetLocation
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    Location
 * Signature: ()LjjAIS/TopLoc_Location;
 */
JNIEXPORT jobject JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Location
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_State_1
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1State_11
  (JNIEnv *, jobject, jint);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    SelectMgr_EntityOwner_State_2
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1State_12
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    IsAutoHilight
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsAutoHilight
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_SelectMgr_EntityOwner
 * Method:    IsForcedHilight
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsForcedHilight
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
