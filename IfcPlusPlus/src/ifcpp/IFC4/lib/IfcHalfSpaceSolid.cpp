/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcHalfSpaceSolid.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"

// ENTITY IfcHalfSpaceSolid 
IfcHalfSpaceSolid::IfcHalfSpaceSolid() {}
IfcHalfSpaceSolid::IfcHalfSpaceSolid( int id ) { m_entity_id = id; }
IfcHalfSpaceSolid::~IfcHalfSpaceSolid() {}
shared_ptr<BuildingObject> IfcHalfSpaceSolid::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcHalfSpaceSolid> copy_self( new IfcHalfSpaceSolid() );
	if( m_BaseSurface ) { copy_self->m_BaseSurface = dynamic_pointer_cast<IfcSurface>( m_BaseSurface->getDeepCopy(options) ); }
	if( m_AgreementFlag ) { copy_self->m_AgreementFlag = dynamic_pointer_cast<IfcBoolean>( m_AgreementFlag->getDeepCopy(options) ); }
	return copy_self;
}
void IfcHalfSpaceSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCHALFSPACESOLID" << "(";
	if( m_BaseSurface ) { stream << "#" << m_BaseSurface->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_AgreementFlag ) { m_AgreementFlag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcHalfSpaceSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcHalfSpaceSolid::toString() const { return L"IfcHalfSpaceSolid"; }
void IfcHalfSpaceSolid::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcHalfSpaceSolid, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BaseSurface, map );
	m_AgreementFlag = IfcBoolean::createObjectFromSTEP( args[1], map );
}
void IfcHalfSpaceSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "BaseSurface", m_BaseSurface ) );
	vec_attributes.push_back( std::make_pair( "AgreementFlag", m_AgreementFlag ) );
}
void IfcHalfSpaceSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcHalfSpaceSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcHalfSpaceSolid::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
