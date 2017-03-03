#include <iostream>

#include "base/at_exit.h"
#include "base/command_line.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "net/quic/core/crypto/proof_source.h"
#include "net/quic/chromium/crypto/proof_source_chromium.h"
//#include "net/quic/core/quic_packets.h"
//#include "net/quic/platform/api/quic_socket_address.h"

using namespace std;
int main()
{
	std::unique_ptr<ProofSource> proof_source;
	cout << "hello quic reverse" << endl;	
}
