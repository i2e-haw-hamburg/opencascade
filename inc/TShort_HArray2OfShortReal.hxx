// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TShort_HArray2OfShortReal_HeaderFile
#define _TShort_HArray2OfShortReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TShort_HArray2OfShortReal.hxx>

#include <TShort_Array2OfShortReal.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TShort_Array2OfShortReal;



class TShort_HArray2OfShortReal : public MMgt_TShared
{

public:

  
    TShort_HArray2OfShortReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TShort_HArray2OfShortReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Standard_ShortReal& V);
  
      void Init (const Standard_ShortReal& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_ShortReal& Value) ;
  
     const  Standard_ShortReal& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Standard_ShortReal& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TShort_Array2OfShortReal& Array2()  const;
  
      TShort_Array2OfShortReal& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TShort_HArray2OfShortReal)

protected:




private: 


  TShort_Array2OfShortReal myArray;


};

#define ItemHArray2 Standard_ShortReal
#define ItemHArray2_hxx <Standard_ShortReal.hxx>
#define TheArray2 TShort_Array2OfShortReal
#define TheArray2_hxx <TShort_Array2OfShortReal.hxx>
#define TCollection_HArray2 TShort_HArray2OfShortReal
#define TCollection_HArray2_hxx <TShort_HArray2OfShortReal.hxx>
#define Handle_TCollection_HArray2 Handle_TShort_HArray2OfShortReal
#define TCollection_HArray2_Type_() TShort_HArray2OfShortReal_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TShort_HArray2OfShortReal_HeaderFile
