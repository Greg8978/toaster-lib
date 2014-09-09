// This class define an entity.
// An entity can be either an agent or an object.


#include <boost/geometry.hpp>
#include <vector>
namespace bg = boost::geometry;


class Entity
{

private:
    int id;							// each entity has a unic id
    std::string name;						// Entity might have a name
    bg::model::point<double, 3, bg::cs::cartesian> position;    // Entity position
    std::vector<double> orientation(3, 0.0);                    // Entity orientation
    std::vector<int> inArea;					// Entity might be in a specific area

public:

    // Constructor
    Entity(int entityId);

    // functions
    bool isInArea(int areaId);
    void addArea(int areaId);
    void removeArea(int areaId);
    void cleanArea();

    // accessors, mutators
    int getId();
    void setId(int entId);
    std::string getName();
    void setName(std::string entityName);
    bg::model::point<double, 3, bg::cs::cartesian> getPosition();
    void setPosition(bg::model::point<double, 3, bg::cs::cartesian> point);
    std::vector<double> getOrientation();
    void setOrientation(std::vector<double> entityOrientation);
};

