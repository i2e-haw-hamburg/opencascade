// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Iterator_HeaderFile
#define _TNaming_Iterator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TNaming_PtrNode.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TNaming_NamedShape.hxx>
#include <Standard_Boolean.hxx>
#include <TNaming_Evolution.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TNaming_NewShapeIterator;
class TNaming_OldShapeIterator;
class TNaming_NamedShape;
class TDF_Label;
class TopoDS_Shape;


//! A tool to visit the contents of a named shape attribute.
//! Pairs of shapes in the attribute are iterated, one
//! being the pre-modification or the old shape, and
//! the other the post-modification or the new shape.
//! This allows you to have a full access to all
//! contents of an attribute. If, on the other hand, you
//! are only interested in topological entities stored
//! in the attribute, you can use the functions
//! GetShape and CurrentShape in TNaming_Tool.
class TNaming_Iterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Iterates on all  the history records in
  //! <anAtt>.
  Standard_EXPORT TNaming_Iterator(const Handle(TNaming_NamedShape)& anAtt);
  
  //! Iterates on all  the history records in
  //! the current transaction
  Standard_EXPORT TNaming_Iterator(const TDF_Label& aLabel);
  
  //! Iterates on all  the history records in
  //! the transaction <aTrans>
  Standard_EXPORT TNaming_Iterator(const TDF_Label& aLabel, const Standard_Integer aTrans);
  
  //! Returns True if there is a current Item in
  //! the iteration.
      Standard_Boolean More()  const;
  
  //! Moves the iteration to the next Item
  Standard_EXPORT   void Next() ;
  
  //! Returns the old shape in this iterator object.
  //! This shape can be a null one.
  Standard_EXPORT  const  TopoDS_Shape& OldShape()  const;
  
  //! Returns the new shape in this iterator object.
  Standard_EXPORT  const  TopoDS_Shape& NewShape()  const;
  
  //! Returns true if the  new  shape is a modification  (split,
  //! fuse,etc...) of the old shape.
  Standard_EXPORT   Standard_Boolean IsModification()  const;
  
  Standard_EXPORT   TNaming_Evolution Evolution()  const;


friend class TNaming_NewShapeIterator;
friend class TNaming_OldShapeIterator;


protected:





private:



  TNaming_PtrNode myNode;
  Standard_Integer myTrans;


};


#include <TNaming_Iterator.lxx>





#endif // _TNaming_Iterator_HeaderFile