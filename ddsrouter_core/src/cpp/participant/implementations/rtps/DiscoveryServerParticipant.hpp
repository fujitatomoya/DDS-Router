// Copyright 2021 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file DiscoveryServerParticipant.hpp
 */

#ifndef __SRC_DDSROUTERCORE_PARTICIPANT_IMPLEMENTATIONS_RTPS_DISCOVERYSERVERPARTICIPANT_HPP_
#define __SRC_DDSROUTERCORE_PARTICIPANT_IMPLEMENTATIONS_RTPS_DISCOVERYSERVERPARTICIPANT_HPP_

#include <fastdds/rtps/transport/TCPTransportDescriptor.h>

#include <ddsrouter_core/configuration/participant/DiscoveryServerParticipantConfiguration.hpp>
#include <ddsrouter_core/types/security/tls/TlsConfiguration.hpp>

#include <participant/implementations/rtps/CommonParticipant.hpp>

namespace eprosima {
namespace ddsrouter {
namespace core {
namespace rtps {

/**
 * TODO
 */
class DiscoveryServerParticipant
    : public CommonParticipant
{
public:

    DiscoveryServerParticipant(
            std::shared_ptr<configuration::DiscoveryServerParticipantConfiguration> participant_configuration,
            std::shared_ptr<PayloadPool> payload_pool,
            std::shared_ptr<DiscoveryDatabase> discovery_database);

    static fastrtps::rtps::RTPSParticipantAttributes get_participant_attributes_(
            const configuration::DiscoveryServerParticipantConfiguration* participant_configuration);

};

} /* namespace rpts */
} /* namespace core */
} /* namespace ddsrouter */
} /* namespace eprosima */

#endif /* __SRC_DDSROUTERCORE_PARTICIPANT_IMPLEMENTATIONS_RTPS_DISCOVERYSERVERPARTICIPANT_HPP_ */
