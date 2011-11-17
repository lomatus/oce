// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.


package jjAIS;

import jjAIS.TCollection_BaseSequence;
import jjAIS.AIS_Relation;
import jcas.Standard_Integer;


public class AIS_SequenceOfDimension extends jjAIS.TCollection_BaseSequence {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_SequenceOfDimension() {
   AIS_SequenceOfDimension_Create_1();
}

private final native void AIS_SequenceOfDimension_Create_1();

native public final void Clear();
native public final AIS_SequenceOfDimension Assign(AIS_SequenceOfDimension Other);
final public void Append(AIS_Relation T) {
    AIS_SequenceOfDimension_Append_1(T);
}

private final native void AIS_SequenceOfDimension_Append_1(AIS_Relation T);

final public void Append(AIS_SequenceOfDimension S) {
    AIS_SequenceOfDimension_Append_2(S);
}

private final native void AIS_SequenceOfDimension_Append_2(AIS_SequenceOfDimension S);

final public void Prepend(AIS_Relation T) {
    AIS_SequenceOfDimension_Prepend_1(T);
}

private final native void AIS_SequenceOfDimension_Prepend_1(AIS_Relation T);

final public void Prepend(AIS_SequenceOfDimension S) {
    AIS_SequenceOfDimension_Prepend_2(S);
}

private final native void AIS_SequenceOfDimension_Prepend_2(AIS_SequenceOfDimension S);

final public void InsertBefore(int Index,AIS_Relation T) {
    AIS_SequenceOfDimension_InsertBefore_1(Index,T);
}

private final native void AIS_SequenceOfDimension_InsertBefore_1(int Index,AIS_Relation T);

final public void InsertBefore(int Index,AIS_SequenceOfDimension S) {
    AIS_SequenceOfDimension_InsertBefore_2(Index,S);
}

private final native void AIS_SequenceOfDimension_InsertBefore_2(int Index,AIS_SequenceOfDimension S);

final public void InsertAfter(int Index,AIS_Relation T) {
    AIS_SequenceOfDimension_InsertAfter_1(Index,T);
}

private final native void AIS_SequenceOfDimension_InsertAfter_1(int Index,AIS_Relation T);

final public void InsertAfter(int Index,AIS_SequenceOfDimension S) {
    AIS_SequenceOfDimension_InsertAfter_2(Index,S);
}

private final native void AIS_SequenceOfDimension_InsertAfter_2(int Index,AIS_SequenceOfDimension S);

native public final AIS_Relation First();
native public final AIS_Relation Last();
native public final void Split(int Index,AIS_SequenceOfDimension Sub);
native public final AIS_Relation Value(int Index);
native public final void SetValue(int Index,AIS_Relation I);
native public final AIS_Relation ChangeValue(int Index);
final public void Remove(int Index) {
    AIS_SequenceOfDimension_Remove_1(Index);
}

private final native void AIS_SequenceOfDimension_Remove_1(int Index);

final public void Remove(int FromIndex,int ToIndex) {
    AIS_SequenceOfDimension_Remove_2(FromIndex,ToIndex);
}

private final native void AIS_SequenceOfDimension_Remove_2(int FromIndex,int ToIndex);



public native static void FinalizeValue(long anHID);

public void finalize() {
   synchronized(myCasLock) {
     if ( aVirer != 0 ) FinalizeValue(HID);
     HID = 0;
   }
}

}
