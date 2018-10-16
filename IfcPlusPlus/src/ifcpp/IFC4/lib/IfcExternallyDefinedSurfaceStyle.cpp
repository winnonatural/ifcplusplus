/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcExternallyDefinedSurfaceStyle.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcURIReference.h"

// ENTITY IfcExternallyDefinedSurfaceStyle 
IfcExternallyDefinedSurfaceStyle::IfcExternallyDefinedSurfaceStyle() {}
IfcExternallyDefinedSurfaceStyle::IfcExternallyDefinedSurfaceStyle( int id ) { m_entity_id = id; }
IfcExternallyDefinedSurfaceStyle::~IfcExternallyDefinedSurfaceStyle() {}
shared_ptr<BuildingObject> IfcExternallyDefinedSurfaceStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcExternallyDefinedSurfaceStyle> copy_self( new IfcExternallyDefinedSurfaceStyle() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcURIReference>( m_Location->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcExternallyDefinedSurfaceStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCEXTERNALLYDEFINEDSURFACESTYLE" << "(";
	if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcExternallyDefinedSurfaceStyle::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcExternallyDefinedSurfaceStyle::toString() const { return L"IfcExternallyDefinedSurfaceStyle"; }
void IfcExternallyDefinedSurfaceStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcExternallyDefinedSurfaceStyle, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Location = IfcURIReference::createObjectFromSTEP( args[0], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[1], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
}
void IfcExternallyDefinedSurfaceStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcExternalReference::getAttributes( vec_attributes );
}
void IfcExternallyDefinedSurfaceStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcExternalReference::getAttributesInverse( vec_attributes_inverse );
}
void IfcExternallyDefinedSurfaceStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalReference::setInverseCounterparts( ptr_self_entity );
}
void IfcExternallyDefinedSurfaceStyle::unlinkFromInverseCounterparts()
{
	IfcExternalReference::unlinkFromInverseCounterparts();
}
