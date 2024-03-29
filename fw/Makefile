PROJECT_NAME     := ble_app_blinky_pca10040_s132
TARGETS          := nrf52832_xxaa
OUTPUT_DIRECTORY := _build

SDK_ROOT := D:/dev/SDKs/nRF5_SDK_17.0.2_d674dde
PROJ_DIR := ./src/
COMP_DIR := ./components
U8G2_ROOT := ./components/u8g2/csrc
GNU_INSTALL_ROOT := /usr/local/bin/

$(OUTPUT_DIRECTORY)/nrf52832_xxaa.out: \
  LINKER_SCRIPT  := ld/ble_app_hrs_gcc_nrf52.ld

# Source files common to all targets
SRC_FILES += \
  $(SDK_ROOT)/modules/nrfx/mdk/gcc_startup_nrf52.S \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_rtt.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_default_backends.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_str_formatter.c \
  $(SDK_ROOT)/components/libraries/button/app_button.c \
  $(SDK_ROOT)/components/libraries/util/app_error.c \
  $(SDK_ROOT)/components/libraries/util/app_error_handler_gcc.c \
  $(SDK_ROOT)/components/libraries/util/app_error_weak.c \
  $(SDK_ROOT)/components/libraries/scheduler/app_scheduler.c \
  $(SDK_ROOT)/components/libraries/timer/app_timer2.c \
  $(SDK_ROOT)/components/libraries/util/app_util_platform.c \
  $(SDK_ROOT)/components/libraries/timer/drv_rtc.c \
  $(SDK_ROOT)/components/libraries/hardfault/hardfault_implementation.c \
  $(SDK_ROOT)/components/libraries/util/nrf_assert.c \
  $(SDK_ROOT)/components/libraries/atomic_fifo/nrf_atfifo.c \
  $(SDK_ROOT)/components/libraries/atomic_flags/nrf_atflags.c \
  $(SDK_ROOT)/components/libraries/atomic/nrf_atomic.c \
  $(SDK_ROOT)/components/libraries/balloc/nrf_balloc.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf_format.c \
  $(SDK_ROOT)/components/libraries/memobj/nrf_memobj.c \
  $(SDK_ROOT)/components/libraries/pwr_mgmt/nrf_pwr_mgmt.c \
  $(SDK_ROOT)/components/libraries/ringbuf/nrf_ringbuf.c \
  $(SDK_ROOT)/components/libraries/experimental_section_vars/nrf_section_iter.c \
  $(SDK_ROOT)/components/libraries/sortlist/nrf_sortlist.c \
  $(SDK_ROOT)/components/libraries/strerror/nrf_strerror.c \
  $(SDK_ROOT)/modules/nrfx/mdk/system_nrf52.c \
  $(SDK_ROOT)/components/boards/boards.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_clock.c \
  $(SDK_ROOT)/modules/nrfx/soc/nrfx_atomic.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_timer.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_nfct.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs/nrfx_prs.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_clock.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_gpiote.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs/nrfx_prs.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spi.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spim.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_spi.c \
  $(SDK_ROOT)/components/libraries/button/app_button.c \
  $(SDK_ROOT)/components/libraries/fstorage/nrf_fstorage.c \
  $(SDK_ROOT)/components/libraries/fstorage/nrf_fstorage_sd.c \
  $(SDK_ROOT)/components/libraries/fds/fds.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp_nfc.c \
  $(SDK_ROOT)/components/libraries/mem_manager/mem_manager.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_Syscalls_GCC.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c \
  $(SDK_ROOT)/components/ble/common/ble_advdata.c \
  $(SDK_ROOT)/components/ble/ble_advertising/ble_advertising.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_params.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_state.c \
  $(SDK_ROOT)/components/ble/common/ble_srv_common.c \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt/nrf_ble_gatt.c \
  $(SDK_ROOT)/components/ble/nrf_ble_qwr/nrf_ble_qwr.c \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager/ble_link_ctx_manager.c \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus/ble_nus.c \
  $(SDK_ROOT)/external/utf_converter/utf.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh_ble.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh_soc.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_saadc.c \
  $(SDK_ROOT)/components/libraries/crypto/nrf_crypto_hmac.c \
  $(SDK_ROOT)/components/libraries/crypto/nrf_crypto_aes.c \
  $(SDK_ROOT)/components/libraries/crypto/nrf_crypto_error.c \
  $(SDK_ROOT)/components/libraries/crypto/nrf_crypto_init.c \
  $(SDK_ROOT)/components/libraries/crypto/backend/mbedtls/mbedtls_backend_hmac.c \
  $(SDK_ROOT)/components/libraries/crypto/backend/mbedtls/mbedtls_backend_aes.c \
  $(SDK_ROOT)/external/mbedtls/library/aes.c \
	$(SDK_ROOT)/external/mbedtls/library/aesni.c \
	$(SDK_ROOT)/external/mbedtls/library/arc4.c \
	$(SDK_ROOT)/external/mbedtls/library/aria.c \
	$(SDK_ROOT)/external/mbedtls/library/asn1parse.c \
	$(SDK_ROOT)/external/mbedtls/library/asn1write.c \
	$(SDK_ROOT)/external/mbedtls/library/base64.c \
	$(SDK_ROOT)/external/mbedtls/library/bignum.c \
	$(SDK_ROOT)/external/mbedtls/library/blowfish.c \
	$(SDK_ROOT)/external/mbedtls/library/camellia.c \
	$(SDK_ROOT)/external/mbedtls/library/ccm.c \
	$(SDK_ROOT)/external/mbedtls/library/certs.c \
	$(SDK_ROOT)/external/mbedtls/library/chacha20.c \
	$(SDK_ROOT)/external/mbedtls/library/chachapoly.c \
	$(SDK_ROOT)/external/mbedtls/library/cipher.c \
	$(SDK_ROOT)/external/mbedtls/library/cipher_wrap.c \
	$(SDK_ROOT)/external/mbedtls/library/cmac.c \
	$(SDK_ROOT)/external/mbedtls/library/ctr_drbg.c \
	$(SDK_ROOT)/external/mbedtls/library/debug.c \
	$(SDK_ROOT)/external/mbedtls/library/des.c \
	$(SDK_ROOT)/external/mbedtls/library/dhm.c \
	$(SDK_ROOT)/external/mbedtls/library/ecdh.c \
	$(SDK_ROOT)/external/mbedtls/library/ecdsa.c \
	$(SDK_ROOT)/external/mbedtls/library/ecjpake.c \
	$(SDK_ROOT)/external/mbedtls/library/ecp.c \
	$(SDK_ROOT)/external/mbedtls/library/ecp_curves.c \
	$(SDK_ROOT)/external/mbedtls/library/entropy.c \
	$(SDK_ROOT)/external/mbedtls/library/entropy_poll.c \
	$(SDK_ROOT)/external/mbedtls/library/error.c \
	$(SDK_ROOT)/external/mbedtls/library/gcm.c \
	$(SDK_ROOT)/external/mbedtls/library/havege.c \
	$(SDK_ROOT)/external/mbedtls/library/hmac_drbg.c \
	$(SDK_ROOT)/external/mbedtls/library/md.c \
	$(SDK_ROOT)/external/mbedtls/library/md2.c \
	$(SDK_ROOT)/external/mbedtls/library/md4.c \
	$(SDK_ROOT)/external/mbedtls/library/md5.c \
	$(SDK_ROOT)/external/mbedtls/library/md_wrap.c \
	$(SDK_ROOT)/external/mbedtls/library/memory_buffer_alloc.c \
	$(SDK_ROOT)/external/mbedtls/library/net_sockets.c \
	$(SDK_ROOT)/external/mbedtls/library/nist_kw.c \
	$(SDK_ROOT)/external/mbedtls/library/oid.c \
	$(SDK_ROOT)/external/mbedtls/library/padlock.c \
	$(SDK_ROOT)/external/mbedtls/library/pem.c \
	$(SDK_ROOT)/external/mbedtls/library/pk.c \
	$(SDK_ROOT)/external/mbedtls/library/pk_wrap.c \
	$(SDK_ROOT)/external/mbedtls/library/pkcs11.c \
	$(SDK_ROOT)/external/mbedtls/library/pkcs12.c \
	$(SDK_ROOT)/external/mbedtls/library/pkcs5.c \
	$(SDK_ROOT)/external/mbedtls/library/pkparse.c \
	$(SDK_ROOT)/external/mbedtls/library/pkwrite.c \
	$(SDK_ROOT)/external/mbedtls/library/platform.c \
	$(SDK_ROOT)/external/mbedtls/library/platform_util.c \
	$(SDK_ROOT)/external/mbedtls/library/poly1305.c \
	$(SDK_ROOT)/external/mbedtls/library/ripemd160.c \
	$(SDK_ROOT)/external/mbedtls/library/rsa.c \
	$(SDK_ROOT)/external/mbedtls/library/rsa_internal.c \
	$(SDK_ROOT)/external/mbedtls/library/sha1.c \
	$(SDK_ROOT)/external/mbedtls/library/sha256.c \
	$(SDK_ROOT)/external/mbedtls/library/sha512.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_cache.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_ciphersuites.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_cli.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_cookie.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_srv.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_ticket.c \
	$(SDK_ROOT)/external/mbedtls/library/ssl_tls.c \
	$(SDK_ROOT)/external/mbedtls/library/threading.c \
	$(SDK_ROOT)/external/mbedtls/library/version.c \
	$(SDK_ROOT)/external/mbedtls/library/version_features.c \
	$(SDK_ROOT)/external/mbedtls/library/x509.c \
	$(SDK_ROOT)/external/mbedtls/library/x509_create.c \
	$(SDK_ROOT)/external/mbedtls/library/x509_crl.c \
	$(SDK_ROOT)/external/mbedtls/library/x509_crt.c \
	$(SDK_ROOT)/external/mbedtls/library/x509_csr.c \
	$(SDK_ROOT)/external/mbedtls/library/x509write_crt.c \
	$(SDK_ROOT)/external/mbedtls/library/x509write_csr.c \
	$(SDK_ROOT)/external/mbedtls/library/xtea.c \
  $(PROJ_DIR)/main.c \
  $(PROJ_DIR)/ntag_emu.c \
  $(PROJ_DIR)/ntag_store.c \
  $(PROJ_DIR)/ntag_indicator.c \
  $(PROJ_DIR)/bat.c \
  $(PROJ_DIR)/ble_main.c \
  $(PROJ_DIR)/utils.c \
  $(PROJ_DIR)/amiibo_data.c \
  $(PROJ_DIR)/amiibo_helper.c \
  $(PROJ_DIR)/amiibo_private.c \
  $(PROJ_DIR)/u8g2_drv.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_Syscalls_GCC.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c \
  $(SDK_ROOT)/modules/nrfx/mdk/system_nrf52.c \
  $(SDK_ROOT)/components/nfc/platform/nfc_platform.c \
  $(COMP_DIR)/amiitool/src/amiibo.c \
  $(COMP_DIR)/amiitool/src/drbg.c \
  $(COMP_DIR)/amiitool/src/keygen.c \
  $(COMP_DIR)/amiitool/src/version.c \
  $(U8G2_ROOT)\u8g2_bitmap.c \
  $(U8G2_ROOT)\u8g2_box.c \
  $(U8G2_ROOT)\u8g2_buffer.c \
  $(U8G2_ROOT)\u8g2_circle.c \
  $(U8G2_ROOT)\u8g2_cleardisplay.c \
  $(U8G2_ROOT)\u8g2_d_memory.c \
  $(U8G2_ROOT)\u8g2_d_setup.c \
  $(U8G2_ROOT)\u8g2_font.c \
  $(U8G2_ROOT)\u8g2_fonts.c \
  $(U8G2_ROOT)\u8g2_hvline.c \
  $(U8G2_ROOT)\u8g2_input_value.c \
  $(U8G2_ROOT)\u8g2_intersection.c \
  $(U8G2_ROOT)\u8g2_kerning.c \
  $(U8G2_ROOT)\u8g2_line.c \
  $(U8G2_ROOT)\u8g2_ll_hvline.c \
  $(U8G2_ROOT)\u8g2_message.c \
  $(U8G2_ROOT)\u8g2_polygon.c \
  $(U8G2_ROOT)\u8g2_selection_list.c \
  $(U8G2_ROOT)\u8g2_setup.c \
  $(U8G2_ROOT)\u8log.c \
  $(U8G2_ROOT)\u8log_u8g2.c \
  $(U8G2_ROOT)\u8log_u8x8.c \
  $(U8G2_ROOT)\u8x8_8x8.c \
  $(U8G2_ROOT)\u8x8_byte.c \
  $(U8G2_ROOT)\u8x8_cad.c \
  $(U8G2_ROOT)\u8x8_capture.c \
  $(U8G2_ROOT)\u8x8_d_a2printer.c \
  $(U8G2_ROOT)\u8x8_d_il3820_296x128.c \
  $(U8G2_ROOT)\u8x8_d_ist3020.c \
  $(U8G2_ROOT)\u8x8_d_ist7920.c \
  $(U8G2_ROOT)\u8x8_d_ks0108.c \
  $(U8G2_ROOT)\u8x8_d_lc7981.c \
  $(U8G2_ROOT)\u8x8_d_ld7032_60x32.c \
  $(U8G2_ROOT)\u8x8_d_ls013b7dh03.c \
  $(U8G2_ROOT)\u8x8_d_max7219.c \
  $(U8G2_ROOT)\u8x8_d_pcd8544_84x48.c \
  $(U8G2_ROOT)\u8x8_d_pcf8812.c \
  $(U8G2_ROOT)\u8x8_d_pcf8814_hx1230.c \
  $(U8G2_ROOT)\u8x8_d_s1d15e06.c \
  $(U8G2_ROOT)\u8x8_d_sbn1661.c \
  $(U8G2_ROOT)\u8x8_d_sed1330.c \
  $(U8G2_ROOT)\u8x8_d_sh1106_64x32.c \
  $(U8G2_ROOT)\u8x8_d_sh1106_72x40.c \
  $(U8G2_ROOT)\u8x8_d_sh1107.c \
  $(U8G2_ROOT)\u8x8_d_sh1108.c \
  $(U8G2_ROOT)\u8x8_d_sh1122.c \
  $(U8G2_ROOT)\u8x8_d_ssd1305.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_128x32.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_128x64_noname.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_2040x16.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_48x64.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_64x32.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_64x48.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_72x40.c \
  $(U8G2_ROOT)\u8x8_d_ssd1306_96x16.c \
  $(U8G2_ROOT)\u8x8_d_ssd1309.c \
  $(U8G2_ROOT)\u8x8_d_ssd1316.c \
  $(U8G2_ROOT)\u8x8_d_ssd1317.c \
  $(U8G2_ROOT)\u8x8_d_ssd1318.c \
  $(U8G2_ROOT)\u8x8_d_ssd1322.c \
  $(U8G2_ROOT)\u8x8_d_ssd1325.c \
  $(U8G2_ROOT)\u8x8_d_ssd1326.c \
  $(U8G2_ROOT)\u8x8_d_ssd1327.c \
  $(U8G2_ROOT)\u8x8_d_ssd1329.c \
  $(U8G2_ROOT)\u8x8_d_ssd1606_172x72.c \
  $(U8G2_ROOT)\u8x8_d_ssd1607_200x200.c \
  $(U8G2_ROOT)\u8x8_d_st7511.c \
  $(U8G2_ROOT)\u8x8_d_st75256.c \
  $(U8G2_ROOT)\u8x8_d_st7528.c \
  $(U8G2_ROOT)\u8x8_d_st75320.c \
  $(U8G2_ROOT)\u8x8_d_st7565.c \
  $(U8G2_ROOT)\u8x8_d_st7567.c \
  $(U8G2_ROOT)\u8x8_d_st7571.c \
  $(U8G2_ROOT)\u8x8_d_st7586s_erc240160.c \
  $(U8G2_ROOT)\u8x8_d_st7586s_s028hn118a.c \
  $(U8G2_ROOT)\u8x8_d_st7586s_ymc240160.c \
  $(U8G2_ROOT)\u8x8_d_st7588.c \
  $(U8G2_ROOT)\u8x8_d_st7920.c \
  $(U8G2_ROOT)\u8x8_d_stdio.c \
  $(U8G2_ROOT)\u8x8_d_t6963.c \
  $(U8G2_ROOT)\u8x8_d_uc1601.c \
  $(U8G2_ROOT)\u8x8_d_uc1604.c \
  $(U8G2_ROOT)\u8x8_d_uc1608.c \
  $(U8G2_ROOT)\u8x8_d_uc1610.c \
  $(U8G2_ROOT)\u8x8_d_uc1611.c \
  $(U8G2_ROOT)\u8x8_d_uc1617.c \
  $(U8G2_ROOT)\u8x8_d_uc1638.c \
  $(U8G2_ROOT)\u8x8_d_uc1701_dogs102.c \
  $(U8G2_ROOT)\u8x8_d_uc1701_mini12864.c \
  $(U8G2_ROOT)\u8x8_debounce.c \
  $(U8G2_ROOT)\u8x8_display.c \
  $(U8G2_ROOT)\u8x8_fonts.c \
  $(U8G2_ROOT)\u8x8_gpio.c \
  $(U8G2_ROOT)\u8x8_input_value.c \
  $(U8G2_ROOT)\u8x8_message.c \
  $(U8G2_ROOT)\u8x8_selection_list.c \
  $(U8G2_ROOT)\u8x8_setup.c \
  $(U8G2_ROOT)\u8x8_string.c \
  $(U8G2_ROOT)\u8x8_u16toa.c \
  $(U8G2_ROOT)\u8x8_u8toa.c 

# Include folders common to all targets
INC_FOLDERS += \
  $(SDK_ROOT)/components/nfc/ndef/generic/message \
  $(SDK_ROOT)/components/nfc/t2t_lib \
  $(SDK_ROOT)/components/nfc/t4t_parser/hl_detection_procedure \
  $(SDK_ROOT)/components/ble/ble_services/ble_ancs_c \
  $(SDK_ROOT)/components/ble/ble_services/ble_ias_c \
  $(SDK_ROOT)/components/libraries/pwm \
  $(SDK_ROOT)/components/softdevice/s132/headers/nrf52 \
  $(SDK_ROOT)/components/libraries/usbd/class/cdc/acm \
  $(SDK_ROOT)/components/libraries/usbd/class/hid/generic \
  $(SDK_ROOT)/components/libraries/usbd/class/msc \
  $(SDK_ROOT)/components/libraries/usbd/class/hid \
  $(SDK_ROOT)/modules/nrfx/hal \
  $(SDK_ROOT)/components/nfc/ndef/conn_hand_parser/le_oob_rec_parser \
  $(SDK_ROOT)/components/libraries/log \
  $(SDK_ROOT)/components/libraries/fstorage \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus \
  $(SDK_ROOT)/components/nfc/ndef/text \
  $(SDK_ROOT)/components/libraries/mutex \
  $(SDK_ROOT)/components/libraries/gpiote \
  $(SDK_ROOT)/components/libraries/bootloader/ble_dfu \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/common \
  $(SDK_ROOT)/components/boards \
  $(SDK_ROOT)/components/nfc/ndef/generic/record \
  $(SDK_ROOT)/components/nfc/t4t_parser/cc_file \
  $(SDK_ROOT)/components/ble/ble_advertising \
  $(SDK_ROOT)/external/utf_converter \
  $(SDK_ROOT)/components/ble/ble_services/ble_bas_c \
  $(SDK_ROOT)/modules/nrfx/drivers/include \
  $(SDK_ROOT)/components/libraries/experimental_task_manager \
  $(SDK_ROOT)/components/ble/ble_services/ble_hrs_c \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/le_oob_rec \
  $(SDK_ROOT)/components/libraries/queue \
  $(SDK_ROOT)/components/libraries/pwr_mgmt \
  $(SDK_ROOT)/components/ble/ble_dtm \
  $(SDK_ROOT)/components/toolchain/cmsis/include \
  $(SDK_ROOT)/components/ble/ble_services/ble_rscs_c \
  $(SDK_ROOT)/components/ble/common \
  $(SDK_ROOT)/components/ble/ble_services/ble_lls \
  $(SDK_ROOT)/components/nfc/platform \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/ac_rec \
  $(SDK_ROOT)/components/ble/ble_services/ble_bas \
  $(SDK_ROOT)/components/libraries/mpu \
  $(SDK_ROOT)/components/libraries/experimental_section_vars \
  $(SDK_ROOT)/components/softdevice/s132/headers \
  $(SDK_ROOT)/components/ble/ble_services/ble_ans_c \
  $(SDK_ROOT)/components/libraries/slip \
  $(SDK_ROOT)/components/libraries/delay \
  $(SDK_ROOT)/components/libraries/csense_drv \
  $(SDK_ROOT)/components/libraries/memobj \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus_c \
  $(SDK_ROOT)/components/softdevice/common \
  $(SDK_ROOT)/components/ble/ble_services/ble_ias \
  $(SDK_ROOT)/components/libraries/usbd/class/hid/mouse \
  $(SDK_ROOT)/components/libraries/low_power_pwm \
  $(SDK_ROOT)/components/nfc/ndef/conn_hand_parser/ble_oob_advdata_parser \
  $(SDK_ROOT)/components/ble/ble_services/ble_dfu \
  $(SDK_ROOT)/external/fprintf \
  $(SDK_ROOT)/components/libraries/svc \
  $(SDK_ROOT)/components/libraries/atomic \
  $(SDK_ROOT)/components \
  $(SDK_ROOT)/components/libraries/scheduler \
  $(SDK_ROOT)/components/libraries/cli \
  $(SDK_ROOT)/components/libraries/uart \
  $(SDK_ROOT)/components/ble/ble_services/ble_lbs \
  $(SDK_ROOT)/components/ble/ble_services/ble_hts \
  $(SDK_ROOT)/components/libraries/crc16 \
  $(SDK_ROOT)/components/nfc/t4t_parser/apdu \
  $(SDK_ROOT)/components/libraries/util \
  ./config \
  $(SDK_ROOT)/components/libraries/usbd/class/cdc \
  $(SDK_ROOT)/components/libraries/csense \
  $(SDK_ROOT)/components/libraries/balloc \
  $(SDK_ROOT)/components/libraries/ecc \
  $(SDK_ROOT)/components/libraries/hardfault \
  $(SDK_ROOT)/components/ble/ble_services/ble_cscs \
  $(SDK_ROOT)/components/libraries/hci \
  $(SDK_ROOT)/components/libraries/timer \
  $(SDK_ROOT)/integration/nrfx \
  $(SDK_ROOT)/components/nfc/t4t_parser/tlv \
  $(SDK_ROOT)/components/libraries/sortlist \
  $(SDK_ROOT)/components/libraries/spi_mngr \
  $(SDK_ROOT)/components/libraries/led_softblink \
  $(SDK_ROOT)/components/nfc/ndef/conn_hand_parser \
  $(SDK_ROOT)/components/libraries/sdcard \
  $(SDK_ROOT)/components/nfc/ndef/parser/record \
  $(SDK_ROOT)/modules/nrfx/mdk \
  $(SDK_ROOT)/components/ble/ble_services/ble_cts_c \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus \
  $(SDK_ROOT)/components/libraries/twi_mngr \
  $(SDK_ROOT)/components/ble/ble_services/ble_hids \
  $(SDK_ROOT)/components/libraries/strerror \
  $(SDK_ROOT)/components/libraries/crc32 \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/ble_oob_advdata \
  $(SDK_ROOT)/components/nfc/t2t_parser \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/ble_pair_msg \
  $(SDK_ROOT)/components/libraries/usbd/class/audio \
  $(SDK_ROOT)/components/nfc/t4t_lib \
  $(SDK_ROOT)/components/ble/peer_manager \
  $(SDK_ROOT)/components/libraries/mem_manager \
  $(SDK_ROOT)/components/libraries/ringbuf \
  $(SDK_ROOT)/components/ble/ble_services/ble_tps \
  $(SDK_ROOT)/components/nfc/ndef/parser/message \
  $(SDK_ROOT)/components/ble/ble_services/ble_dis \
  $(SDK_ROOT)/components/nfc/ndef/uri \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt \
  $(SDK_ROOT)/components/ble/nrf_ble_qwr \
  $(SDK_ROOT)/components/libraries/gfx \
  $(SDK_ROOT)/components/libraries/button \
  $(SDK_ROOT)/modules/nrfx \
  $(SDK_ROOT)/components/libraries/twi_sensor \
  $(SDK_ROOT)/integration/nrfx/legacy \
  $(SDK_ROOT)/components/libraries/usbd/class/hid/kbd \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/ep_oob_rec \
  $(SDK_ROOT)/external/segger_rtt \
  $(SDK_ROOT)/components/libraries/atomic_fifo \
  $(SDK_ROOT)/components/ble/ble_services/ble_lbs_c \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/ble_pair_lib \
  $(SDK_ROOT)/components/libraries/crypto \
  $(SDK_ROOT)/components/libraries/crypto/backend/cc310 \
  $(SDK_ROOT)/components/libraries/crypto/backend/cc310_bl \
  $(SDK_ROOT)/components/libraries/crypto/backend/mbedtls \
  $(SDK_ROOT)/components/libraries/crypto/backend/micro_ecc \
  $(SDK_ROOT)/components/libraries/crypto/backend/nrf_hw \
  $(SDK_ROOT)/components/libraries/crypto/backend/nrf_sw \
  $(SDK_ROOT)/components/libraries/crypto/backend/oberon \
  $(SDK_ROOT)/components/libraries/crypto/backend/optiga \
  $(SDK_ROOT)/components/libraries/crypto/backend/cifra \
  $(SDK_ROOT)/components/ble/ble_racp \
  $(SDK_ROOT)/components/libraries/fds \
  $(SDK_ROOT)/components/nfc/ndef/launchapp \
  $(SDK_ROOT)/components/libraries/atomic_flags \
  $(SDK_ROOT)/components/ble/ble_services/ble_hrs \
  $(SDK_ROOT)/components/ble/ble_services/ble_rscs \
  $(SDK_ROOT)/components/nfc/ndef/connection_handover/hs_rec \
  $(SDK_ROOT)/components/libraries/usbd \
  $(SDK_ROOT)/components/nfc/ndef/conn_hand_parser/ac_rec_parser \
  $(SDK_ROOT)/components/libraries/stack_guard \
  $(SDK_ROOT)/components/libraries/log/src \
  $(SDK_ROOT)/components/libraries/crypto/backend/mbedtls \
  $(SDK_ROOT)/external/mbedtls/include \
  $(PROJ_DIR) \
  $(COMP_DIR)/amiitool/include \
  $(COMP_DIR)/u8g2/csrc \
  $(SDK_ROOT)/components/libraries/bsp

# Libraries common to all targets
LIB_FILES += \

# Optimization flags
OPT = -O3 -g3
#OPT = -Os -ffunction-sections -fdata-sections
# Uncomment the line below to enable link time optimization
#OPT += -flto

# C flags common to all targets
CFLAGS += $(OPT)
CFLAGS += -DAPP_TIMER_V2
CFLAGS += -DAPP_TIMER_V2_RTC1_ENABLED
#CFLAGS += -DBOARD_PCA10040
CFLAGS += -DCUSTOM_BOARD_INC=am_board
#CFLAGS += -DCONFIG_GPIO_AS_PINRESET
CFLAGS += -DFLOAT_ABI_HARD
CFLAGS += -DNRF52
CFLAGS += -DNRF52832_XXAA
CFLAGS += -DNRF52_PAN_74
CFLAGS += -DNRF_SD_BLE_API_VERSION=7
CFLAGS += -DS132
CFLAGS += -DSOFTDEVICE_PRESENT
CFLAGS += -DLV_LVGL_H_INCLUDE_SIMPLE 
CFLAGS += -DDEBUG
CFLAGS += -DEBUG_NRF
CFLAGS += -DMBEDTLS_CONFIG_FILE=\"nrf_crypto_mbedtls_config.h\"
CFLAGS += -mcpu=cortex-m4
CFLAGS += -mthumb -mabi=aapcs
#CFLAGS += -Wall -Werror
CFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# keep every function in a separate section, this allows linker to discard unused ones
CFLAGS += -ffunction-sections -fdata-sections -fno-strict-aliasing
CFLAGS += -fno-builtin -fshort-enums

# C++ flags common to all targets
CXXFLAGS += $(OPT)
# Assembler flags common to all targets
ASMFLAGS += -g3
ASMFLAGS += -mcpu=cortex-m4
ASMFLAGS += -mthumb -mabi=aapcs
ASMFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
ASMFLAGS += -DAPP_TIMER_V2
ASMFLAGS += -DAPP_TIMER_V2_RTC1_ENABLED
# ASMFLAGS += -DBOARD_PCA10040
ASMFLAGS += -DCUSTOM_BOARD_INC=am_board
# ASMFLAGS += -DCONFIG_GPIO_AS_PINRESET
ASMFLAGS += -DFLOAT_ABI_HARD
ASMFLAGS += -DNRF52
ASMFLAGS += -DNRF52832_XXAA
ASMFLAGS += -DNRF52_PAN_74
ASMFLAGS += -DNRF_SD_BLE_API_VERSION=7
ASMFLAGS += -DS132
ASMFLAGS += -DSOFTDEVICE_PRESENT

# Linker flags
LDFLAGS += $(OPT)
LDFLAGS += -mthumb -mabi=aapcs -L$(SDK_ROOT)/modules/nrfx/mdk -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# let linker dump unused sections
LDFLAGS += -Wl,--gc-sections
# use newlib in nano version
LDFLAGS += --specs=nano.specs

nrf52832_xxaa: CFLAGS += -D__HEAP_SIZE=8192
nrf52832_xxaa: CFLAGS += -D__STACK_SIZE=8192
nrf52832_xxaa: ASMFLAGS += -D__HEAP_SIZE=8192
nrf52832_xxaa: ASMFLAGS += -D__STACK_SIZE=8192

# Add standard libraries at the very end of the linker input, after all objects
# that may need symbols provided by these libraries.
LIB_FILES += -lc -lnosys -lm


.PHONY: default help

# Default target - first one defined
default: nrf52832_xxaa
all: nrf52832_xxaa

# Print all targets that can be built
help:
	@echo following targets are available:
	@echo		nrf52832_xxaa
	@echo		flash_softdevice
	@echo		sdk_config - starting external tool for editing sdk_config.h
	@echo		flash      - flashing binary

TEMPLATE_PATH := $(SDK_ROOT)/components/toolchain/gcc


include $(TEMPLATE_PATH)/Makefile.common

$(foreach target, $(TARGETS), $(call define_target, $(target)))

.PHONY: flash flash_softdevice erase

# Flash the program
flash: default
	@echo Flashing: $(OUTPUT_DIRECTORY)/nrf52832_xxaa.hex
	nrfjprog -f nrf52 --program $(OUTPUT_DIRECTORY)/nrf52832_xxaa.hex --sectorerase --log
	nrfjprog -f nrf52 --reset --log

# Flash softdevice
flash_softdevice:
	@echo Flashing: s132_nrf52_7.2.0_softdevice.hex
	nrfjprog -f nrf52 --program $(SDK_ROOT)/components/softdevice/s132/hex/s132_nrf52_7.2.0_softdevice.hex --sectorerase --log
	nrfjprog -f nrf52 --reset --log

erase:
	nrfjprog -f nrf52 --eraseall

SDK_CONFIG_FILE := ./config/sdk_config.h
CMSIS_CONFIG_TOOL := $(SDK_ROOT)/external_tools/cmsisconfig/CMSIS_Configuration_Wizard.jar
sdk_config:
	java -jar $(CMSIS_CONFIG_TOOL) $(SDK_CONFIG_FILE)
