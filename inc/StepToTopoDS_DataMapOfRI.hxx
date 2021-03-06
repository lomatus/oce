// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapOfRI_HeaderFile
#define _StepToTopoDS_DataMapOfRI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_StepToTopoDS_DataMapNodeOfDataMapOfRI_HeaderFile
#include <Handle_StepToTopoDS_DataMapNodeOfDataMapOfRI.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class StepRepr_RepresentationItem;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class StepToTopoDS_DataMapNodeOfDataMapOfRI;
class StepToTopoDS_DataMapIteratorOfDataMapOfRI;



class StepToTopoDS_DataMapOfRI  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   StepToTopoDS_DataMapOfRI(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     StepToTopoDS_DataMapOfRI& Assign(const StepToTopoDS_DataMapOfRI& Other) ;
    StepToTopoDS_DataMapOfRI& operator =(const StepToTopoDS_DataMapOfRI& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~StepToTopoDS_DataMapOfRI()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(StepRepr_RepresentationItem)& K,const TopoDS_Shape& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(StepRepr_RepresentationItem)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(StepRepr_RepresentationItem)& K) ;
  
  Standard_EXPORT    const TopoDS_Shape& Find(const Handle(StepRepr_RepresentationItem)& K) const;
   const TopoDS_Shape& operator()(const Handle(StepRepr_RepresentationItem)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopoDS_Shape& ChangeFind(const Handle(StepRepr_RepresentationItem)& K) ;
    TopoDS_Shape& operator()(const Handle(StepRepr_RepresentationItem)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Handle(StepRepr_RepresentationItem)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Handle(StepRepr_RepresentationItem)& K) ;





protected:





private:

  
  Standard_EXPORT   StepToTopoDS_DataMapOfRI(const StepToTopoDS_DataMapOfRI& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
