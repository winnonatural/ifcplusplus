/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAppliedValue.h"
#include "ifcpp/IFC4/include/IfcAppliedValueSelect.h"
#include "ifcpp/IFC4/include/IfcArithmeticOperatorEnum.h"
#include "ifcpp/IFC4/include/IfcCostValue.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMeasureWithUnit.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcCostValue 
IfcCostValue::IfcCostValue() {}
IfcCostValue::IfcCostValue( int id ) { m_entity_id = id; }
IfcCostValue::~IfcCostValue() {}
shared_ptr<BuildingObject> IfcCostValue::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCostValue> copy_self( new IfcCostValue() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_AppliedValue ) { copy_self->m_AppliedValue = dynamic_pointer_cast<IfcAppliedValueSelect>( m_AppliedValue->getDeepCopy(options) ); }
	if( m_UnitBasis ) { copy_self->m_UnitBasis = dynamic_pointer_cast<IfcMeasureWithUnit>( m_UnitBasis->getDeepCopy(options) ); }
	if( m_ApplicableDate ) { copy_self->m_ApplicableDate = dynamic_pointer_cast<IfcDate>( m_ApplicableDate->getDeepCopy(options) ); }
	if( m_FixedUntilDate ) { copy_self->m_FixedUntilDate = dynamic_pointer_cast<IfcDate>( m_FixedUntilDate->getDeepCopy(options) ); }
	if( m_Category ) { copy_self->m_Category = dynamic_pointer_cast<IfcLabel>( m_Category->getDeepCopy(options) ); }
	if( m_Condition ) { copy_self->m_Condition = dynamic_pointer_cast<IfcLabel>( m_Condition->getDeepCopy(options) ); }
	if( m_ArithmeticOperator ) { copy_self->m_ArithmeticOperator = dynamic_pointer_cast<IfcArithmeticOperatorEnum>( m_ArithmeticOperator->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Components.size(); ++ii )
	{
		auto item_ii = m_Components[ii];
		if( item_ii )
		{
			copy_self->m_Components.push_back( dynamic_pointer_cast<IfcAppliedValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcCostValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCOSTVALUE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AppliedValue ) { m_AppliedValue->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_UnitBasis ) { stream << "#" << m_UnitBasis->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ApplicableDate ) { m_ApplicableDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FixedUntilDate ) { m_FixedUntilDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Condition ) { m_Condition->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ArithmeticOperator ) { m_ArithmeticOperator->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Components );
	stream << ");";
}
void IfcCostValue::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCostValue::toString() const { return L"IfcCostValue"; }
void IfcCostValue::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCostValue, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_AppliedValue = IfcAppliedValueSelect::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_UnitBasis, map );
	m_ApplicableDate = IfcDate::createObjectFromSTEP( args[4], map );
	m_FixedUntilDate = IfcDate::createObjectFromSTEP( args[5], map );
	m_Category = IfcLabel::createObjectFromSTEP( args[6], map );
	m_Condition = IfcLabel::createObjectFromSTEP( args[7], map );
	m_ArithmeticOperator = IfcArithmeticOperatorEnum::createObjectFromSTEP( args[8], map );
	readEntityReferenceList( args[9], m_Components, map );
}
void IfcCostValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcAppliedValue::getAttributes( vec_attributes );
}
void IfcCostValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcAppliedValue::getAttributesInverse( vec_attributes_inverse );
}
void IfcCostValue::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAppliedValue::setInverseCounterparts( ptr_self_entity );
}
void IfcCostValue::unlinkFromInverseCounterparts()
{
	IfcAppliedValue::unlinkFromInverseCounterparts();
}
