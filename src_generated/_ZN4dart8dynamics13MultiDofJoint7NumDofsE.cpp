#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics13MultiDofJoint7NumDofsE()
{
::boost::python::scope().attr("NumDofs") = dart::dynamics::MultiDofJoint::NumDofs;
}

/* footer */
