// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayNodeOfFieldOfHArray1OfInteger_HeaderFile
#define _PColStd_VArrayNodeOfFieldOfHArray1OfInteger_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_VArrayNodeOfFieldOfHArray1OfInteger_HeaderFile
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfInteger.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PColStd_FieldOfHArray1OfInteger;
class PColStd_VArrayTNodeOfFieldOfHArray1OfInteger;


class PColStd_VArrayNodeOfFieldOfHArray1OfInteger : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray1OfInteger();
  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray1OfInteger(const Standard_Integer& aValue);
  
  Standard_EXPORT     void SetValue(const Standard_Integer& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColStd_VArrayNodeOfFieldOfHArray1OfInteger(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_VArrayNodeOfFieldOfHArray1OfIntegermyValue() const { return myValue; }
    void _CSFDB_SetPColStd_VArrayNodeOfFieldOfHArray1OfIntegermyValue(const Standard_Integer p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColStd_VArrayNodeOfFieldOfHArray1OfInteger)

protected:




private: 


Standard_Integer myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif