//
// Created by drouar_b on 5/22/16.
//

#ifndef GAUNTLET_PACKETMOVEENTITY_HH
#define GAUNTLET_PACKETMOVEENTITY_HH

#include "Packet.hh"

namespace gauntlet {
    namespace network {
        class PacketMoveEntity: public Packet {

            struct s_packetMoveEntityData {
                unsigned char packetId;
                unsigned int entityId;
                int x;
                int y;
                short angle;
            }__attribute__((packed));

        public:
            PacketMoveEntity(s_socketData data);
            PacketMoveEntity(unsigned int entityId, int x, int y, short angle);
            virtual ~PacketMoveEntity() { };

            virtual t_rawdata* serialize() const;
            virtual void deserialize(t_rawdata* data);

            unsigned int getEntityId() const;
            int getX() const;
            int getY() const;
            short getAngle() const;

        private:
            unsigned int entityId;
            int x;
            int y;
            short angle;
        };
    }
}

#endif //GAUNTLET_PACKETMOVEENTITY_HH