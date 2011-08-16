// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_DispPerSingleView_HeaderFile
#define _IGESSelect_DispPerSingleView_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_DispPerSingleView_HeaderFile
#include <Handle_IGESSelect_DispPerSingleView.hxx>
#endif

#ifndef _Handle_IGESSelect_ViewSorter_HeaderFile
#include <Handle_IGESSelect_ViewSorter.hxx>
#endif
#ifndef _IFSelect_Dispatch_HeaderFile
#include <IFSelect_Dispatch.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESSelect_ViewSorter;
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;
class Interface_EntityIterator;


//! This type of dispatch defines sets of entities attached to <br>
//!           distinct single views. This information appears in the <br>
//!           Directory Part. Drawings are taken into account too, <br>
//!           because of their frames (proper lists of annotations) <br>
//! <br>
//!           Remaining data concern entities not attached to a single view. <br>
class IGESSelect_DispPerSingleView : public IFSelect_Dispatch {

public:

  //! Creates a DispPerSingleView <br>
  Standard_EXPORT   IGESSelect_DispPerSingleView();
  //! Returns as Label, "One File per single View or Drawing Frame" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;
  //! Computes the list of produced Packets. Packets are computed <br>
//!           by a ViewSorter (SortSingleViews with also frames). <br>
  Standard_EXPORT     void Packets(const Interface_Graph& G,IFGraph_SubPartsIterator& packs) const;
  //! Returns True, because of entities attached to no view. <br>
  Standard_EXPORT   virtual  Standard_Boolean CanHaveRemainder() const;
  //! Returns Remainder which is a set of Entities. <br>
//!           It is supposed to be called once Packets has been called. <br>
  Standard_EXPORT   virtual  Interface_EntityIterator Remainder(const Interface_Graph& G) const;




  DEFINE_STANDARD_RTTI(IGESSelect_DispPerSingleView)

protected:




private: 


Handle_IGESSelect_ViewSorter thesorter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif