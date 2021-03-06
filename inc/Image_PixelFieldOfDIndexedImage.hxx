// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_PixelFieldOfDIndexedImage_HeaderFile
#define _Image_PixelFieldOfDIndexedImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
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
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Aspect_IndexPixel;



class Image_PixelFieldOfDIndexedImage  {
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

  
  Standard_EXPORT   Image_PixelFieldOfDIndexedImage(const Standard_Integer Width,const Standard_Integer Height);
  
  Standard_EXPORT   Image_PixelFieldOfDIndexedImage(const Standard_Integer Width,const Standard_Integer Height,const Aspect_IndexPixel& V);
  
  Standard_EXPORT     void Destroy() ;
~Image_PixelFieldOfDIndexedImage()
{
  Destroy();
}
  
        Standard_Integer Width() const;
  
        Standard_Integer Height() const;
  
        Standard_Integer UpperX() const;
  
        Standard_Integer UpperY() const;
  
        void SetValue(const Standard_Integer X,const Standard_Integer Y,const Aspect_IndexPixel& Value) ;
  
       const Aspect_IndexPixel& Value(const Standard_Integer X,const Standard_Integer Y) const;
     const Aspect_IndexPixel& operator()(const Standard_Integer X,const Standard_Integer Y) const
{
  return Value(X,Y);
}
  
        Aspect_IndexPixel& ChangeValue(const Standard_Integer X,const Standard_Integer Y) ;
      Aspect_IndexPixel& operator()(const Standard_Integer X,const Standard_Integer Y) 
{
  return ChangeValue(X,Y);
}





protected:





private:



Standard_Integer myWidth;
Standard_Integer myHeight;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Item Aspect_IndexPixel
#define Item_hxx <Aspect_IndexPixel.hxx>
#define Image_GPixelField Image_PixelFieldOfDIndexedImage
#define Image_GPixelField_hxx <Image_PixelFieldOfDIndexedImage.hxx>

#include <Image_GPixelField.lxx>

#undef Item
#undef Item_hxx
#undef Image_GPixelField
#undef Image_GPixelField_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
