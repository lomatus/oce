// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Iterator_HeaderFile
#define _TopoDS_Iterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopoDS_ListIteratorOfListOfShape_HeaderFile
#include <TopoDS_ListIteratorOfListOfShape.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopoDS_Shape;


//! Iterates on the underlying shape underlying a given <br>
//! TopoDS_Shape object, providing access to its <br>
//! component sub-shapes. Each component shape is <br>
//! returned as a TopoDS_Shape with an orientation, <br>
//! and a compound of the original values and the relative values. <br>
class TopoDS_Iterator  {
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
  void operator delete (void *,void*)
  {

  }

  //! Creates an empty Iterator. <br>
      TopoDS_Iterator();
  //! Creates an Iterator on <S> sub-shapes. <br>
//!      Note: <br>
//! - If cumOri is true, the function composes all <br>
//!   sub-shapes with the orientation of S. <br>
//! - If cumLoc is true, the function multiplies all <br>
//!   sub-shapes by the location of S, i.e. it applies to <br>
//!   each sub-shape the transformation that is associated with S. <br>
      TopoDS_Iterator(const TopoDS_Shape& S,const Standard_Boolean cumOri = Standard_True,const Standard_Boolean cumLoc = Standard_True);
  //! Initializes this iterator with shape S. <br>
//! Note: <br>
//! - If cumOri is true, the function composes all <br>
//!   sub-shapes with the orientation of S. <br>
//! - If cumLoc is true, the function multiplies all <br>
//!   sub-shapes by the location of S, i.e. it applies to <br>
//!   each sub-shape the transformation that is associated with S. <br>
  Standard_EXPORT     void Initialize(const TopoDS_Shape& S,const Standard_Boolean cumOri = Standard_True,const Standard_Boolean cumLoc = Standard_True) ;
  //! Returns true if there is another sub-shape in the <br>
//! shape which this iterator is scanning. <br>
        Standard_Boolean More() const;
  //! Moves on to the next sub-shape in the shape which <br>
//! this iterator is scanning. <br>
//! Exceptions <br>
//! Standard_NoMoreObject if there are no more sub-shapes in the shape. <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current sub-shape in the shape which <br>
//! this iterator is scanning. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if there is no current sub-shape. <br>
       const TopoDS_Shape& Value() const;





protected:





private:



TopoDS_Shape myShape;
TopoDS_ListIteratorOfListOfShape myShapes;
TopAbs_Orientation myOrientation;
TopLoc_Location myLocation;


};


#include <TopoDS_Iterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
