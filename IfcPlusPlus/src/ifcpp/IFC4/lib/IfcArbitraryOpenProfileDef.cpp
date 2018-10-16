/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcArbitraryOpenProfileDef.h"
#include "ifcpp/IFC4/include/IfcBoundedCurve.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcArbitraryOpenProfileDef 
IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef() {}
IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef( int id ) { m_entity_id = id; }
IfcArbitraryOpenProfileDef::~IfcArbitraryOpenProfileDef() {}
shared_ptr<BuildingObject> IfcArbitraryOpenProfileDef::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcArbitraryOpenProfileDef> copy_self( new IfcArbitraryOpenProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Curve ) { copy_self->m_Curve = dynamic_pointer_cast<IfcBoundedCurve>( m_Curve->getDeepCopy(options) ); }
	return copy_self;
}
void IfcArbitraryOpenProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCARBITRARYOPENPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Curve ) { stream << "#" << m_Curve->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcArbitraryOpenProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcArbitraryOpenProfileDef::toString() const { return L"IfcArbitraryOpenProfileDef"; }
void IfcArbitraryOpenProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcArbitraryOpenProfileDef, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Curve, map );
}
void IfcArbitraryOpenProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcProfileDef::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Curve", m_Curve ) );
}
void IfcArbitraryOpenProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcArbitraryOpenProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcArbitraryOpenProfileDef::unlinkFromInverseCounterparts()
{
	IfcProfileDef::unlinkFromInverseCounterparts();
}
