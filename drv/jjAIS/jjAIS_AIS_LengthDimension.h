/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jjAIS_AIS_LengthDimension */

#ifndef _Included_jjAIS_AIS_LengthDimension
#define _Included_jjAIS_AIS_LengthDimension
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Create_1
 * Signature: (LjjAIS/TopoDS_Face;LjjAIS/TopoDS_Face;DLjjAIS/TCollection_ExtendedString;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_11
  (JNIEnv *, jobject, jobject, jobject, jdouble, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Create_2
 * Signature: (LjjAIS/TopoDS_Face;LjjAIS/TopoDS_Face;DLjjAIS/TCollection_ExtendedString;LjjAIS/gp_Pnt;SD)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_12
  (JNIEnv *, jobject, jobject, jobject, jdouble, jobject, jobject, jshort, jdouble);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Create_3
 * Signature: (LjjAIS/TopoDS_Face;LjjAIS/TopoDS_Edge;DLjjAIS/TCollection_ExtendedString;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_13
  (JNIEnv *, jobject, jobject, jobject, jdouble, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Create_4
 * Signature: (LjjAIS/TopoDS_Shape;LjjAIS/TopoDS_Shape;LjjAIS/Geom_Plane;DLjjAIS/TCollection_ExtendedString;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_14
  (JNIEnv *, jobject, jobject, jobject, jobject, jdouble, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Create_5
 * Signature: (LjjAIS/TopoDS_Shape;LjjAIS/TopoDS_Shape;LjjAIS/Geom_Plane;DLjjAIS/TCollection_ExtendedString;LjjAIS/gp_Pnt;SSD)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_15
  (JNIEnv *, jobject, jobject, jobject, jobject, jdouble, jobject, jobject, jshort, jshort, jdouble);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    SetFirstShape
 * Signature: (LjjAIS/TopoDS_Shape;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetFirstShape
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    SetSecondShape
 * Signature: (LjjAIS/TopoDS_Shape;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetSecondShape
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    KindOfDimension
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LengthDimension_KindOfDimension
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    IsMovable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LengthDimension_IsMovable
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    TypeOfDist
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LengthDimension_TypeOfDist
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    SetTypeOfDist
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetTypeOfDist
  (JNIEnv *, jobject, jshort);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    AIS_LengthDimension_Compute_4
 * Signature: (LjjAIS/Prs3d_Projector;LjjAIS/Geom_Transformation;LjjAIS/Prs3d_Presentation;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Compute_14
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    ComputeTwoEdgesLength
 * Signature: (LjjAIS/Prs3d_Presentation;LjjAIS/AIS_Drawer;LjjAIS/TCollection_ExtendedString;DLjjAIS/TopoDS_Edge;LjjAIS/TopoDS_Edge;LjjAIS/Geom_Plane;ZZLjjAIS/Bnd_Box;Ljcas/Standard_Integer;Ljcas/Standard_Real;LjjAIS/gp_Dir;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;Ljcas/Standard_Short;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeTwoEdgesLength
  (JNIEnv *, jclass, jobject, jobject, jobject, jdouble, jobject, jobject, jobject, jboolean, jboolean, jobject, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    ComputeOneEdgeOneVertexLength
 * Signature: (LjjAIS/Prs3d_Presentation;LjjAIS/AIS_Drawer;LjjAIS/TCollection_ExtendedString;DLjjAIS/TopoDS_Shape;LjjAIS/TopoDS_Shape;LjjAIS/Geom_Plane;ZZLjjAIS/Bnd_Box;Ljcas/Standard_Integer;Ljcas/Standard_Real;LjjAIS/gp_Dir;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;Ljcas/Standard_Short;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeOneEdgeOneVertexLength
  (JNIEnv *, jclass, jobject, jobject, jobject, jdouble, jobject, jobject, jobject, jboolean, jboolean, jobject, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_LengthDimension
 * Method:    ComputeTwoVerticesLength
 * Signature: (LjjAIS/Prs3d_Presentation;LjjAIS/AIS_Drawer;LjjAIS/TCollection_ExtendedString;DLjjAIS/TopoDS_Vertex;LjjAIS/TopoDS_Vertex;LjjAIS/Geom_Plane;ZZLjjAIS/Bnd_Box;SLjcas/Standard_Integer;Ljcas/Standard_Real;LjjAIS/gp_Dir;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;Ljcas/Standard_Short;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeTwoVerticesLength
  (JNIEnv *, jclass, jobject, jobject, jobject, jdouble, jobject, jobject, jobject, jboolean, jboolean, jobject, jshort, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
