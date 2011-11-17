// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.


package jjAIS;

import jjAIS.Quantity_NameOfColor;
import jjAIS.Prs3d_Drawer;
import jjAIS.AIS_TypeOfAttribute;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jcas.Standard_Real;
import jjAIS.Aspect_TypeOfLine;
import jjAIS.Graphic3d_MaterialAspect;


public class AIS_GraphicTool extends jcas.Object {

 static {
    System.loadLibrary("jjAIS");
 }
            
static public short GetLineColor(Prs3d_Drawer aDrawer,short TheTypeOfAttributes) {
   return AIS_GraphicTool_GetLineColor_1(aDrawer,TheTypeOfAttributes);
}

private static native short AIS_GraphicTool_GetLineColor_1(Prs3d_Drawer aDrawer,short TheTypeOfAttributes);

static public void GetLineColor(Prs3d_Drawer aDrawer,short TheTypeOfAttributes,Quantity_Color TheLineColor) {
    AIS_GraphicTool_GetLineColor_2(aDrawer,TheTypeOfAttributes,TheLineColor);
}

private static native void AIS_GraphicTool_GetLineColor_2(Prs3d_Drawer aDrawer,short TheTypeOfAttributes,Quantity_Color TheLineColor);

native public static double GetLineWidth(Prs3d_Drawer aDrawer,short TheTypeOfAttributes);
native public static short GetLineType(Prs3d_Drawer aDrawer,short TheTypeOfAttributes);
native public static void GetLineAtt(Prs3d_Drawer aDrawer,short TheTypeOfAttributes,Standard_Short aCol,Standard_Real aWidth,Standard_Short aTyp);
static public short GetInteriorColor(Prs3d_Drawer aDrawer) {
   return AIS_GraphicTool_GetInteriorColor_1(aDrawer);
}

private static native short AIS_GraphicTool_GetInteriorColor_1(Prs3d_Drawer aDrawer);

static public void GetInteriorColor(Prs3d_Drawer aDrawer,Quantity_Color aColor) {
    AIS_GraphicTool_GetInteriorColor_2(aDrawer,aColor);
}

private static native void AIS_GraphicTool_GetInteriorColor_2(Prs3d_Drawer aDrawer,Quantity_Color aColor);

native public static Graphic3d_MaterialAspect GetMaterial(Prs3d_Drawer aDrawer);
public AIS_GraphicTool() {
}



public native static void FinalizeValue(long anHID);

public void finalize() {
   synchronized(myCasLock) {
     if ( aVirer != 0 ) FinalizeValue(HID);
     HID = 0;
   }
}

}
