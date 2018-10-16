/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCartesianTransformationOperator2D.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcSurfaceStyleWithTextures.h"
#include "ifcpp/IFC4/include/IfcSurfaceTexture.h"
#include "ifcpp/IFC4/include/IfcTextureCoordinate.h"

// ENTITY IfcSurfaceTexture 
IfcSurfaceTexture::IfcSurfaceTexture() {}
IfcSurfaceTexture::IfcSurfaceTexture( int id ) { m_entity_id = id; }
IfcSurfaceTexture::~IfcSurfaceTexture() {}
shared_ptr<BuildingObject> IfcSurfaceTexture::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSurfaceTexture> copy_self( new IfcSurfaceTexture() );
	if( m_RepeatS ) { copy_self->m_RepeatS = dynamic_pointer_cast<IfcBoolean>( m_RepeatS->getDeepCopy(options) ); }
	if( m_RepeatT ) { copy_self->m_RepeatT = dynamic_pointer_cast<IfcBoolean>( m_RepeatT->getDeepCopy(options) ); }
	if( m_Mode ) { copy_self->m_Mode = dynamic_pointer_cast<IfcIdentifier>( m_Mode->getDeepCopy(options) ); }
	if( m_TextureTransform ) { copy_self->m_TextureTransform = dynamic_pointer_cast<IfcCartesianTransformationOperator2D>( m_TextureTransform->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Parameter.size(); ++ii )
	{
		auto item_ii = m_Parameter[ii];
		if( item_ii )
		{
			copy_self->m_Parameter.push_back( dynamic_pointer_cast<IfcIdentifier>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcSurfaceTexture::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSURFACETEXTURE" << "(";
	if( m_RepeatS ) { m_RepeatS->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RepeatT ) { m_RepeatT->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Mode ) { m_Mode->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TextureTransform ) { stream << "#" << m_TextureTransform->m_entity_id; } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Parameter.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcIdentifier>& type_object = m_Parameter[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcSurfaceTexture::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSurfaceTexture::toString() const { return L"IfcSurfaceTexture"; }
void IfcSurfaceTexture::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceTexture, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_RepeatS = IfcBoolean::createObjectFromSTEP( args[0], map );
	m_RepeatT = IfcBoolean::createObjectFromSTEP( args[1], map );
	m_Mode = IfcIdentifier::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_TextureTransform, map );
	readTypeOfStringList( args[4], m_Parameter );
}
void IfcSurfaceTexture::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RepeatS", m_RepeatS ) );
	vec_attributes.push_back( std::make_pair( "RepeatT", m_RepeatT ) );
	vec_attributes.push_back( std::make_pair( "Mode", m_Mode ) );
	vec_attributes.push_back( std::make_pair( "TextureTransform", m_TextureTransform ) );
	if( m_Parameter.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Parameter_vec_object( new AttributeObjectVector() );
		std::copy( m_Parameter.begin(), m_Parameter.end(), std::back_inserter( Parameter_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Parameter", Parameter_vec_object ) );
	}
}
void IfcSurfaceTexture::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
	if( m_IsMappedBy_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> IsMappedBy_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsMappedBy_inverse.size(); ++i )
		{
			if( !m_IsMappedBy_inverse[i].expired() )
			{
				IsMappedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcTextureCoordinate>( m_IsMappedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsMappedBy_inverse", IsMappedBy_inverse_vec_obj ) );
	}
	if( m_UsedInStyles_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> UsedInStyles_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_UsedInStyles_inverse.size(); ++i )
		{
			if( !m_UsedInStyles_inverse[i].expired() )
			{
				UsedInStyles_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcSurfaceStyleWithTextures>( m_UsedInStyles_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "UsedInStyles_inverse", UsedInStyles_inverse_vec_obj ) );
	}
}
void IfcSurfaceTexture::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceTexture::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
