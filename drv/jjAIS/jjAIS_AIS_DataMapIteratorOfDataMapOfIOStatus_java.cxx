// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <jjAIS_AIS_DataMapIteratorOfDataMapOfIOStatus.h>
#include <AIS_DataMapIteratorOfDataMapOfIOStatus.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_DataMapOfIOStatus.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_GlobalStatus.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_AIS_1DataMapIteratorOfDataMapOfIOStatus_1Create_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapIteratorOfDataMapOfIOStatus* theret = new AIS_DataMapIteratorOfDataMapOfIOStatus();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_AIS_1DataMapIteratorOfDataMapOfIOStatus_1Create_12 (JNIEnv *env, jobject theobj, jobject aMap)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapOfIOStatus* the_aMap = (AIS_DataMapOfIOStatus*) jcas_GetHandle(env,aMap);
if ( the_aMap == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aMap = new AIS_DataMapOfIOStatus ();
 // jcas_SetHandle ( env, aMap, the_aMap );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
AIS_DataMapIteratorOfDataMapOfIOStatus* theret = new AIS_DataMapIteratorOfDataMapOfIOStatus(*the_aMap);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_Initialize (JNIEnv *env, jobject theobj, jobject aMap)
{

jcas_Locking alock(env);
{
try {
AIS_DataMapOfIOStatus* the_aMap = (AIS_DataMapOfIOStatus*) jcas_GetHandle(env,aMap);
if ( the_aMap == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aMap = new AIS_DataMapOfIOStatus ();
 // jcas_SetHandle ( env, aMap, the_aMap );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
AIS_DataMapIteratorOfDataMapOfIOStatus* the_this = (AIS_DataMapIteratorOfDataMapOfIOStatus*) jcas_GetHandle(env,theobj);
the_this->Initialize(*the_aMap);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_Key (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapIteratorOfDataMapOfIOStatus* the_this = (AIS_DataMapIteratorOfDataMapOfIOStatus*) jcas_GetHandle(env,theobj);
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->Key();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
AIS_DataMapIteratorOfDataMapOfIOStatus* the_this = (AIS_DataMapIteratorOfDataMapOfIOStatus*) jcas_GetHandle(env,theobj);
Handle(AIS_GlobalStatus)* theret = new Handle(AIS_GlobalStatus);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_GlobalStatus",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DataMapIteratorOfDataMapOfIOStatus_FinalizeValue(JNIEnv *, jclass, jlong theid)
{
if (theid) {
  AIS_DataMapIteratorOfDataMapOfIOStatus* theobj = (AIS_DataMapIteratorOfDataMapOfIOStatus*) theid;
  delete theobj;
}
}


}
