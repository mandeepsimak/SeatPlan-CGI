#include "htmltags.h"

class ReadRollNoDetails : public HTMLTags
{
    protected:
    
    public:
        ReadRollNoDetails();
        void Main();
};

class RoomDetails : public ReadRollNoDetails
{
    protected:
    
    public:
        RoomDetails();
        void Head();
        void Javascript();
        void Body();
        void BodyContent();
        void Main();
};
