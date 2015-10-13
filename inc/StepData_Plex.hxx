// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_Plex_HeaderFile
#define _StepData_Plex_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepData_Plex.hxx>

#include <TColStd_SequenceOfTransient.hxx>
#include <StepData_Described.hxx>
#include <Handle_StepData_ECDescr.hxx>
#include <Handle_StepData_Simple.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#include <Handle_Interface_Check.hxx>
class Interface_InterfaceMismatch;
class StepData_ECDescr;
class StepData_Simple;
class StepData_Field;
class TColStd_HSequenceOfAsciiString;
class Interface_Check;
class Interface_EntityIterator;


//! A Plex (for Complex) Entity is defined as a list of Simple
//! Members ("external mapping")
//! The types of these members must be in alphabetic order
class StepData_Plex : public StepData_Described
{

public:

  
  //! Creates a Plex (empty). The complete creation is made by the
  //! ECDescr itself, by calling Add
  Standard_EXPORT StepData_Plex(const Handle(StepData_ECDescr)& descr);
  
  //! Adds a member to <me>
  Standard_EXPORT   void Add (const Handle(StepData_Simple)& member) ;
  
  //! Returns the Description as for a Plex
  Standard_EXPORT   Handle(StepData_ECDescr) ECDescr()  const;
  
  //! Returns False
  Standard_EXPORT   Standard_Boolean IsComplex()  const;
  
  //! Tells if a step type is matched by <me>
  //! For a Simple Entity : own type or super type
  //! For a Complex Entity : one of the members
  Standard_EXPORT   Standard_Boolean Matches (const Standard_CString steptype)  const;
  
  //! Returns a Simple Entity which matches with a Type in <me> :
  //! For a Simple Entity : me if it matches, else a null handle
  //! For a Complex Entity : the member which matches, else null
  Standard_EXPORT   Handle(StepData_Simple) As (const Standard_CString steptype)  const;
  
  //! Tells if a Field brings a given name
  Standard_EXPORT   Standard_Boolean HasField (const Standard_CString name)  const;
  
  //! Returns a Field from its name; read-only
  Standard_EXPORT  const  StepData_Field& Field (const Standard_CString name)  const;
  
  //! Returns a Field from its name; read or write
  Standard_EXPORT   StepData_Field& CField (const Standard_CString name) ;
  
  //! Returns the count of simple members
  Standard_EXPORT   Standard_Integer NbMembers()  const;
  
  //! Returns a simple member from its rank
  Standard_EXPORT   Handle(StepData_Simple) Member (const Standard_Integer num)  const;
  
  //! Returns the actual list of members types
  Standard_EXPORT   Handle(TColStd_HSequenceOfAsciiString) TypeList()  const;
  
  //! Fills a Check by using its Description
  Standard_EXPORT   void Check (Handle(Interface_Check)& ach)  const;
  
  //! Fills an EntityIterator with entities shared by <me>
  Standard_EXPORT   void Shared (Interface_EntityIterator& list)  const;




  DEFINE_STANDARD_RTTI(StepData_Plex)

protected:




private: 


  TColStd_SequenceOfTransient themembers;


};







#endif // _StepData_Plex_HeaderFile
