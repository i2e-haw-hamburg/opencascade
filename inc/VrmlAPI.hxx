// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlAPI_HeaderFile
#define _VrmlAPI_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_CString.hxx>
#include <Standard_Integer.hxx>
class TopoDS_Shape;
class VrmlAPI_Writer;


//! API for writing to VRML 1.0
class VrmlAPI 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! With help of this class user can change parameters of writing.
  //! Converts the shape aShape to VRML format of the passed version and writes it
  //! to the file identified by aFileName using default parameters.
  Standard_EXPORT static   void Write (const TopoDS_Shape& aShape, const Standard_CString aFileName, const Standard_Integer aVersion = 2) ;




protected:





private:




friend class VrmlAPI_Writer;

};







#endif // _VrmlAPI_HeaderFile
