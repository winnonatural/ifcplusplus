/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcColourRgbList.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"

// ENTITY IfcColourRgbList 
IfcColourRgbList::IfcColourRgbList() {}
IfcColourRgbList::IfcColourRgbList( int id ) { m_entity_id = id; }
IfcColourRgbList::~IfcColourRgbList() {}
shared_ptr<BuildingObject> IfcColourRgbList::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcColourRgbList> copy_self( new IfcColourRgbList() );
	copy_self->m_ColourList.resize( m_ColourList.size() );
	for( size_t ii=0; ii<m_ColourList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcNormalisedRatioMeasure> >& vec_ii = m_ColourList[ii];
		std::vector<shared_ptr<IfcNormalisedRatioMeasure> >& vec_ii_target = copy_self->m_ColourList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcNormalisedRatioMeasure>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.push_back( dynamic_pointer_cast<IfcNormalisedRatioMeasure>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcColourRgbList::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCOLOURRGBLIST" << "(";
	writeNumericTypeList2D( stream, m_ColourList );
	stream << ");";
}
void IfcColourRgbList::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcColourRgbList::toString() const { return L"IfcColourRgbList"; }
void IfcColourRgbList::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcColourRgbList, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_ColourList );
}
void IfcColourRgbList::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationItem::getAttributes( vec_attributes );
}
void IfcColourRgbList::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcColourRgbList::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcColourRgbList::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
