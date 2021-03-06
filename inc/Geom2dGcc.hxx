// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_HeaderFile
#define _Geom2dGcc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Geom2dGcc_QualifiedCurve;
class Geom2dAdaptor_Curve;
class Geom2dGcc_CurveTool;
class Geom2dGcc_QualifiedCurve;
class Geom2dGcc_Circ2d3Tan;
class Geom2dGcc_Circ2d2TanRad;
class Geom2dGcc_Circ2d2TanOn;
class Geom2dGcc_Circ2dTanOnRad;
class Geom2dGcc_Circ2dTanCen;
class Geom2dGcc_Lin2d2Tan;
class Geom2dGcc_Lin2dTanObl;
class Geom2dGcc_MyQCurve;
class Geom2dGcc_MyCurveTool;
class Geom2dGcc_MyCirc2d2TanOn;
class Geom2dGcc_MyCirc2d2TanRad;
class Geom2dGcc_MyCirc2dTanOnRad;
class Geom2dGcc_MyC2d3Tan;
class Geom2dGcc_MyCirc2dTanCen;
class Geom2dGcc_MyC2d2TanOn;
class Geom2dGcc_MyL2dTanObl;
class Geom2dGcc_MyL2d2Tan;
class Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan;
class Geom2dGcc_FuncTCuCuOnCuOfMyC2d2TanOn;
class Geom2dGcc_FuncTOblOfMyL2dTanObl;
class Geom2dGcc_FuncTCuCuOfMyL2d2Tan;
class Geom2dGcc_FuncTCuPtOfMyL2d2Tan;
class Geom2dGcc_FuncTCirCuOfMyL2d2Tan;


//! The Geom2dGcc package describes qualified 2D <br>
//! curves used in the construction of constrained geometric <br>
//! objects by an algorithm provided by the Geom2dGcc package. <br>
//! A qualified 2D curve is a curve with a qualifier which <br>
//! specifies whether the solution of a construction <br>
//! algorithm using the qualified curve (as an argument): <br>
//! -   encloses the curve, or <br>
//! -   is enclosed by the curve, or <br>
//! -   is built so that both the curve and this solution are external to one another, or <br>
//! -   is undefined (all solutions apply). <br>
//! These package methods provide simpler functions to construct a qualified curve. <br>
//! Note: the interior of a curve is defined as the left-hand <br>
//! side of the curve in relation to its orientation. <br>
class Geom2dGcc  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Constructs such a qualified curve that the relative <br>
//! position of the solution computed by a construction <br>
//! algorithm using the qualified curve to the circle or line is <br>
//! not qualified, i.e. all solutions apply. <br>
//! Warning <br>
//! Obj is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//!  The adapted curve is created in the following way: <br>
//! Handle(Geom2d_Curve) mycurve = ... <br>
//! ; <br>
//! Geom2dAdaptor_Curve Obj ( mycurve ) <br>
//! ; <br>
//! The qualified curve is then constructed with this object: <br>
//! Geom2dGcc_QualifiedCurve <br>
//! myQCurve = Geom2dGcc::Unqualified(Obj); <br>
  Standard_EXPORT   static  Geom2dGcc_QualifiedCurve Unqualified(const Geom2dAdaptor_Curve& Obj) ;
  //! Constructs such a qualified curve that the solution <br>
//! computed by a construction algorithm using the qualified <br>
//! curve encloses the curve. <br>
//! Warning <br>
//! Obj is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//! The adapted curve is created in the following way: <br>
//! Handle(Geom2d_Curve) mycurve = ... <br>
//! ; <br>
//! Geom2dAdaptor_Curve Obj ( mycurve ) <br>
//! ; <br>
//! The qualified curve is then constructed with this object: <br>
//! Geom2dGcc_QualifiedCurve <br>
//!              myQCurve = Geom2dGcc::Enclosing(Obj); <br>
  Standard_EXPORT   static  Geom2dGcc_QualifiedCurve Enclosing(const Geom2dAdaptor_Curve& Obj) ;
  //! Constructs such a qualified curve that the solution <br>
//! computed by a construction algorithm using the qualified <br>
//! curve is enclosed by the curve. <br>
//! Warning <br>
//! Obj is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//! The adapted curve is created in the following way: <br>
//! Handle(Geom2d_Curve) mycurve = ... <br>
//! ; <br>
//! Geom2dAdaptor_Curve Obj ( mycurve ) <br>
//! ; <br>
//! The qualified curve is then constructed with this object: <br>
//! Geom2dGcc_QualifiedCurve <br>
//!              myQCurve = Geom2dGcc::Enclosed(Obj); <br>
  Standard_EXPORT   static  Geom2dGcc_QualifiedCurve Enclosed(const Geom2dAdaptor_Curve& Obj) ;
  //! Constructs such a qualified curve that the solution <br>
//! computed by a construction algorithm using the qualified <br>
//! curve and the curve are external to one another. <br>
//! Warning <br>
//! Obj is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//! The adapted curve is created in the following way: <br>
//! Handle(Geom2d_Curve) mycurve = ... <br>
//! ; <br>
//! Geom2dAdaptor_Curve Obj ( mycurve ) <br>
//! ; <br>
//! The qualified curve is then constructed with this object: <br>
//! Geom2dGcc_QualifiedCurve <br>
//!              myQCurve = Geom2dGcc::Outside(Obj); <br>
  Standard_EXPORT   static  Geom2dGcc_QualifiedCurve Outside(const Geom2dAdaptor_Curve& Obj) ;





protected:





private:




friend class Geom2dGcc_CurveTool;
friend class Geom2dGcc_QualifiedCurve;
friend class Geom2dGcc_Circ2d3Tan;
friend class Geom2dGcc_Circ2d2TanRad;
friend class Geom2dGcc_Circ2d2TanOn;
friend class Geom2dGcc_Circ2dTanOnRad;
friend class Geom2dGcc_Circ2dTanCen;
friend class Geom2dGcc_Lin2d2Tan;
friend class Geom2dGcc_Lin2dTanObl;
friend class Geom2dGcc_MyQCurve;
friend class Geom2dGcc_MyCurveTool;
friend class Geom2dGcc_MyCirc2d2TanOn;
friend class Geom2dGcc_MyCirc2d2TanRad;
friend class Geom2dGcc_MyCirc2dTanOnRad;
friend class Geom2dGcc_MyC2d3Tan;
friend class Geom2dGcc_MyCirc2dTanCen;
friend class Geom2dGcc_MyC2d2TanOn;
friend class Geom2dGcc_MyL2dTanObl;
friend class Geom2dGcc_MyL2d2Tan;
friend class Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan;
friend class Geom2dGcc_FuncTCuCuOnCuOfMyC2d2TanOn;
friend class Geom2dGcc_FuncTOblOfMyL2dTanObl;
friend class Geom2dGcc_FuncTCuCuOfMyL2d2Tan;
friend class Geom2dGcc_FuncTCuPtOfMyL2d2Tan;
friend class Geom2dGcc_FuncTCirCuOfMyL2d2Tan;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
