// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_PointOnHatching_HeaderFile
#define _HatchGen_PointOnHatching_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <HatchGen_PointsOnElement.hxx>
#include <HatchGen_IntersectionPoint.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_OutOfRange;
class IntRes2d_IntersectionPoint;
class HatchGen_PointOnElement;



class HatchGen_PointOnHatching  : public HatchGen_IntersectionPoint
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty point.
  Standard_EXPORT HatchGen_PointOnHatching();
  
  //! Creates a point from an other.
  Standard_EXPORT HatchGen_PointOnHatching(const HatchGen_PointOnHatching& Point);
  
  //! Creates a point from an intersection point.
  Standard_EXPORT HatchGen_PointOnHatching(const IntRes2d_IntersectionPoint& Point);
  
  //! Adds a point on element to the point.
  Standard_EXPORT   void AddPoint (const HatchGen_PointOnElement& Point, const Standard_Real Confusion) ;
  
  //! Returns the number of elements intersecting the
  //! hatching at this point.
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  //! Returns the Index-th point on element of the point.
  //! The exception OutOfRange is raised if
  //! Index > NbPoints.
  Standard_EXPORT  const  HatchGen_PointOnElement& Point (const Standard_Integer Index)  const;
  
  //! Removes the Index-th point on element of the point.
  //! The exception OutOfRange is raised if
  //! Index > NbPoints.
  Standard_EXPORT   void RemPoint (const Standard_Integer Index) ;
  
  //! Removes all the points on element of the point.
  Standard_EXPORT   void ClrPoints() ;
  
  //! Tests if the point is lower than an other.
  //! A point on hatching P1 is said to be lower than an
  //! other P2 if :
  //! P2.myParam - P1.myParam > Confusion
  Standard_EXPORT   Standard_Boolean IsLower (const HatchGen_PointOnHatching& Point, const Standard_Real Confusion)  const;
  
  //! Tests if the  point is equal to an other.
  //! A  point on hatching P1 is said to be equal to an
  //! other P2 if :
  //! | P2.myParam - P1.myParam | <= Confusion
  Standard_EXPORT   Standard_Boolean IsEqual (const HatchGen_PointOnHatching& Point, const Standard_Real Confusion)  const;
  
  //! Tests if the point is greater than an other.
  //! A point on hatching P1 is said to be greater than an
  //! other P2 if :
  //! P1.myParam - P2.myParam > Confusion
  Standard_EXPORT   Standard_Boolean IsGreater (const HatchGen_PointOnHatching& Point, const Standard_Real Confusion)  const;
  
  //! Dump of the point.
  Standard_EXPORT   void Dump (const Standard_Integer Index = 0)  const;




protected:



  HatchGen_PointsOnElement myPoints;


private:





};







#endif // _HatchGen_PointOnHatching_HeaderFile