#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics15DegreeOfFreedomE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::DegreeOfFreedom, ::boost::noncopyable, dart::dynamics::DegreeOfFreedomPtr, ::boost::python::bases<dart::common::Subject > >("DegreeOfFreedom", boost::python::no_init)
.def("setName", static_cast<const std::string &(dart::dynamics::DegreeOfFreedom::*)(const std::string &, bool)>(&dart::dynamics::DegreeOfFreedom::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("getName", static_cast<const std::string &(dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("preserveName", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(bool)>(&dart::dynamics::DegreeOfFreedom::preserveName), (::boost::python::arg("_preserve")))
.def("isNamePreserved", static_cast<bool (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::isNamePreserved))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getIndexInSkeleton))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getIndexInTree))
.def("getIndexInJoint", static_cast<std::size_t (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getIndexInJoint))
.def("getTreeIndex", static_cast<std::size_t (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getTreeIndex))
.def("setCommand", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setCommand), (::boost::python::arg("_command")))
.def("getCommand", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getCommand))
.def("resetCommand", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetCommand))
.def("setPosition", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setPosition), (::boost::python::arg("_position")))
.def("getPosition", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getPosition))
.def("setPositionLimits", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double, double)>(&dart::dynamics::DegreeOfFreedom::setPositionLimits), (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("getPositionLimits", static_cast<std::pair<double, double> (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getPositionLimits))
.def("setPositionLowerLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setPositionLowerLimit), (::boost::python::arg("_limit")))
.def("getPositionLowerLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getPositionLowerLimit))
.def("setPositionUpperLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setPositionUpperLimit), (::boost::python::arg("_limit")))
.def("getPositionUpperLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getPositionUpperLimit))
.def("isCyclic", static_cast<bool (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::isCyclic))
.def("hasPositionLimit", static_cast<bool (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::hasPositionLimit))
.def("resetPosition", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetPosition))
.def("setInitialPosition", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setInitialPosition), (::boost::python::arg("_initial")))
.def("getInitialPosition", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getInitialPosition))
.def("setVelocity", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setVelocity), (::boost::python::arg("_velocity")))
.def("getVelocity", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getVelocity))
.def("setVelocityLimits", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double, double)>(&dart::dynamics::DegreeOfFreedom::setVelocityLimits), (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("getVelocityLimits", static_cast<std::pair<double, double> (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getVelocityLimits))
.def("setVelocityLowerLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setVelocityLowerLimit), (::boost::python::arg("_limit")))
.def("getVelocityLowerLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getVelocityLowerLimit))
.def("setVelocityUpperLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setVelocityUpperLimit), (::boost::python::arg("_limit")))
.def("getVelocityUpperLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getVelocityUpperLimit))
.def("resetVelocity", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetVelocity))
.def("setInitialVelocity", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setInitialVelocity), (::boost::python::arg("_initial")))
.def("getInitialVelocity", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getInitialVelocity))
.def("setAcceleration", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setAcceleration), (::boost::python::arg("_acceleration")))
.def("getAcceleration", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getAcceleration))
.def("resetAcceleration", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetAcceleration))
.def("setAccelerationLimits", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double, double)>(&dart::dynamics::DegreeOfFreedom::setAccelerationLimits), (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("getAccelerationLimits", static_cast<std::pair<double, double> (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getAccelerationLimits))
.def("setAccelerationLowerLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setAccelerationLowerLimit), (::boost::python::arg("_limit")))
.def("getAccelerationLowerLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getAccelerationLowerLimit))
.def("setAccelerationUpperLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setAccelerationUpperLimit), (::boost::python::arg("_limit")))
.def("getAccelerationUpperLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getAccelerationUpperLimit))
.def("setForce", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setForce), (::boost::python::arg("_force")))
.def("getForce", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getForce))
.def("resetForce", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetForce))
.def("setForceLimits", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double, double)>(&dart::dynamics::DegreeOfFreedom::setForceLimits), (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("getForceLimits", static_cast<std::pair<double, double> (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getForceLimits))
.def("setForceLowerLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setForceLowerLimit), (::boost::python::arg("_limit")))
.def("getForceLowerLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getForceLowerLimit))
.def("setForceUpperLimit", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setForceUpperLimit), (::boost::python::arg("_limit")))
.def("getForceUpperLimit", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getForceUpperLimit))
.def("setVelocityChange", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setVelocityChange), (::boost::python::arg("_velocityChange")))
.def("getVelocityChange", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getVelocityChange))
.def("resetVelocityChange", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetVelocityChange))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setConstraintImpulse), (::boost::python::arg("_impulse")))
.def("getConstraintImpulse", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getConstraintImpulse))
.def("resetConstraintImpulse", static_cast<void (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::resetConstraintImpulse))
.def("setSpringStiffness", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setSpringStiffness), (::boost::python::arg("_k")))
.def("getSpringStiffness", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getSpringStiffness))
.def("setRestPosition", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setRestPosition), (::boost::python::arg("_q0")))
.def("getRestPosition", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getRestPosition))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setDampingCoefficient), (::boost::python::arg("_coeff")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getDampingCoefficient))
.def("setCoulombFriction", static_cast<void (dart::dynamics::DegreeOfFreedom::*)(double)>(&dart::dynamics::DegreeOfFreedom::setCoulombFriction), (::boost::python::arg("_friction")))
.def("getCoulombFriction", static_cast<double (dart::dynamics::DegreeOfFreedom::*)() const>(&dart::dynamics::DegreeOfFreedom::getCoulombFriction))
.def("getJoint", static_cast<dart::dynamics::Joint *(dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::getJoint), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >())
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::getSkeleton))
.def("getChildBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::getChildBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getParentBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::DegreeOfFreedom::*)()>(&dart::dynamics::DegreeOfFreedom::getParentBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
;
}

/* footer */
