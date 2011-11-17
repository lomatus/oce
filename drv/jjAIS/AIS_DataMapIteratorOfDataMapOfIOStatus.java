// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.


package jjAIS;

import jjAIS.TCollection_BasicMapIterator;
import jjAIS.AIS_DataMapOfIOStatus;
import jjAIS.AIS_InteractiveObject;
import jjAIS.AIS_GlobalStatus;


public class AIS_DataMapIteratorOfDataMapOfIOStatus extends jjAIS.TCollection_BasicMapIterator {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_DataMapIteratorOfDataMapOfIOStatus() {
   AIS_DataMapIteratorOfDataMapOfIOStatus_Create_1();
}

private final native void AIS_DataMapIteratorOfDataMapOfIOStatus_Create_1();

public AIS_DataMapIteratorOfDataMapOfIOStatus(AIS_DataMapOfIOStatus aMap) {
   AIS_DataMapIteratorOfDataMapOfIOStatus_Create_2(aMap);
}

private final native void AIS_DataMapIteratorOfDataMapOfIOStatus_Create_2(AIS_DataMapOfIOStatus aMap);

native public final void Initialize(AIS_DataMapOfIOStatus aMap);
native public final AIS_InteractiveObject Key();
native public final AIS_GlobalStatus Value();


public native static void FinalizeValue(long anHID);

public void finalize() {
   synchronized(myCasLock) {
     if ( aVirer != 0 ) FinalizeValue(HID);
     HID = 0;
   }
}

}
