// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HSequenceOfSurfaceElementPurposeMember_HeaderFile
#define _StepElement_HSequenceOfSurfaceElementPurposeMember_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_HSequenceOfSurfaceElementPurposeMember.hxx>

#include <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_StepElement_SurfaceElementPurposeMember.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepElement_SurfaceElementPurposeMember;
class StepElement_SequenceOfSurfaceElementPurposeMember;



class StepElement_HSequenceOfSurfaceElementPurposeMember : public MMgt_TShared
{

public:

  
    StepElement_HSequenceOfSurfaceElementPurposeMember();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_SurfaceElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_HSequenceOfSurfaceElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_SurfaceElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_HSequenceOfSurfaceElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_SurfaceElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfSurfaceElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_SurfaceElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfSurfaceElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(StepElement_HSequenceOfSurfaceElementPurposeMember) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(StepElement_SurfaceElementPurposeMember)& anItem) ;
  
  Standard_EXPORT  const  Handle(StepElement_SurfaceElementPurposeMember)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(StepElement_SurfaceElementPurposeMember)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  StepElement_SequenceOfSurfaceElementPurposeMember& Sequence()  const;
  
      StepElement_SequenceOfSurfaceElementPurposeMember& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(StepElement_HSequenceOfSurfaceElementPurposeMember)

protected:




private: 


  StepElement_SequenceOfSurfaceElementPurposeMember mySequence;


};

#define Item Handle(StepElement_SurfaceElementPurposeMember)
#define Item_hxx <StepElement_SurfaceElementPurposeMember.hxx>
#define TheSequence StepElement_SequenceOfSurfaceElementPurposeMember
#define TheSequence_hxx <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>
#define TCollection_HSequence StepElement_HSequenceOfSurfaceElementPurposeMember
#define TCollection_HSequence_hxx <StepElement_HSequenceOfSurfaceElementPurposeMember.hxx>
#define Handle_TCollection_HSequence Handle_StepElement_HSequenceOfSurfaceElementPurposeMember
#define TCollection_HSequence_Type_() StepElement_HSequenceOfSurfaceElementPurposeMember_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _StepElement_HSequenceOfSurfaceElementPurposeMember_HeaderFile
