// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.


package jjAIS;

import jjAIS.gp_Pnt;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Boolean;
import jjAIS.TopoDS_Edge;
import jjAIS.Geom_Curve;
import jjAIS.Geom_Plane;
import jcas.Standard_Integer;
import jcas.Standard_Real;
import jjAIS.TopoDS_Vertex;
import jjAIS.TopoDS_Face;
import jjAIS.gp_Pln;
import jjAIS.Geom_Surface;
import jjAIS.AIS_KindOfSurface;
import jcas.Standard_Short;
import jjAIS.gp_Dir;
import jjAIS.gp_Ax1;
import jjAIS.gp_Lin;
import jjAIS.Bnd_Box;
import jjAIS.gp_Elips;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_Drawer;
import jjAIS.Quantity_NameOfColor;
import jjAIS.Aspect_TypeOfLine;
import jjAIS.Aspect_TypeOfMarker;


public class AIS {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public static gp_Pnt Nearest(TopoDS_Shape aShape,gp_Pnt aPoint);
native public static gp_Pnt Farest(TopoDS_Shape aShape,gp_Pnt aPoint);
static public boolean ComputeGeometry(TopoDS_Edge anEdge,Geom_Curve aCurve,gp_Pnt FirstPnt,gp_Pnt LastPnt) {
   return AIS_ComputeGeometry_1(anEdge,aCurve,FirstPnt,LastPnt);
}

private static native boolean AIS_ComputeGeometry_1(TopoDS_Edge anEdge,Geom_Curve aCurve,gp_Pnt FirstPnt,gp_Pnt LastPnt);

static public boolean ComputeGeometry(TopoDS_Edge anEdge,Geom_Curve aCurve,gp_Pnt FirstPnt,gp_Pnt LastPnt,Geom_Curve extCurve,Standard_Boolean isinfinite,Standard_Boolean isOnPlane,Geom_Plane aPlane) {
   return AIS_ComputeGeometry_2(anEdge,aCurve,FirstPnt,LastPnt,extCurve,isinfinite,isOnPlane,aPlane);
}

private static native boolean AIS_ComputeGeometry_2(TopoDS_Edge anEdge,Geom_Curve aCurve,gp_Pnt FirstPnt,gp_Pnt LastPnt,Geom_Curve extCurve,Standard_Boolean isinfinite,Standard_Boolean isOnPlane,Geom_Plane aPlane);

static public boolean ComputeGeometry(TopoDS_Edge anEdge1,TopoDS_Edge anEdge2,Geom_Curve aCurve1,Geom_Curve aCurve2,gp_Pnt FirstPnt1,gp_Pnt LastPnt1,gp_Pnt FirstPnt2,gp_Pnt LastPnt2,Geom_Plane aPlane) {
   return AIS_ComputeGeometry_3(anEdge1,anEdge2,aCurve1,aCurve2,FirstPnt1,LastPnt1,FirstPnt2,LastPnt2,aPlane);
}

private static native boolean AIS_ComputeGeometry_3(TopoDS_Edge anEdge1,TopoDS_Edge anEdge2,Geom_Curve aCurve1,Geom_Curve aCurve2,gp_Pnt FirstPnt1,gp_Pnt LastPnt1,gp_Pnt FirstPnt2,gp_Pnt LastPnt2,Geom_Plane aPlane);

static public boolean ComputeGeometry(TopoDS_Edge anEdge1,TopoDS_Edge anEdge2,Standard_Integer indexExt,Geom_Curve aCurve1,Geom_Curve aCurve2,gp_Pnt FirstPnt1,gp_Pnt LastPnt1,gp_Pnt FirstPnt2,gp_Pnt LastPnt2,Geom_Curve ExtCurve,Standard_Boolean isinfinite1,Standard_Boolean isinfinite2,Geom_Plane aPlane) {
   return AIS_ComputeGeometry_4(anEdge1,anEdge2,indexExt,aCurve1,aCurve2,FirstPnt1,LastPnt1,FirstPnt2,LastPnt2,ExtCurve,isinfinite1,isinfinite2,aPlane);
}

private static native boolean AIS_ComputeGeometry_4(TopoDS_Edge anEdge1,TopoDS_Edge anEdge2,Standard_Integer indexExt,Geom_Curve aCurve1,Geom_Curve aCurve2,gp_Pnt FirstPnt1,gp_Pnt LastPnt1,gp_Pnt FirstPnt2,gp_Pnt LastPnt2,Geom_Curve ExtCurve,Standard_Boolean isinfinite1,Standard_Boolean isinfinite2,Geom_Plane aPlane);

native public static boolean ComputeGeomCurve(Geom_Curve aCurve,double first1,double last1,gp_Pnt FirstPnt1,gp_Pnt LastPnt1,Geom_Plane aPlane,Standard_Boolean isOnPlane);
static public boolean ComputeGeometry(TopoDS_Vertex aVertex,gp_Pnt point,Geom_Plane aPlane,Standard_Boolean isOnPlane) {
   return AIS_ComputeGeometry_5(aVertex,point,aPlane,isOnPlane);
}

private static native boolean AIS_ComputeGeometry_5(TopoDS_Vertex aVertex,gp_Pnt point,Geom_Plane aPlane,Standard_Boolean isOnPlane);

native public static boolean GetPlaneFromFace(TopoDS_Face aFace,gp_Pln aPlane,Geom_Surface aSurf,Standard_Short aSurfType,Standard_Real Offset);
native public static void InitFaceLength(TopoDS_Face aFace,gp_Pln aPlane,Geom_Surface aSurface,Standard_Short aSurfaceType,Standard_Real anOffset);
native public static void ComputeLengthBetweenPlanarFaces(TopoDS_Face FirstFace,TopoDS_Face SecondFace,gp_Pln Plane1,gp_Pln Plane2,Standard_Real Value,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Dir DirAttach,boolean AutomaticPos,gp_Pnt Position);
native public static void ComputeLengthBetweenCurvilinearFaces(TopoDS_Face FirstFace,TopoDS_Face SecondFace,Geom_Surface FirstSurf,Geom_Surface SecondSurf,boolean AutomaticPos,Standard_Real Value,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Dir DirAttach);
native public static void ComputeAngleBetweenPlanarFaces(TopoDS_Face FirstFace,TopoDS_Face SecondFace,Geom_Surface Surf2,gp_Ax1 Axis,double Value,boolean AutomaticPos,gp_Pnt Position,gp_Pnt Center,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Dir FirstDir,gp_Dir SecondDir);
native public static void ComputeAngleBetweenCurvilinearFaces(TopoDS_Face FirstFace,TopoDS_Face SecondFace,Geom_Surface FirstSurf,Geom_Surface SecondSurf,short FirstSurfType,short SecondSurfType,gp_Ax1 Axis,double Value,boolean AutomaticPos,gp_Pnt Position,gp_Pnt Center,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Dir FirstDir,gp_Dir SecondDir,Geom_Plane Plane);
native public static gp_Pnt ProjectPointOnPlane(gp_Pnt aPoint,gp_Pln aPlane);
native public static gp_Pnt ProjectPointOnLine(gp_Pnt aPoint,gp_Lin aLine);
native public static gp_Pnt TranslatePointToBound(gp_Pnt aPoint,gp_Dir aDir,Bnd_Box aBndBox);
native public static boolean InDomain(double aFirstPar,double aLastPar,double anAttachPar);
native public static gp_Pnt NearestApex(gp_Elips elips,gp_Pnt pApex,gp_Pnt nApex,double fpara,double lpara,Standard_Boolean IsInDomain);
native public static double DistanceFromApex(gp_Elips elips,gp_Pnt Apex,double par);
native public static void ComputeProjEdgePresentation(Prs3d_Presentation aPres,AIS_Drawer aDrawer,TopoDS_Edge anEdge,Geom_Curve ProjCurve,gp_Pnt FirstP,gp_Pnt LastP,short aColor,double aWidth,short aProjTOL,short aCallTOL);
native public static void ComputeProjVertexPresentation(Prs3d_Presentation aPres,AIS_Drawer aDrawer,TopoDS_Vertex aVertex,gp_Pnt ProjPoint,short aColor,double aWidth,short aProjTOM,short aCallTOL);



}
