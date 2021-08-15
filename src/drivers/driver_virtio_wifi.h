/* Driver interaction with QEMU virtio wifi
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
*/

#ifndef DRIVER_VIRTIO_WIFI_H
#define DRIVER_VIRTIO_WIFI_H

extern void set_virtio_sock(int sock);
extern void set_virtio_ctl_sock(int sock);

#define MAX_KEY_MATERIAL_LEN 32 /* max key length is 32 bytes */

struct virtio_wifi_key_data {
	u8 key_material[MAX_KEY_MATERIAL_LEN];
	int key_len;
	int key_idx;
};

// There is at most one active key in use.
extern struct virtio_wifi_key_data get_active_ptk();
extern struct virtio_wifi_key_data get_active_gtk();

#endif
