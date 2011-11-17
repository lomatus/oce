// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <jjAIS_AIS_DataMapofIntegerListOfinteractive.h>
#include <AIS_DataMapofIntegerListOfinteractive.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_ListOfInteractive.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_AIS_1DataMapofIntegerListOfinteractive_1Create_11 (JNIEnv *env, jobject theobj, jint NbBuckets)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* theret = new AIS_DataMapofIntegerListOfinteractive((Standard_Integer) NbBuckets);
jcas_SetHandle(env,theobj,theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_Assign (JNIEnv *env, jobject theobj, jobject Other)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_Other = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,Other);
if ( the_Other == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Other = new AIS_DataMapofIntegerListOfinteractive ();
 // jcas_SetHandle ( env, Other, the_Other );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
const AIS_DataMapofIntegerListOfinteractive& theret = the_this->Assign(*the_Other);
thejret = jcas_CreateObject(env,"jjAIS/AIS_DataMapofIntegerListOfinteractive",&theret,0);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_ReSize (JNIEnv *env, jobject theobj, jint NbBuckets)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
the_this->ReSize((Standard_Integer) NbBuckets);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_Clear (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
the_this->Clear();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_Bind (JNIEnv *env, jobject theobj, jint K, jobject I)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
AIS_ListOfInteractive* the_I = (AIS_ListOfInteractive*) jcas_GetHandle(env,I);
if ( the_I == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_I = new AIS_ListOfInteractive ();
 // jcas_SetHandle ( env, I, the_I );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
 thejret = the_this->Bind((Standard_Integer) K,*the_I);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_IsBound (JNIEnv *env, jobject theobj, jint K)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
 thejret = the_this->IsBound((Standard_Integer) K);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_UnBind (JNIEnv *env, jobject theobj, jint K)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
 thejret = the_this->UnBind((Standard_Integer) K);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_Find (JNIEnv *env, jobject theobj, jint K)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
const AIS_ListOfInteractive& theret = the_this->Find((Standard_Integer) K);
thejret = jcas_CreateObject(env,"jjAIS/AIS_ListOfInteractive",&theret,0);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_ChangeFind (JNIEnv *env, jobject theobj, jint K)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapofIntegerListOfinteractive* the_this = (AIS_DataMapofIntegerListOfinteractive*) jcas_GetHandle(env,theobj);
const AIS_ListOfInteractive& theret = the_this->ChangeFind((Standard_Integer) K);
thejret = jcas_CreateObject(env,"jjAIS/AIS_ListOfInteractive",&theret,0);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapofIntegerListOfinteractive_FinalizeValue(JNIEnv *, jclass, jlong theid)
{
if (theid) {
  AIS_DataMapofIntegerListOfinteractive* theobj = (AIS_DataMapofIntegerListOfinteractive*) theid;
  delete theobj;
}
}


}
