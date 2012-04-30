/* Port Bouncer
* To be called as nbouncer local_ip local_port remote_ip remote_port
*/

#include "bouncer.h"


void process_pkt(u_char *args, const struct pcap_pkthdr *header,
	    const u_char *packet);

int main(int argc, char *argv[])
{

	/* Include here your code to initialize the PCAP capturing process */

	/* Initialize raw socket */
}//End of the bouncer
