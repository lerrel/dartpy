#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect>, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::Virtual<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect> >, dart::common::Virtual<dart::common::SpecializedForAspect<dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> > > > >("SpecializedForAspect_VisualAspect_DynamicsAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> * { return new dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
