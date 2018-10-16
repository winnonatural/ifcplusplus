/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLanguageId.h"
#include "ifcpp/IFC4/include/IfcLibraryInformation.h"
#include "ifcpp/IFC4/include/IfcLibraryReference.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesLibrary.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcURIReference.h"

// ENTITY IfcLibraryReference 
IfcLibraryReference::IfcLibraryReference() {}
IfcLibraryReference::IfcLibraryReference( int id ) { m_entity_id = id; }
IfcLibraryReference::~IfcLibraryReference() {}
shared_ptr<BuildingObject> IfcLibraryReference::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLibraryReference> copy_self( new IfcLibraryReference() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcURIReference>( m_Location->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Language ) { copy_self->m_Language = dynamic_pointer_cast<IfcLanguageId>( m_Language->getDeepCopy(options) ); }
	if( m_ReferencedLibrary ) { copy_self->m_ReferencedLibrary = dynamic_pointer_cast<IfcLibraryInformation>( m_ReferencedLibrary->getDeepCopy(options) ); }
	return copy_self;
}
void IfcLibraryReference::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCLIBRARYREFERENCE" << "(";
	if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Language ) { m_Language->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferencedLibrary ) { stream << "#" << m_ReferencedLibrary->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcLibraryReference::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcLibraryReference::toString() const { return L"IfcLibraryReference"; }
void IfcLibraryReference::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLibraryReference, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Location = IfcURIReference::createObjectFromSTEP( args[0], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[1], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_Language = IfcLanguageId::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ReferencedLibrary, map );
}
void IfcLibraryReference::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcExternalReference::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "Language", m_Language ) );
	vec_attributes.push_back( std::make_pair( "ReferencedLibrary", m_ReferencedLibrary ) );
}
void IfcLibraryReference::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcExternalReference::getAttributesInverse( vec_attributes_inverse );
	if( m_LibraryRefForObjects_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> LibraryRefForObjects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_LibraryRefForObjects_inverse.size(); ++i )
		{
			if( !m_LibraryRefForObjects_inverse[i].expired() )
			{
				LibraryRefForObjects_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAssociatesLibrary>( m_LibraryRefForObjects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "LibraryRefForObjects_inverse", LibraryRefForObjects_inverse_vec_obj ) );
	}
}
void IfcLibraryReference::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalReference::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcLibraryReference> ptr_self = dynamic_pointer_cast<IfcLibraryReference>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcLibraryReference::setInverseCounterparts: type mismatch" ); }
	if( m_ReferencedLibrary )
	{
		m_ReferencedLibrary->m_HasLibraryReferences_inverse.push_back( ptr_self );
	}
}
void IfcLibraryReference::unlinkFromInverseCounterparts()
{
	IfcExternalReference::unlinkFromInverseCounterparts();
	if( m_ReferencedLibrary )
	{
		std::vector<weak_ptr<IfcLibraryReference> >& HasLibraryReferences_inverse = m_ReferencedLibrary->m_HasLibraryReferences_inverse;
		for( auto it_HasLibraryReferences_inverse = HasLibraryReferences_inverse.begin(); it_HasLibraryReferences_inverse != HasLibraryReferences_inverse.end(); )
		{
			weak_ptr<IfcLibraryReference> self_candidate_weak = *it_HasLibraryReferences_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasLibraryReferences_inverse;
				continue;
			}
			shared_ptr<IfcLibraryReference> self_candidate( *it_HasLibraryReferences_inverse );
			if( self_candidate.get() == this )
			{
				it_HasLibraryReferences_inverse= HasLibraryReferences_inverse.erase( it_HasLibraryReferences_inverse );
			}
			else
			{
				++it_HasLibraryReferences_inverse;
			}
		}
	}
}
