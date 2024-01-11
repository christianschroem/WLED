/*
 * More web UI HTML source arrays.
 * This file is auto generated, please don't make any changes manually.
 * Instead, see https://kno.wled.ge/advanced/custom-features/#changing-web-ui
 * to find out how to easily modify the web UI source!
 */ 

// Autogenerated from wled00/data/usermod.htm, do not edit!!
const uint16_t PAGE_usermod_length = 81;
const uint8_t PAGE_usermod[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0xb3, 0x51, 0x74, 0xf1, 0x77, 0x0e,
  0x89, 0x0c, 0x70, 0x55, 0xc8, 0x28, 0xc9, 0xcd, 0xb1, 0xb3, 0x81, 0x90, 0x49, 0xf9, 0x29, 0x95,
  0x76, 0x7e, 0xf9, 0x0a, 0xa5, 0xc5, 0xa9, 0x45, 0xb9, 0xf9, 0x29, 0x0a, 0xc9, 0xa5, 0xc5, 0x25,
  0xf9, 0xb9, 0x0a, 0xe5, 0xa9, 0x49, 0x0a, 0x05, 0x89, 0xe9, 0xa9, 0x0a, 0xc5, 0xa9, 0x25, 0x7a,
  0x36, 0xfa, 0x60, 0x55, 0x36, 0xfa, 0x60, 0x2d, 0x00, 0x1e, 0x93, 0x65, 0xc7, 0x48, 0x00, 0x00,
  0x00
};


// Autogenerated from wled00/data/msg.htm, do not edit!!
const char PAGE_msg[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>WLED Message</title><script>
function B(){window.history.back()}function RS(){window.location="../settings"}function RP(){top.location.href="../"}
</script><style>@import url("style.css");</style></head><body><h2>%MSG%</body></html>)=====";


#ifdef WLED_ENABLE_DMX

// Autogenerated from wled00/data/dmxmap.htm, do not edit!!
const char PAGE_dmxmap[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>DMX Map</title><script>
function B(){window.history.back()}function RS(){window.location="/settings"}function RP(){top.location.href="/"}function FM() {%DMXVARS%
var n=["SET 0","RED","GREEN","BLUE","WHITE","SHUTTER","SET 255","DISABLED"],o=[];for(i=0;i<512;i++)o.push(7);for(i=0;i<LC;i++)for(FS=CS+CG*i,j=0;j<CN;j++)DA=FS+j,o[DA-1]=CH[j];for(DMXMap="",i=0;i<512;i++)DMXMap+='<div class="anytype type'+o[i]+'">'+String(i+1)+"<br />"+n[o[i]]+"</div>";document.getElementById("map").innerHTML=DMXMap}
</script><style>
.anytype{border:1px solid #fff;margin:1px;float:left;width:100px;height:100px}.S{margin:0;border:2px solid #fff}.type7{color:#888;border:1px dotted grey}.type6{color:#fff}.type4{color:#fff;font-weight:700}.type3{color:#00f;font-weight:700}.type2{color:#0f0;font-weight:700}.type1{color:red;font-weight:700}.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}
</style></head><body onload="FM()"><div id="map">...</div></body></html>)=====";


#else
const char PAGE_dmxmap[] PROGMEM = R"=====()=====";
#endif

// Autogenerated from wled00/data/update.htm, do not edit!!
const uint16_t PAGE_update_length = 616;
const uint8_t PAGE_update[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0x75, 0x53, 0x5d, 0x6f, 0xd4, 0x30,
  0x10, 0x7c, 0xcf, 0xaf, 0x70, 0xfd, 0x74, 0x27, 0x71, 0x76, 0x41, 0xe2, 0x81, 0x92, 0xa4, 0x50,
  0x5a, 0xa1, 0x4a, 0x48, 0xad, 0xd4, 0x16, 0xc4, 0x13, 0x72, 0xec, 0xcd, 0xc5, 0x9c, 0x63, 0xa7,
  0xf6, 0xe6, 0x4e, 0x27, 0xd4, 0xff, 0xce, 0xc6, 0xb9, 0x2b, 0x88, 0x8f, 0x97, 0x28, 0xce, 0xce,
  0x8e, 0x77, 0x67, 0x26, 0xe5, 0xc9, 0xe5, 0xcd, 0x87, 0xfb, 0xaf, 0xb7, 0x57, 0xac, 0xc3, 0xde,
  0xd5, 0xe5, 0xe1, 0x09, 0xca, 0xd4, 0x65, 0x0f, 0xa8, 0x98, 0x0e, 0x1e, 0xc1, 0x63, 0xc5, 0x77,
  0xd6, 0x60, 0x57, 0x19, 0xd8, 0x5a, 0x0d, 0xab, 0x7c, 0xe0, 0xcc, 0xab, 0x1e, 0x2a, 0xbe, 0xb5,
  0xb0, 0x1b, 0x42, 0x44, 0x5e, 0x17, 0x25, 0x5a, 0x74, 0x50, 0x7f, 0xf9, 0x74, 0x75, 0xc9, 0x1e,
  0x06, 0xa3, 0x10, 0x4a, 0x39, 0x7f, 0x2a, 0x93, 0x8e, 0x76, 0xc0, 0xba, 0x68, 0x47, 0xaf, 0xd1,
  0x06, 0xcf, 0x2e, 0x16, 0xcb, 0x1f, 0x3b, 0xeb, 0x4d, 0xd8, 0x89, 0xce, 0x26, 0x0c, 0x71, 0x2f,
  0x1a, 0xa5, 0x37, 0x8b, 0xe5, 0xd3, 0x33, 0xe4, 0x81, 0x20, 0x26, 0xe8, 0xb1, 0xa7, 0x09, 0xc4,
  0x1a, 0xf0, 0xca, 0xc1, 0xf4, 0x7a, 0xb1, 0xbf, 0x36, 0x0b, 0x3e, 0xb6, 0x7c, 0x29, 0x12, 0xee,
  0x1d, 0x08, 0x63, 0xd3, 0xe0, 0xd4, 0xbe, 0xe2, 0x3e, 0x78, 0xe0, 0x2f, 0xfe, 0xdb, 0xd2, 0xa7,
  0xf5, 0xdf, 0x3d, 0x8d, 0x0b, 0x7a, 0xc3, 0x9f, 0x8a, 0x52, 0x1e, 0x46, 0x3c, 0x8c, 0xca, 0x52,
  0xd4, 0x15, 0x97, 0x09, 0x10, 0xad, 0x5f, 0x27, 0x99, 0xc4, 0xf7, 0x74, 0x3e, 0x54, 0x6f, 0x78,
  0xfd, 0x1b, 0x72, 0xa2, 0xaa, 0x8b, 0x77, 0xb6, 0x9f, 0x04, 0x60, 0x63, 0x74, 0x0b, 0x3e, 0xd3,
  0xeb, 0x94, 0xf8, 0xf2, 0x2d, 0x21, 0x33, 0xa2, 0x94, 0xb3, 0xa4, 0x4d, 0x30, 0x7b, 0x16, 0xbc,
  0x0b, 0xca, 0x54, 0xfc, 0x23, 0xe0, 0xe7, 0xc5, 0x92, 0xe8, 0xba, 0x57, 0x75, 0x91, 0x25, 0xbb,
  0x0b, 0x2d, 0xee, 0x54, 0x84, 0x67, 0xed, 0xa8, 0x52, 0xb6, 0x21, 0xf6, 0x8c, 0xbc, 0xe8, 0x02,
  0xf5, 0xdc, 0xde, 0xdc, 0xdd, 0x73, 0xa6, 0xb2, 0x3c, 0x15, 0x17, 0x72, 0xcc, 0x40, 0xce, 0x2c,
  0xd5, 0x48, 0x10, 0x56, 0x00, 0x49, 0xb7, 0x1f, 0xc8, 0x95, 0x7e, 0x74, 0x68, 0x07, 0x15, 0x51,
  0x4e, 0x04, 0x2b, 0x82, 0x29, 0x4e, 0x57, 0xa7, 0xb1, 0xe9, 0x2d, 0xd9, 0xf9, 0x30, 0xdd, 0x7c,
  0xed, 0x13, 0x2a, 0xe7, 0xc0, 0xb0, 0x2d, 0xc4, 0x44, 0x94, 0x67, 0xac, 0x4c, 0x83, 0xf2, 0xac,
  0xd0, 0x4e, 0xa5, 0x54, 0xf1, 0x64, 0x07, 0x5e, 0x9f, 0x8a, 0x97, 0xaf, 0xc5, 0xe9, 0x4a, 0x9d,
  0xd2, 0x36, 0x54, 0xa4, 0x2d, 0x62, 0x7d, 0x19, 0x76, 0x79, 0x0b, 0x86, 0x1d, 0x30, 0x47, 0x23,
  0x24, 0x64, 0x8d, 0xf5, 0x2a, 0xee, 0x89, 0x42, 0xb1, 0xa2, 0x8b, 0xd0, 0x56, 0xbc, 0x43, 0x1c,
  0xd2, 0x99, 0x94, 0x6b, 0x8b, 0xdd, 0xd8, 0x08, 0x1d, 0x7a, 0xf9, 0xde, 0x46, 0x1d, 0x42, 0xd8,
  0x58, 0x90, 0xd3, 0xca, 0x32, 0x82, 0x03, 0x95, 0x20, 0x71, 0x86, 0x2a, 0x92, 0x5f, 0x15, 0xff,
  0xd6, 0x38, 0xe5, 0x37, 0x24, 0x8b, 0xed, 0xd7, 0xac, 0xc8, 0x26, 0x1c, 0x79, 0xe8, 0x8b, 0x48,
  0x9d, 0x05, 0x67, 0x92, 0xb0, 0xe1, 0x40, 0x7b, 0xa4, 0xf8, 0x93, 0x5a, 0xa4, 0xed, 0xfa, 0x3c,
  0xcb, 0x5f, 0xb5, 0x34, 0xe1, 0x2a, 0x3d, 0x8e, 0x24, 0xed, 0x14, 0x52, 0xa9, 0xf2, 0x0e, 0xa5,
  0xf5, 0xc3, 0x88, 0x6c, 0x96, 0xab, 0xb5, 0x0e, 0x8e, 0x81, 0x3e, 0x8a, 0x1a, 0xe1, 0x71, 0xb4,
  0x11, 0xcc, 0x8c, 0x6e, 0x46, 0x44, 0xca, 0xe4, 0x0c, 0x9f, 0x65, 0x24, 0xb2, 0xd9, 0xa9, 0x93,
  0x52, 0xce, 0xe5, 0x7f, 0x40, 0xe7, 0xc3, 0xa4, 0xbd, 0x76, 0x56, 0x6f, 0x2a, 0x7e, 0x31, 0x49,
  0x7f, 0x41, 0x51, 0xff, 0xd5, 0x94, 0x3d, 0xaa, 0x4b, 0x63, 0xb7, 0x45, 0xb6, 0x72, 0x0a, 0x2a,
  0xd1, 0xd4, 0x99, 0x9d, 0xd2, 0x27, 0x84, 0x20, 0x70, 0x26, 0xbf, 0xcd, 0xcb, 0x32, 0x13, 0x98,
  0x0f, 0xc8, 0xb4, 0x0b, 0x74, 0x08, 0x91, 0x66, 0x6d, 0x23, 0xa4, 0x2e, 0xfb, 0x31, 0xa8, 0x35,
  0xb0, 0xb3, 0x65, 0x29, 0x89, 0x6f, 0x5a, 0x77, 0x4a, 0xdd, 0x14, 0xc1, 0xe9, 0xdf, 0xfe, 0x09,
  0x49, 0x6c, 0xf3, 0x58, 0xf1, 0x03, 0x00, 0x00
};


// Autogenerated from wled00/data/welcome.htm, do not edit!!
const uint16_t PAGE_welcome_length = 1531;
const uint8_t PAGE_welcome[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0x95, 0x56, 0x5b, 0x93, 0xaa, 0x3a,
  0x16, 0x7e, 0xef, 0x5f, 0xc1, 0x76, 0x6a, 0xea, 0x3c, 0xb8, 0xbb, 0xb9, 0x89, 0xa8, 0x6d, 0xf7,
  0x19, 0xc5, 0x4b, 0x7b, 0x03, 0x6f, 0x78, 0x7b, 0x0b, 0x10, 0x20, 0x08, 0x04, 0x93, 0x80, 0x97,
  0xae, 0xfe, 0xef, 0x27, 0xe8, 0xee, 0xa9, 0x7d, 0xea, 0x3c, 0x4c, 0x4d, 0x2c, 0x21, 0xf9, 0x92,
  0xb5, 0xd6, 0xb7, 0x92, 0xb8, 0x3e, 0xdb, 0x3f, 0x7a, 0x96, 0xb1, 0xde, 0xcf, 0xfb, 0x42, 0xc8,
  0x92, 0xf8, 0xbd, 0xfd, 0xeb, 0x09, 0x81, 0xf7, 0xde, 0x4e, 0x20, 0x03, 0x82, 0x1b, 0x02, 0x42,
  0x21, 0x7b, 0xab, 0xe4, 0xcc, 0x7f, 0x6e, 0x54, 0x7e, 0xa1, 0x4f, 0x2e, 0x4e, 0x19, 0x4c, 0x39,
  0x7c, 0x46, 0x1e, 0x0b, 0xdf, 0x3c, 0x58, 0x20, 0x17, 0x3e, 0xdf, 0x07, 0x15, 0x21, 0x05, 0x09,
  0x7c, 0xab, 0x14, 0x08, 0x9e, 0x33, 0x4c, 0xd8, 0xb7, 0xcd, 0x03, 0x65, 0x21, 0x4c, 0xe0, 0xb3,
  0x8b, 0x63, 0x4c, 0x2a, 0xbf, 0xb9, 0xf9, 0x97, 0x72, 0x6f, 0x7c, 0x2d, 0x43, 0x2c, 0x86, 0xef,
  0x5b, 0x18, 0xbb, 0x38, 0x81, 0x3f, 0xda, 0xe2, 0x63, 0xdc, 0xa6, 0xec, 0xca, 0x5f, 0x4f, 0x0e,
  0xf6, 0xae, 0x9f, 0x3e, 0xb7, 0x7a, 0xf6, 0x41, 0x82, 0xe2, 0x6b, 0x6b, 0x03, 0x89, 0x07, 0x52,
  0xf0, 0xf3, 0x03, 0xc6, 0x05, 0x64, 0xc8, 0x05, 0x3f, 0x29, 0x48, 0xe9, 0x33, 0x85, 0x04, 0xf9,
  0xaf, 0x0c, 0x5e, 0xd8, 0x33, 0x88, 0x51, 0x90, 0xb6, 0x5c, 0x1e, 0x06, 0x92, 0x57, 0x07, 0xb8,
  0xc7, 0x80, 0xe0, 0x3c, 0xf5, 0x1e, 0x1c, 0x5a, 0x65, 0xe0, 0xd7, 0x04, 0x90, 0x00, 0xa5, 0x2d,
  0xe9, 0xf5, 0x17, 0xe6, 0xfb, 0xfe, 0x97, 0x93, 0x33, 0x86, 0xd3, 0x4f, 0x9c, 0xb3, 0x18, 0xa5,
  0xb0, 0x9c, 0xcb, 0x09, 0xe5, 0x93, 0x19, 0x46, 0x77, 0x4f, 0x19, 0xf0, 0x3c, 0x94, 0x06, 0xad,
  0x46, 0x76, 0xf9, 0xb6, 0x97, 0x25, 0xde, 0xbf, 0xef, 0x41, 0x4b, 0x51, 0xcb, 0xfe, 0x3d, 0x3e,
  0x23, 0x9c, 0x90, 0x8f, 0x49, 0xd2, 0xca, 0xb3, 0x0c, 0x12, 0x17, 0x50, 0xf8, 0xfa, 0x7b, 0x06,
  0xe1, 0x37, 0xf3, 0x07, 0x4a, 0xd1, 0x0d, 0xb6, 0xe4, 0x26, 0xb7, 0xfe, 0x27, 0x57, 0x55, 0x55,
  0x7f, 0xa3, 0xf8, 0xea, 0x60, 0xe2, 0x41, 0xd2, 0x92, 0x04, 0x8a, 0x63, 0xe4, 0x09, 0xbf, 0x61,
  0xcf, 0x04, 0x78, 0x28, 0xa7, 0x2d, 0x45, 0xcb, 0x2e, 0x5f, 0x28, 0x09, 0x3e, 0x1f, 0xac, 0x9a,
  0x9a, 0x74, 0x67, 0x7b, 0x79, 0x9c, 0x54, 0xab, 0xa1, 0xfc, 0xfb, 0x15, 0x25, 0x20, 0x80, 0xcf,
  0x04, 0xa6, 0xdc, 0xac, 0xcc, 0x27, 0x43, 0x17, 0x18, 0x03, 0x06, 0xbd, 0x7f, 0xcc, 0xb8, 0x04,
  0xd1, 0xec, 0x19, 0x7a, 0x01, 0xa4, 0xdf, 0x19, 0xd7, 0x8a, 0x50, 0x90, 0xca, 0xcf, 0x2b, 0x48,
  0xf9, 0x72, 0x86, 0x70, 0xda, 0xf2, 0x91, 0x20, 0xd3, 0xaf, 0xff, 0x1c, 0xe1, 0xd5, 0x27, 0xfc,
  0xc8, 0xa9, 0xe0, 0xa3, 0x4f, 0x9f, 0xe0, 0xe4, 0x13, 0x67, 0xc0, 0x45, 0xec, 0xda, 0x92, 0xbe,
  0x18, 0xfe, 0xef, 0x40, 0xfe, 0xfa, 0x7a, 0x49, 0x00, 0x4a, 0x3f, 0xff, 0xee, 0xe0, 0x45, 0xa3,
  0xc2, 0x8b, 0x4e, 0x05, 0x07, 0xb3, 0xf0, 0xeb, 0xa9, 0x2d, 0x3e, 0x8e, 0xbf, 0x2d, 0x3e, 0x6e,
  0x66, 0x79, 0x0b, 0xde, 0xdb, 0x3c, 0x2f, 0x01, 0xc4, 0xfc, 0xf2, 0xf0, 0x8b, 0x44, 0x89, 0xfb,
  0x56, 0xf1, 0x00, 0x03, 0xad, 0x3b, 0x6b, 0x31, 0x4b, 0x03, 0xbe, 0x7f, 0x14, 0xd6, 0x6b, 0x3f,
  0xd1, 0xa6, 0x6b, 0x2d, 0xcf, 0xd2, 0x64, 0x18, 0xe0, 0x0e, 0x6f, 0xe6, 0xca, 0x0e, 0xfb, 0x76,
  0xc0, 0x7b, 0x43, 0xa9, 0x1c, 0xfb, 0x46, 0x67, 0xc6, 0x5f, 0x3d, 0x70, 0x9b, 0x5a, 0x79, 0x09,
  0x74, 0x76, 0xe6, 0x6a, 0x29, 0x8d, 0x3a, 0x84, 0xd6, 0xdc, 0xfa, 0xa2, 0x04, 0x96, 0xe9, 0xc2,
  0x96, 0xbb, 0x9d, 0x8e, 0x71, 0x89, 0xce, 0x45, 0x63, 0xbf, 0xb0, 0x39, 0xd6, 0x9d, 0xda, 0xfd,
  0x8b, 0xbd, 0xbc, 0xcf, 0x77, 0x1b, 0x72, 0x60, 0xd8, 0xe2, 0x6d, 0x72, 0x12, 0x45, 0x31, 0xc1,
  0x3a, 0xdd, 0xce, 0xcc, 0x86, 0x63, 0x55, 0x0f, 0xa3, 0x3d, 0x3b, 0x80, 0xce, 0xbc, 0x49, 0x3a,
  0xf3, 0xea, 0xc7, 0x8c, 0x1a, 0x68, 0x58, 0x5d, 0x77, 0x46, 0x56, 0x3a, 0x5b, 0x49, 0x93, 0x93,
  0x69, 0xeb, 0x93, 0x79, 0x3a, 0xb5, 0x0f, 0x16, 0x39, 0xd5, 0x0b, 0x6e, 0x59, 0x33, 0x3a, 0xc1,
  0x30, 0xc4, 0x60, 0x5a, 0x15, 0x8b, 0xba, 0x11, 0xe0, 0xfe, 0x65, 0xb6, 0xbe, 0x13, 0x8a, 0x93,
  0x9a, 0xd5, 0x28, 0x3b, 0x07, 0x6f, 0x30, 0xb6, 0x6c, 0xf1, 0x7f, 0xb4, 0x73, 0xa7, 0x6b, 0x76,
  0x4e, 0x6a, 0x69, 0x60, 0xec, 0xba, 0xa3, 0xed, 0xae, 0xcc, 0x4f, 0xef, 0xf1, 0x87, 0x75, 0x3e,
  0x7f, 0x7c, 0x38, 0xf5, 0xf0, 0x58, 0x4e, 0x99, 0x52, 0xdc, 0x5f, 0x6c, 0x96, 0xa3, 0x95, 0xae,
  0x6e, 0xa2, 0xcd, 0xd4, 0x98, 0x75, 0x3b, 0xfd, 0xfd, 0x88, 0x34, 0x8c, 0xfd, 0xe4, 0x48, 0xbc,
  0x48, 0xf5, 0xe5, 0xb1, 0xaa, 0xdf, 0xc0, 0x6e, 0x60, 0x64, 0x6b, 0xab, 0x9a, 0x21, 0xd0, 0x0b,
  0x9c, 0xf9, 0x89, 0x5f, 0xcc, 0xe6, 0x66, 0x21, 0x9d, 0xae, 0xa4, 0x98, 0x44, 0xb5, 0x53, 0x3d,
  0x91, 0x0e, 0x44, 0x0e, 0xab, 0x33, 0xfd, 0x32, 0x90, 0x6f, 0xcb, 0x24, 0xdd, 0xde, 0x4e, 0x9b,
  0xa6, 0x28, 0x79, 0x4a, 0xc4, 0xd8, 0x10, 0x33, 0x4b, 0xce, 0x8b, 0xa6, 0x67, 0x5b, 0xce, 0x19,
  0x46, 0x1a, 0x3e, 0x65, 0xba, 0x7f, 0xdb, 0x6e, 0xe6, 0x71, 0x23, 0xad, 0x37, 0x41, 0x46, 0x6e,
  0xd8, 0xb2, 0x6d, 0xc7, 0x29, 0xbc, 0x91, 0xb3, 0x51, 0xad, 0xe9, 0x19, 0xb1, 0x9d, 0x5b, 0x2f,
  0x56, 0x43, 0xd9, 0xd3, 0x93, 0xc6, 0x48, 0xf5, 0xe1, 0xaa, 0x6f, 0x4a, 0x91, 0x62, 0x40, 0xd3,
  0xb1, 0xf6, 0xb5, 0xd9, 0x05, 0x05, 0x91, 0x35, 0x35, 0xdc, 0x1a, 0x3d, 0xd0, 0xf5, 0x46, 0x89,
  0x65, 0xd7, 0xb8, 0x5e, 0x6b, 0xe7, 0xd1, 0x68, 0x3a, 0x9d, 0x46, 0x9d, 0x0b, 0xbb, 0x1e, 0x63,
  0x76, 0x52, 0x88, 0xb3, 0xb6, 0xab, 0x27, 0x24, 0xc9, 0xa6, 0x46, 0x76, 0xa6, 0xa5, 0xc4, 0x10,
  0x0c, 0xac, 0x25, 0x46, 0x11, 0x50, 0x62, 0x6d, 0x36, 0xd3, 0x80, 0xa4, 0x00, 0xb7, 0xb9, 0x07,
  0x72, 0x7d, 0x75, 0xd4, 0x58, 0x00, 0xe6, 0xc4, 0xce, 0xa2, 0x43, 0xee, 0x48, 0xdd, 0x69, 0x7d,
  0x7f, 0x5a, 0x5d, 0x26, 0x67, 0xe7, 0x43, 0xd7, 0x77, 0xb6, 0x9d, 0xac, 0x8e, 0xe3, 0xdd, 0x2a,
  0x6e, 0x2c, 0x18, 0x98, 0xe5, 0xd7, 0x71, 0x78, 0xd2, 0x12, 0x30, 0xd5, 0xd2, 0xf5, 0x64, 0x93,
  0x1d, 0x0c, 0x59, 0xdd, 0x24, 0x6c, 0x96, 0xad, 0x07, 0x6b, 0x25, 0xa8, 0x15, 0xe3, 0x68, 0x9d,
  0x0f, 0xfd, 0xd9, 0xed, 0xb6, 0xf3, 0x19, 0xb2, 0x0f, 0x69, 0xe8, 0xb1, 0xc0, 0x91, 0x2f, 0xd8,
  0x2f, 0xae, 0xd9, 0x12, 0xa7, 0xda, 0x3a, 0x32, 0xd3, 0xcb, 0xde, 0x6c, 0xde, 0xc6, 0xb8, 0x3e,
  0xd1, 0x48, 0xbe, 0x1a, 0xdd, 0x16, 0x6c, 0x98, 0x6f, 0x0e, 0xa9, 0x74, 0x69, 0xca, 0x64, 0x52,
  0x78, 0x1f, 0xdd, 0x22, 0x51, 0x9b, 0x7d, 0x7d, 0x75, 0x3d, 0xd4, 0xae, 0x52, 0x7d, 0x78, 0x6b,
  0x74, 0x7b, 0xdd, 0xc1, 0xe4, 0x46, 0x77, 0x49, 0xe8, 0x9e, 0xaf, 0x3e, 0x1d, 0x1e, 0x9a, 0x9b,
  0xcc, 0x09, 0x31, 0x32, 0x50, 0x0a, 0x2e, 0x73, 0x33, 0x19, 0x6e, 0x93, 0xed, 0x96, 0x98, 0xb6,
  0x12, 0x75, 0xa5, 0x53, 0xfd, 0xa3, 0xb0, 0x42, 0x53, 0x1e, 0xdb, 0xcc, 0x40, 0x97, 0x05, 0xcb,
  0x94, 0x40, 0x93, 0x0f, 0x1b, 0x7b, 0x37, 0x9a, 0xaf, 0x94, 0xe5, 0xac, 0xd3, 0xab, 0x56, 0xd7,
  0x4a, 0xba, 0x17, 0x7b, 0xa4, 0x17, 0x59, 0xb3, 0x9e, 0x55, 0x3b, 0x1b, 0x7a, 0x94, 0x98, 0xfb,
  0x48, 0xf5, 0x74, 0x35, 0x25, 0xbb, 0x3c, 0x68, 0xec, 0x59, 0x33, 0x37, 0xbb, 0x8d, 0x8b, 0x69,
  0xcb, 0xee, 0xc4, 0xdc, 0x6d, 0x63, 0x7b, 0x60, 0xee, 0x8c, 0x68, 0x23, 0x67, 0x87, 0x70, 0xb8,
  0xee, 0x37, 0xd4, 0x44, 0x29, 0xb6, 0xfe, 0xde, 0x17, 0xcd, 0x61, 0x54, 0xeb, 0x06, 0xf2, 0x2d,
  0xd7, 0xc6, 0x3d, 0x55, 0x9c, 0xa5, 0x1f, 0xda, 0x61, 0xeb, 0x4f, 0xad, 0x23, 0x75, 0x38, 0xa5,
  0x61, 0x14, 0xec, 0x66, 0xa6, 0x26, 0x1a, 0xca, 0x70, 0xb7, 0x1f, 0x0e, 0x06, 0xdb, 0xa6, 0x99,
  0xf0, 0xfa, 0x5d, 0xdf, 0xe5, 0x4c, 0x1a, 0x26, 0xd5, 0x31, 0x05, 0x57, 0x23, 0x6a, 0xdc, 0xa4,
  0x34, 0x8c, 0x86, 0xc5, 0x7e, 0x7c, 0xdb, 0xf8, 0x35, 0xb0, 0xba, 0x71, 0x26, 0x94, 0x54, 0x73,
  0x7d, 0xa1, 0x8c, 0x47, 0x1e, 0xde, 0xa9, 0x7b, 0x6b, 0x11, 0x59, 0x34, 0x4e, 0xe8, 0x56, 0x8e,
  0xc6, 0xaa, 0xac, 0x48, 0x69, 0xbf, 0x19, 0xf8, 0x58, 0x6f, 0x86, 0x6b, 0x60, 0x7a, 0x2e, 0x3d,
  0x6d, 0x96, 0x75, 0x59, 0x8a, 0x0b, 0xab, 0xa6, 0x67, 0x71, 0x0c, 0x60, 0x73, 0x09, 0x0f, 0x0d,
  0x49, 0xbb, 0x4d, 0xb0, 0x02, 0x54, 0x04, 0xf6, 0x9a, 0xab, 0x6b, 0xd9, 0x3a, 0xd9, 0x18, 0x9d,
  0xba, 0x37, 0xd6, 0x3e, 0x74, 0x53, 0xa2, 0x44, 0x04, 0x74, 0x7e, 0xee, 0xc2, 0xd0, 0xd1, 0x91,
  0xdf, 0x0f, 0x73, 0xba, 0xbc, 0xff, 0xb4, 0xfa, 0xf1, 0x60, 0x7d, 0x5c, 0xe5, 0x8b, 0xc4, 0x30,
  0x2a, 0xef, 0x4f, 0x6d, 0x0f, 0x15, 0x82, 0x1b, 0x03, 0x4a, 0xdf, 0x2a, 0x65, 0x51, 0xe2, 0x72,
  0x14, 0xca, 0xdf, 0x5a, 0x24, 0x30, 0x2c, 0x6c, 0xa7, 0xfd, 0x1e, 0xd7, 0x24, 0x0e, 0xb6, 0x43,
  0xf5, 0xfd, 0x69, 0x1d, 0x82, 0xf4, 0x28, 0x5c, 0x71, 0x2e, 0xf0, 0xfa, 0x2e, 0xa0, 0x94, 0x32,
  0x10, 0x73, 0xb5, 0x08, 0x84, 0xe4, 0x2a, 0x80, 0x2c, 0x8b, 0x79, 0x51, 0x2f, 0x2b, 0x5a, 0x69,
  0xa1, 0xf2, 0xaa, 0xf5, 0x6e, 0x72, 0x3d, 0x10, 0x28, 0x83, 0x19, 0x6d, 0xb5, 0x45, 0x87, 0x23,
  0xe4, 0xfe, 0x7d, 0x32, 0x70, 0x9a, 0x42, 0x97, 0x09, 0x5c, 0x1c, 0x85, 0x04, 0x7b, 0x79, 0x7c,
  0x0f, 0xc6, 0xfd, 0x12, 0x21, 0xc6, 0x2e, 0x88, 0x85, 0x2d, 0x1a, 0x20, 0x21, 0x84, 0x84, 0x0b,
  0xe2, 0xdd, 0xe6, 0xae, 0x4d, 0xc2, 0x13, 0x4e, 0x5d, 0x1e, 0xe3, 0xf8, 0xf6, 0xc7, 0x19, 0xa5,
  0x1e, 0x3e, 0xbf, 0x94, 0x8b, 0xcb, 0x80, 0x2f, 0x21, 0x81, 0xfe, 0x5b, 0xe5, 0x45, 0xe4, 0xca,
  0xcd, 0x38, 0x1f, 0x2a, 0x9e, 0x91, 0x8f, 0x2a, 0x7f, 0xbc, 0xdf, 0xfd, 0x7c, 0x83, 0x9c, 0xc2,
  0xdd, 0xcf, 0x83, 0x07, 0x7a, 0x7f, 0x1a, 0xe7, 0x94, 0x73, 0x20, 0xd7, 0x32, 0x03, 0x16, 0x22,
  0x2a, 0x70, 0xf1, 0xe3, 0x59, 0x09, 0x9d, 0x79, 0xc9, 0x0a, 0xfe, 0xd9, 0x16, 0xd1, 0xfb, 0xff,
  0x17, 0xff, 0x4f, 0xca, 0x85, 0x09, 0x12, 0xca, 0x43, 0xaf, 0xf1, 0x3d, 0xbd, 0x52, 0xf1, 0x09,
  0x8e, 0xe9, 0x8f, 0xbf, 0x47, 0x17, 0xf9, 0xce, 0xf3, 0xfd, 0x17, 0x1f, 0x95, 0x5d, 0xbc, 0xff,
  0x0d, 0xf9, 0x0b, 0x5c, 0xd5, 0x96, 0x6f, 0x9c, 0x08, 0x00, 0x00
};


// Autogenerated from wled00/data/liveview.htm, do not edit!!
const uint16_t PAGE_liveview_length = 1011;
const uint8_t PAGE_liveview[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0x95, 0x55, 0x59, 0x6f, 0x1b, 0x37,
  0x10, 0x7e, 0xf7, 0xaf, 0x58, 0xd3, 0x8d, 0x43, 0xc6, 0xd4, 0xea, 0x68, 0x2e, 0x48, 0xa2, 0x8c,
  0x1c, 0x7e, 0x28, 0xe0, 0xd6, 0x46, 0xed, 0xc2, 0x28, 0x0c, 0x03, 0xa1, 0x76, 0x47, 0x12, 0x63,
  0x8a, 0x14, 0xc8, 0x59, 0xc9, 0x82, 0xb2, 0xff, 0xbd, 0xc3, 0x5d, 0xc9, 0x3d, 0x10, 0x14, 0x88,
  0x1e, 0x44, 0x72, 0x2e, 0xce, 0x37, 0xf3, 0x71, 0x76, 0x7c, 0xfc, 0xf9, 0xea, 0xd3, 0xed, 0x9f,
  0xd7, 0x17, 0xd9, 0x02, 0x97, 0x76, 0x32, 0xde, 0xff, 0x83, 0x2e, 0x27, 0xe3, 0x25, 0xa0, 0xce,
  0x9c, 0x5e, 0x82, 0x62, 0x6b, 0x03, 0x9b, 0x95, 0x0f, 0xc8, 0xb2, 0xa3, 0xc2, 0x3b, 0x04, 0x87,
  0x8a, 0x6d, 0x4c, 0x89, 0x0b, 0x55, 0xc2, 0xda, 0x14, 0xd0, 0x69, 0x0e, 0xd2, 0x38, 0x83, 0x46,
  0xdb, 0x4e, 0x2c, 0xb4, 0x05, 0xd5, 0x97, 0x4b, 0x12, 0x2c, 0xab, 0xe5, 0xe1, 0xcc, 0xf6, 0x31,
  0x8f, 0x8a, 0x85, 0x0e, 0x11, 0x28, 0x46, 0x85, 0xb3, 0xce, 0x7b, 0xf6, 0xaf, 0xab, 0x70, 0x01,
  0x4b, 0xe8, 0x14, 0xde, 0xfa, 0xc0, 0xb2, 0xe7, 0xcb, 0x4e, 0x06, 0xcd, 0x8f, 0x4c, 0xd1, 0xa0,
  0x85, 0xc9, 0xd1, 0xdd, 0xe5, 0xc5, 0xe7, 0xec, 0xd2, 0xac, 0x21, 0xbb, 0x0e, 0x90, 0xd2, 0x1b,
  0x77, 0x5b, 0xcd, 0x38, 0xe2, 0x36, 0x19, 0x4c, 0x7d, 0xb9, 0xdd, 0x2d, 0x75, 0x98, 0x1b, 0x37,
  0xec, 0xd5, 0x27, 0x85, 0x76, 0xeb, 0xdd, 0x54, 0x17, 0x8f, 0xf3, 0xe0, 0x2b, 0x57, 0x0e, 0x4f,
  0x7a, 0xbd, 0xde, 0x68, 0x66, 0x2c, 0x42, 0x18, 0x4e, 0x83, 0x99, 0x2f, 0xd0, 0x41, 0x8c, 0xbc,
  0xff, 0xee, 0xcd, 0x0b, 0x31, 0x6a, 0xd0, 0x0c, 0xfb, 0xbd, 0xde, 0x8b, 0xd1, 0x02, 0x92, 0xae,
  0xdd, 0xaf, 0x7c, 0x24, 0x7c, 0xde, 0x0d, 0xf5, 0x34, 0x7a, 0x5b, 0x21, 0xd4, 0x47, 0xe3, 0x6e,
  0x7b, 0xdd, 0x38, 0x16, 0xc1, 0xac, 0x70, 0x72, 0xb4, 0xd6, 0x21, 0xdb, 0x44, 0x59, 0xc8, 0x02,
  0x9f, 0x64, 0xa9, 0x4a, 0x5f, 0x54, 0x4b, 0x42, 0x20, 0x71, 0xe9, 0x2b, 0x54, 0xae, 0xb2, 0x76,
  0x34, 0xab, 0x5c, 0x91, 0xc2, 0x64, 0x65, 0xd0, 0x1b, 0x8e, 0x12, 0xa4, 0x93, 0x5e, 0xec, 0x8a,
  0x7c, 0x5f, 0xd1, 0xfc, 0xe0, 0x74, 0x61, 0x21, 0x2d, 0x79, 0x61, 0x0d, 0x2d, 0x77, 0x49, 0x3b,
  0xb2, 0x80, 0x99, 0x51, 0x7b, 0xdb, 0x57, 0xd0, 0xe5, 0x2e, 0xb7, 0xe0, 0xe6, 0xb8, 0xe8, 0xa0,
  0x18, 0xcd, 0x7c, 0xe0, 0xc9, 0x20, 0x28, 0x1c, 0x85, 0xf1, 0x41, 0x33, 0x0a, 0x67, 0x0a, 0x04,
  0xe5, 0x93, 0x13, 0x5e, 0x7b, 0x93, 0xf2, 0x55, 0x9e, 0x3b, 0x19, 0x84, 0x3c, 0x08, 0x7f, 0x87,
  0x02, 0xf9, 0xaf, 0x1a, 0x17, 0x79, 0x53, 0x1d, 0xce, 0x03, 0x85, 0x7b, 0x65, 0xba, 0x20, 0x64,
  0x4f, 0x36, 0xf2, 0x02, 0x8c, 0xe5, 0x86, 0x3c, 0xf2, 0xb6, 0x22, 0xa2, 0x7e, 0x86, 0x51, 0xad,
  0x4a, 0x8d, 0xc0, 0xc5, 0xce, 0xcc, 0x78, 0x99, 0x2f, 0x4c, 0x59, 0x82, 0x13, 0x01, 0xb0, 0x0a,
  0x2e, 0x2b, 0x2c, 0xe8, 0x70, 0x6b, 0x96, 0x40, 0xe8, 0x79, 0x53, 0x03, 0x21, 0xd7, 0xde, 0x94,
  0xed, 0x5e, 0x11, 0x09, 0x0e, 0xca, 0x36, 0x8a, 0x1c, 0xbc, 0xe9, 0x09, 0x02, 0x02, 0x58, 0x2c,
  0x38, 0xcb, 0xbb, 0x5f, 0xa3, 0x77, 0x5d, 0x4b, 0x6d, 0x66, 0x22, 0x27, 0x66, 0x38, 0x8e, 0x6a,
  0xc2, 0x31, 0xf7, 0x8f, 0xdf, 0xbe, 0xf1, 0xef, 0xc5, 0xfe, 0x9f, 0xb0, 0x14, 0x57, 0x62, 0x9e,
  0x02, 0x72, 0x21, 0xfe, 0x8e, 0xb6, 0x6b, 0xba, 0xd0, 0x93, 0x7d, 0x52, 0x5a, 0x28, 0xa3, 0x4c,
  0x1d, 0x11, 0x6a, 0xc2, 0x4e, 0xd8, 0x19, 0xc7, 0x7b, 0x78, 0xd8, 0x57, 0x71, 0xf2, 0xf6, 0xbc,
  0x39, 0xc5, 0x6a, 0x1a, 0x31, 0x18, 0x37, 0xe7, 0x03, 0x31, 0x4c, 0x12, 0x0a, 0xfb, 0x23, 0x99,
  0xbc, 0xee, 0x89, 0x5a, 0xe4, 0x85, 0x4e, 0x00, 0xd3, 0xf5, 0x3f, 0x8c, 0xa2, 0xfe, 0x47, 0xe9,
  0x6f, 0xda, 0xaa, 0x17, 0x44, 0x9a, 0x39, 0x1c, 0xf8, 0xf2, 0x71, 0xfb, 0x4b, 0xc9, 0x59, 0x22,
  0x3c, 0x6b, 0x3a, 0x4c, 0x6c, 0x21, 0xe5, 0xa7, 0xf4, 0x94, 0x9e, 0x90, 0xb3, 0x41, 0x49, 0xe2,
  0x4e, 0xff, 0x58, 0x6d, 0x8c, 0x2b, 0xfd, 0x26, 0xb7, 0x9e, 0x92, 0xa1, 0x60, 0xf9, 0x22, 0xc0,
  0x2c, 0x27, 0x19, 0x3c, 0x5d, 0xcd, 0x38, 0x3b, 0xdf, 0x44, 0x26, 0xc4, 0x0e, 0xc3, 0x76, 0xb7,
  0x89, 0x0a, 0xfd, 0x2a, 0xdf, 0xdb, 0x6f, 0x62, 0xbd, 0xcf, 0x5e, 0xec, 0x6a, 0xba, 0x7c, 0x13,
  0x4f, 0x4f, 0x37, 0x31, 0x0f, 0x34, 0x33, 0xb6, 0x37, 0x48, 0x69, 0x2a, 0xa5, 0xee, 0x60, 0x7a,
  0xe3, 0x8b, 0x47, 0xc0, 0xfc, 0xea, 0xfa, 0xe2, 0x37, 0x41, 0xea, 0x08, 0x44, 0x2b, 0xb6, 0x7b,
  0x69, 0xd7, 0x2f, 0x87, 0x18, 0x2a, 0xa8, 0x99, 0x18, 0x81, 0x8d, 0xb0, 0x4b, 0x7c, 0xc5, 0xff,
  0xe6, 0x22, 0x41, 0x61, 0xbe, 0x22, 0xde, 0xa5, 0x99, 0x20, 0x9d, 0x82, 0x3c, 0x5a, 0x1a, 0x33,
  0xbc, 0x2f, 0x21, 0xa7, 0x40, 0xf1, 0xce, 0x20, 0xd1, 0xa3, 0xcb, 0xc4, 0x79, 0xa7, 0x3f, 0x4c,
  0x7c, 0xca, 0x7a, 0x22, 0x8f, 0x2b, 0x6b, 0xb0, 0x91, 0x4a, 0x4f, 0xee, 0x9e, 0x5e, 0xb5, 0x71,
  0x94, 0xd7, 0xca, 0x6a, 0x72, 0x65, 0x0b, 0xc4, 0x15, 0x93, 0x2c, 0xc1, 0x1a, 0x1d, 0x9e, 0xc6,
  0xa4, 0x7f, 0x7a, 0xca, 0xfd, 0x99, 0x22, 0xa7, 0x33, 0x77, 0xdf, 0x7b, 0x10, 0x92, 0xe0, 0x28,
  0x07, 0x9b, 0xec, 0x19, 0x01, 0xa9, 0x59, 0xb7, 0xa9, 0x45, 0xee, 0x9d, 0x5f, 0x81, 0x53, 0x87,
  0xea, 0x53, 0xed, 0xbf, 0x0f, 0xac, 0xae, 0x49, 0x3e, 0x35, 0x4e, 0x87, 0xed, 0xed, 0x76, 0x45,
  0x33, 0x4d, 0x87, 0xa0, 0xb7, 0xd3, 0x6a, 0x36, 0x83, 0xc0, 0x24, 0xe9, 0x74, 0x59, 0x5e, 0xac,
  0xa9, 0x53, 0x97, 0x26, 0xd2, 0x78, 0x83, 0xc0, 0xd9, 0x92, 0x86, 0x8f, 0x9e, 0x03, 0x93, 0x89,
  0x12, 0xa9, 0xe6, 0x54, 0x58, 0x76, 0xef, 0xa7, 0x5f, 0xe9, 0x61, 0x66, 0x1f, 0x92, 0xfb, 0xc7,
  0xc6, 0xfd, 0x81, 0x51, 0x75, 0xd1, 0xdf, 0x34, 0x0c, 0x24, 0x16, 0x59, 0x4b, 0xaf, 0x81, 0xb8,
  0xa1, 0xa9, 0x55, 0x6d, 0x25, 0x53, 0xf2, 0x7f, 0x18, 0x87, 0xef, 0x1b, 0x2f, 0x0e, 0xe9, 0x9e,
  0xd6, 0x62, 0x44, 0x31, 0xdf, 0xbd, 0x3d, 0x56, 0x98, 0x80, 0xb6, 0xef, 0x73, 0xd4, 0x90, 0x7f,
  0x40, 0x21, 0xef, 0xfb, 0x0f, 0xe7, 0xaf, 0x87, 0x03, 0xf9, 0xb3, 0xc4, 0xc3, 0x0b, 0xf8, 0x12,
  0xe6, 0x53, 0xfe, 0xd3, 0x2e, 0x71, 0xbc, 0x96, 0xcd, 0x7a, 0xd6, 0x7f, 0xde, 0x0d, 0x1e, 0x6a,
  0xf1, 0x85, 0x90, 0x3e, 0x53, 0x81, 0x46, 0x35, 0x0d, 0x45, 0x6a, 0x4f, 0x08, 0x34, 0x85, 0xd8,
  0x35, 0xc0, 0x63, 0x76, 0x77, 0x93, 0x35, 0xc7, 0x21, 0xe1, 0x22, 0x5b, 0x51, 0xa7, 0x8e, 0x3f,
  0xcf, 0x8b, 0x66, 0x7a, 0xb6, 0x63, 0x73, 0xdc, 0x6d, 0x3f, 0x39, 0x69, 0x68, 0x67, 0xde, 0x59,
  0xaf, 0x4b, 0xc5, 0x88, 0xdc, 0x34, 0xef, 0x13, 0x8f, 0x75, 0xcc, 0x0c, 0x09, 0x1a, 0x4a, 0x93,
  0x6d, 0x2b, 0xa2, 0x4d, 0x32, 0x4f, 0xbe, 0xe9, 0xa3, 0xf5, 0x17, 0xb9, 0x02, 0x04, 0xa7, 0xca,
  0x06, 0x00, 0x00
};


// Autogenerated from wled00/data/liveviewws2D.htm, do not edit!!
const uint16_t PAGE_liveviewws2D_length = 870;
const uint8_t PAGE_liveviewws2D[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0x6d, 0x54, 0x6d, 0x6f, 0xdb, 0x36,
  0x10, 0xfe, 0xee, 0x5f, 0xa1, 0x70, 0x43, 0x2a, 0xc6, 0xb2, 0x64, 0xbb, 0xed, 0x96, 0xc5, 0xa2,
  0x87, 0x35, 0x0d, 0xb0, 0x02, 0xd9, 0x6a, 0x20, 0x19, 0x82, 0x21, 0x30, 0x50, 0x5a, 0x3a, 0x5b,
  0x5c, 0x25, 0xd2, 0x20, 0xcf, 0x96, 0x35, 0x47, 0xff, 0x7d, 0x47, 0xc9, 0xc9, 0x32, 0x74, 0xfe,
  0x20, 0x93, 0xf7, 0xf2, 0xdc, 0xdb, 0x73, 0x4c, 0xcf, 0x3e, 0x7e, 0xbe, 0xbe, 0xff, 0x73, 0x71,
  0x13, 0x14, 0x58, 0x95, 0xf3, 0xf4, 0xf4, 0x05, 0x99, 0xcf, 0xd3, 0x0a, 0x50, 0x06, 0x5a, 0x56,
  0x20, 0xd8, 0x5e, 0x41, 0xbd, 0x35, 0x16, 0x59, 0x30, 0xc8, 0x8c, 0x46, 0xd0, 0x28, 0x58, 0xad,
  0x72, 0x2c, 0x44, 0x0e, 0x7b, 0x95, 0xc1, 0xa8, 0xbb, 0x44, 0x4a, 0x2b, 0x54, 0xb2, 0x1c, 0xb9,
  0x4c, 0x96, 0x20, 0x26, 0x51, 0x45, 0x82, 0x6a, 0x57, 0x3d, 0xdf, 0xd9, 0x09, 0x73, 0x90, 0x15,
  0xd2, 0x3a, 0x20, 0x8c, 0x1d, 0xae, 0x47, 0x97, 0xec, 0x3f, 0xa1, 0xb0, 0x80, 0x0a, 0x46, 0x99,
  0x29, 0x8d, 0x65, 0xc1, 0x4b, 0xb0, 0xef, 0xa6, 0xdd, 0x8f, 0x4c, 0x51, 0x61, 0x09, 0xf3, 0xc1,
  0xc3, 0xed, 0xcd, 0xc7, 0xe0, 0x56, 0xed, 0x21, 0x58, 0x58, 0xf0, 0xe9, 0xa5, 0x49, 0xaf, 0x49,
  0x1d, 0x36, 0xf4, 0xb7, 0x32, 0x79, 0x73, 0xac, 0xa4, 0xdd, 0x28, 0x7d, 0x35, 0x6e, 0xd3, 0xa4,
  0x97, 0xa6, 0x49, 0x5f, 0x9a, 0xd7, 0xce, 0xd3, 0x4c, 0xea, 0xbd, 0x74, 0xc1, 0x40, 0xe5, 0x82,
  0xf9, 0x33, 0xa1, 0x27, 0xbd, 0x8c, 0x50, 0x32, 0xab, 0xb6, 0x38, 0x1f, 0xec, 0xa5, 0x0d, 0x32,
  0x91, 0x9b, 0x6c, 0x57, 0x51, 0x22, 0xf1, 0x06, 0xf0, 0xa6, 0x04, 0x7f, 0xfc, 0xd0, 0x7c, 0xca,
  0xc3, 0xde, 0x8d, 0x47, 0x25, 0xe4, 0x4e, 0x30, 0x16, 0x61, 0x61, 0x0d, 0x52, 0x16, 0xb9, 0x38,
  0x9b, 0xcc, 0xd6, 0x3b, 0x9d, 0xa1, 0x32, 0x3a, 0xa0, 0x52, 0xaf, 0x3b, 0xd8, 0x90, 0x1f, 0xb3,
  0xb8, 0xef, 0x5b, 0xfc, 0xd3, 0xe5, 0x45, 0xad, 0x74, 0x6e, 0xea, 0x58, 0x69, 0x0d, 0xf6, 0xa1,
  0x6b, 0x60, 0x16, 0x17, 0xa0, 0x36, 0x05, 0x7e, 0xa3, 0xfe, 0xb5, 0x13, 0xb7, 0xaf, 0x90, 0x66,
  0x5d, 0x66, 0x78, 0x10, 0x99, 0x4f, 0xea, 0xda, 0x37, 0xea, 0x80, 0x21, 0x9b, 0xe6, 0x8c, 0xcf,
  0xd4, 0x3a, 0x24, 0x0d, 0x3f, 0x7a, 0x93, 0xda, 0xcd, 0xd0, 0x36, 0xc7, 0xda, 0x09, 0x34, 0xdb,
  0xf8, 0x84, 0x59, 0xbb, 0x36, 0x93, 0x98, 0x15, 0x21, 0xf2, 0x63, 0x4b, 0xd6, 0xb5, 0x3b, 0x3f,
  0xaf, 0x5d, 0x6c, 0xa9, 0x39, 0xcd, 0x1d, 0x4a, 0x04, 0x21, 0xc4, 0x03, 0xac, 0xee, 0x4c, 0xf6,
  0x15, 0x30, 0xfe, 0xbc, 0xb8, 0xf9, 0x9d, 0x93, 0xda, 0x81, 0xa6, 0x92, 0x8f, 0x6f, 0xca, 0xfd,
  0x9b, 0x2b, 0xb4, 0x3b, 0x68, 0x29, 0x14, 0x94, 0x0e, 0x8e, 0x25, 0x60, 0x80, 0xe2, 0x84, 0x5d,
  0x1a, 0x82, 0xa6, 0xb2, 0x23, 0x10, 0x18, 0x6f, 0x25, 0x16, 0x7e, 0xae, 0x91, 0x15, 0x10, 0xbb,
  0x92, 0xa8, 0x12, 0x4e, 0x22, 0x88, 0x09, 0xc8, 0x3d, 0x28, 0x2c, 0x42, 0x96, 0x30, 0xfe, 0xf3,
  0x68, 0x72, 0xb5, 0x37, 0x2a, 0x0f, 0xc6, 0x3c, 0x76, 0xdb, 0x52, 0x61, 0x27, 0x8d, 0x34, 0xb9,
  0x1b, 0xab, 0x68, 0x80, 0x94, 0xd7, 0xb6, 0x94, 0xe4, 0xca, 0x0a, 0xc4, 0x2d, 0x8b, 0x58, 0xed,
  0x28, 0xb2, 0x8d, 0x4b, 0xd0, 0x1b, 0x2c, 0xe6, 0x93, 0xf3, 0xf3, 0x50, 0x0f, 0x05, 0x39, 0x0d,
  0xed, 0xe3, 0x78, 0xc9, 0x23, 0x2a, 0x47, 0x68, 0xa8, 0x83, 0x97, 0x0a, 0x48, 0xcd, 0x12, 0xef,
  0xc4, 0x63, 0xa3, 0xcd, 0x16, 0xb4, 0x08, 0xb9, 0x98, 0x1f, 0xff, 0xbf, 0xa4, 0xb6, 0x25, 0xf9,
  0x4a, 0x69, 0x69, 0x9b, 0xfb, 0x66, 0x4b, 0x8c, 0x94, 0xd6, 0xca, 0x66, 0xb5, 0x5b, 0xaf, 0xc1,
  0xb2, 0x88, 0x74, 0x32, 0xcf, 0x6f, 0xf6, 0xc4, 0x80, 0x5b, 0xe5, 0x88, 0x9c, 0x60, 0x43, 0x56,
  0x81, 0x73, 0x72, 0x03, 0x34, 0x7f, 0x42, 0xf5, 0xdd, 0xa6, 0x96, 0xb2, 0x47, 0xb3, 0xfa, 0x0b,
  0x32, 0x0c, 0x7e, 0xf1, 0xee, 0x1f, 0x3a, 0xf7, 0x25, 0xa3, 0xbe, 0xa2, 0xb9, 0x43, 0xab, 0xf4,
  0x26, 0xa6, 0xa5, 0x28, 0x43, 0x8c, 0x73, 0x89, 0x92, 0xf3, 0x53, 0x0f, 0x7d, 0xda, 0x7f, 0x28,
  0x8d, 0x97, 0x9d, 0x57, 0x08, 0x3e, 0x4e, 0x6f, 0xe1, 0x87, 0xfa, 0xe3, 0x0f, 0x67, 0x02, 0xa9,
  0xc4, 0xa7, 0xa7, 0xa9, 0x3f, 0x4c, 0xe8, 0x70, 0xe6, 0x07, 0x6d, 0x01, 0x77, 0x56, 0xcf, 0x3c,
  0x84, 0x25, 0xf9, 0x74, 0xe9, 0x9b, 0xf7, 0xf8, 0x76, 0x19, 0x49, 0xf1, 0x1b, 0x0d, 0x20, 0xa6,
  0x3d, 0x0c, 0x4f, 0xc4, 0x4b, 0xec, 0x0b, 0xc9, 0x12, 0xcd, 0x23, 0xd5, 0x1b, 0xac, 0x4b, 0x63,
  0x6c, 0xf8, 0x6c, 0x33, 0x92, 0x17, 0x96, 0x27, 0xd3, 0x9e, 0x62, 0x20, 0xde, 0xcd, 0xd6, 0xa4,
  0x6c, 0x44, 0xfc, 0x7e, 0xd6, 0xa4, 0x7a, 0xd6, 0x0c, 0x87, 0xdc, 0x0b, 0x0e, 0x5e, 0x70, 0x48,
  0xed, 0xec, 0x40, 0x02, 0xca, 0x22, 0x5e, 0xab, 0xb2, 0xbc, 0xf3, 0x6b, 0x26, 0xbe, 0xd8, 0xcd,
  0x2a, 0xfc, 0xfe, 0x88, 0x8f, 0xb0, 0x6c, 0xa3, 0xee, 0x7f, 0x38, 0x79, 0x39, 0x4d, 0x97, 0x2d,
  0xff, 0x12, 0x79, 0x87, 0x15, 0xd0, 0x70, 0x17, 0x14, 0x3f, 0xe4, 0xdd, 0x5d, 0xda, 0x2c, 0x3c,
  0x5c, 0xc8, 0xa1, 0x8a, 0x9a, 0x0b, 0x19, 0xc5, 0xef, 0xe8, 0x33, 0x8e, 0xa6, 0x17, 0x5d, 0x86,
  0x8b, 0x4f, 0xbd, 0x8d, 0x0f, 0x42, 0xe6, 0x30, 0x14, 0x6f, 0xdb, 0x7f, 0x39, 0x4c, 0xef, 0x84,
  0x33, 0x25, 0xf1, 0xca, 0x5a, 0xca, 0x8c, 0x2d, 0x00, 0xbe, 0x06, 0x0f, 0x77, 0x41, 0x77, 0xbd,
  0xa2, 0xb1, 0xd0, 0x50, 0x79, 0x7b, 0xe2, 0xe7, 0xb7, 0xe3, 0xb3, 0xe0, 0xd4, 0xdf, 0xcf, 0xd3,
  0x7b, 0xde, 0xe0, 0xa7, 0xa7, 0xf0, 0xd5, 0xb6, 0xbd, 0xde, 0xec, 0x71, 0x44, 0x8a, 0x7b, 0x55,
  0x81, 0xd9, 0x61, 0xd8, 0x11, 0xe9, 0xf5, 0xda, 0xb7, 0xd1, 0xf4, 0xfd, 0x98, 0xf3, 0x96, 0x0f,
  0xe8, 0xd1, 0xe9, 0x1f, 0x91, 0x34, 0xe9, 0xdf, 0x9b, 0xa4, 0x7b, 0x5d, 0xff, 0x01, 0x47, 0xe8,
  0xd7, 0x03, 0x73, 0x05, 0x00, 0x00
};


// Autogenerated from wled00/data/404.htm, do not edit!!
const uint16_t PAGE_404_length = 870;
const uint8_t PAGE_404[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x13, 0x65, 0x54, 0x5b, 0x73, 0xaa, 0x3a,
  0x14, 0x7e, 0xef, 0xaf, 0xe0, 0xb8, 0x67, 0xcf, 0x7e, 0x68, 0x15, 0x54, 0xac, 0x8a, 0xe8, 0x19,
  0x40, 0x14, 0x7b, 0xf1, 0x4e, 0xad, 0x7d, 0x0b, 0x24, 0x42, 0x2a, 0x10, 0x9a, 0x04, 0xc5, 0x76,
  0xfa, 0xdf, 0x4f, 0x80, 0x76, 0x4e, 0x67, 0xf6, 0x9a, 0x81, 0x95, 0x7c, 0x2b, 0xeb, 0xbe, 0x12,
  0xfd, 0x9f, 0xf1, 0xc2, 0xda, 0xee, 0x97, 0xb6, 0x14, 0xf2, 0x38, 0x1a, 0xe9, 0x5f, 0x7f, 0x04,
  0xe0, 0x48, 0x8f, 0x11, 0x07, 0x92, 0x1f, 0x02, 0xca, 0x10, 0x1f, 0xd6, 0x32, 0x7e, 0xa8, 0xf7,
  0x6a, 0x5f, 0xe8, 0x95, 0x4f, 0x12, 0x8e, 0x12, 0x01, 0x9f, 0x31, 0xe4, 0xe1, 0x10, 0xa2, 0x13,
  0xf6, 0x51, 0xbd, 0xdc, 0xd4, 0xa4, 0x04, 0xc4, 0x68, 0x58, 0x3b, 0x61, 0x74, 0x4e, 0x09, 0xe5,
  0xdf, 0x3a, 0x15, 0xca, 0x43, 0x14, 0xa3, 0xba, 0x4f, 0x22, 0x42, 0x6b, 0x3f, 0xcc, 0xfc, 0x6a,
  0x95, 0x24, 0xce, 0x72, 0xcc, 0x23, 0x34, 0x9a, 0x13, 0x2e, 0x1d, 0x48, 0x96, 0x40, 0x5d, 0xae,
  0x00, 0x9d, 0xf1, 0x8b, 0x60, 0x57, 0x1e, 0x81, 0x97, 0x8f, 0x83, 0x50, 0xab, 0x1f, 0x40, 0x8c,
  0xa3, 0x8b, 0xf6, 0x84, 0x28, 0x04, 0x09, 0xb8, 0x71, 0x50, 0x74, 0x42, 0x1c, 0xfb, 0xe0, 0x86,
  0x81, 0x84, 0xd5, 0x19, 0xa2, 0xf8, 0x30, 0xe0, 0x28, 0xe7, 0x75, 0x10, 0xe1, 0x20, 0xd1, 0x7c,
  0xe1, 0x07, 0xd1, 0x81, 0x07, 0xfc, 0x63, 0x40, 0x0b, 0xcb, 0x55, 0x10, 0x5a, 0xe1, 0x79, 0x10,
  0x03, 0x1a, 0xe0, 0x44, 0x53, 0x06, 0x5f, 0xd8, 0xe1, 0x70, 0xf8, 0xc4, 0x71, 0xf0, 0x51, 0x26,
  0xa4, 0xa9, 0x8a, 0x92, 0xe6, 0xe2, 0x4c, 0x5e, 0x25, 0xa8, 0x75, 0x94, 0xdf, 0x03, 0x1c, 0x83,
  0x00, 0xd5, 0x29, 0x4a, 0xa0, 0x70, 0x94, 0x04, 0x5a, 0x8a, 0x73, 0x14, 0x01, 0x8e, 0xe0, 0x5f,
  0x12, 0x9f, 0x62, 0x96, 0xd6, 0x11, 0x0c, 0x10, 0xfb, 0xf6, 0xd3, 0xea, 0xa4, 0xb9, 0xa4, 0x48,
  0xf5, 0xa6, 0x52, 0xf0, 0x4f, 0x2f, 0xe3, 0x9c, 0x24, 0x1f, 0x24, 0xe3, 0x11, 0x4e, 0x50, 0x11,
  0x45, 0x46, 0x99, 0x08, 0x23, 0x25, 0xb8, 0x8c, 0x39, 0x05, 0x10, 0x16, 0x96, 0x7a, 0x65, 0x14,
  0xa5, 0x85, 0x42, 0x73, 0x50, 0x45, 0xd3, 0x6a, 0x17, 0xeb, 0x32, 0x53, 0x4e, 0x45, 0xea, 0x07,
  0x42, 0x63, 0x2d, 0x4b, 0x53, 0x44, 0x7d, 0xc0, 0xd0, 0xe0, 0x67, 0xad, 0xc2, 0xef, 0x1a, 0x55,
  0x28, 0xc3, 0xef, 0x48, 0x6b, 0xf6, 0x85, 0xf6, 0xdf, 0x55, 0x69, 0xb7, 0xdb, 0x3f, 0x8a, 0x31,
  0xf0, 0x08, 0x15, 0xe9, 0x68, 0x8a, 0xc4, 0x48, 0x84, 0xa1, 0xf4, 0x03, 0xab, 0x53, 0x00, 0x71,
  0xc6, 0xca, 0x9c, 0x3e, 0xaf, 0x74, 0xb9, 0xea, 0x93, 0x2e, 0x57, 0x33, 0x54, 0xb4, 0x6b, 0xa4,
  0x8b, 0x52, 0x4a, 0x20, 0x12, 0x6d, 0x16, 0x2d, 0x67, 0xd4, 0x1f, 0xd6, 0x20, 0xe0, 0x40, 0x2b,
  0x0b, 0x25, 0xa7, 0x49, 0x20, 0xdc, 0x33, 0x74, 0xab, 0xde, 0xe0, 0x27, 0x73, 0xb1, 0x3e, 0x2b,
  0xf7, 0xd3, 0x80, 0x18, 0x82, 0xe6, 0x1b, 0x37, 0xb4, 0xdd, 0x40, 0xac, 0xac, 0x62, 0x6b, 0x04,
  0x96, 0xf1, 0x28, 0x98, 0x69, 0xa7, 0x33, 0x3a, 0x2d, 0x91, 0xe7, 0xf9, 0x66, 0xad, 0xcc, 0x0c,
  0xca, 0x54, 0xff, 0x76, 0x55, 0x00, 0xeb, 0x64, 0xe5, 0x36, 0x4d, 0xa1, 0x90, 0xbf, 0x9e, 0x4f,
  0xbd, 0xfd, 0xca, 0x2d, 0x40, 0xcf, 0xb5, 0x73, 0x77, 0x5d, 0xca, 0xcd, 0x5e, 0x33, 0xb0, 0x5c,
  0xf9, 0xfd, 0xfe, 0x4d, 0x2e, 0xa8, 0xef, 0xed, 0x9a, 0xc4, 0x32, 0x82, 0x69, 0x48, 0x40, 0x21,
  0x9e, 0x2e, 0x1f, 0x9e, 0x7b, 0xa5, 0xe5, 0x3b, 0x38, 0xb9, 0x5b, 0xb8, 0xf2, 0xff, 0x64, 0x4c,
  0xe6, 0x4b, 0x64, 0xce, 0x4a, 0x99, 0x6f, 0x87, 0x2f, 0xfe, 0xd9, 0x30, 0xc6, 0xac, 0xd8, 0x76,
  0x0d, 0x63, 0x47, 0x77, 0x78, 0x75, 0x2c, 0x02, 0x85, 0x1b, 0x77, 0x6d, 0x3e, 0x8d, 0xc3, 0x65,
  0xee, 0xf7, 0xbd, 0x31, 0x71, 0x03, 0xdb, 0x98, 0xaf, 0x90, 0xb7, 0x94, 0x27, 0x6e, 0xe6, 0x3c,
  0xbe, 0x9a, 0xd3, 0xbd, 0x6c, 0x5e, 0xb7, 0xed, 0xfd, 0xba, 0xbb, 0x76, 0x94, 0x37, 0x4b, 0x7e,
  0x31, 0xfd, 0x5b, 0xe7, 0x6c, 0x45, 0xaf, 0x81, 0xb3, 0xb8, 0xce, 0x5f, 0x66, 0x4f, 0x9b, 0x59,
  0x8b, 0xed, 0x03, 0x07, 0x4c, 0xbb, 0xb6, 0xb9, 0x0b, 0x7b, 0xaf, 0x3b, 0x92, 0x6f, 0xa9, 0x65,
  0x4e, 0xe0, 0xf8, 0xee, 0xda, 0x1c, 0xab, 0x91, 0x37, 0x73, 0x72, 0xc3, 0x7f, 0xef, 0x19, 0x4b,
  0xe3, 0xe9, 0x61, 0xcb, 0xe8, 0x8b, 0xad, 0xa2, 0xd5, 0xb8, 0xf3, 0xf6, 0xce, 0xdb, 0xbe, 0x31,
  0xd9, 0xee, 0xc9, 0xd1, 0x52, 0xf7, 0xd6, 0xbc, 0x3f, 0xbd, 0x78, 0x41, 0xa6, 0x5e, 0x8c, 0x15,
  0x37, 0x27, 0x0f, 0xab, 0x67, 0x27, 0x73, 0x0c, 0xd3, 0xe8, 0xde, 0x3d, 0xa2, 0x85, 0x6d, 0xc9,
  0xb6, 0xb2, 0xeb, 0x64, 0x97, 0x7e, 0x70, 0x52, 0x4f, 0xa4, 0xb3, 0x72, 0xee, 0x5b, 0xb8, 0x7b,
  0x79, 0x6b, 0x59, 0x3d, 0xd7, 0x30, 0x1f, 0x55, 0x27, 0x7e, 0xb8, 0xb6, 0x36, 0xdb, 0x67, 0x6b,
  0x3b, 0x69, 0x8e, 0xa9, 0xf5, 0x7c, 0x7b, 0x3d, 0x4d, 0xfb, 0xef, 0x66, 0x07, 0x96, 0xd9, 0x1a,
  0x76, 0x34, 0xd9, 0x1e, 0x37, 0xd9, 0x2a, 0xb6, 0xac, 0xda, 0xe8, 0x4a, 0x0f, 0x9b, 0x23, 0x55,
  0x51, 0xa5, 0xe2, 0xbe, 0x4e, 0xaa, 0xfb, 0x2a, 0x10, 0xdd, 0x1b, 0x19, 0x47, 0x14, 0x63, 0x09,
  0x12, 0xc4, 0xa4, 0x44, 0xc8, 0x8e, 0x09, 0x39, 0x4b, 0xe7, 0x10, 0x51, 0x24, 0x5d, 0x48, 0x26,
  0x01, 0xc1, 0x8b, 0x01, 0x41, 0xb0, 0xd1, 0x68, 0xe8, 0xb2, 0x27, 0x34, 0x68, 0xf9, 0x5d, 0xe9,
  0xd5, 0x65, 0x90, 0x48, 0xe2, 0x47, 0xd8, 0x3f, 0x0e, 0xff, 0x9c, 0x71, 0x02, 0xc9, 0xb9, 0x11,
  0x11, 0x1f, 0x70, 0x4c, 0x92, 0x46, 0x48, 0xd1, 0x61, 0x58, 0x6b, 0x34, 0xe4, 0x7f, 0x99, 0x98,
  0x44, 0x44, 0x59, 0xed, 0xcf, 0xc8, 0x14, 0xe3, 0x2b, 0x71, 0x22, 0x15, 0xcf, 0x09, 0x25, 0x11,
  0x13, 0x16, 0x4b, 0x2b, 0xc2, 0x9c, 0x5c, 0x4d, 0xa0, 0x5c, 0x3e, 0x6c, 0xff, 0x01, 0xd9, 0xa5,
  0x2c, 0x90, 0xee, 0x04, 0x00, 0x00
};


// Autogenerated from wled00/data/favicon.ico, do not edit!!
const uint16_t favicon_length = 954;
const uint8_t favicon[] PROGMEM = {
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x86, 0x00,
  0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00,
  0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06,
  0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00, 0x4d, 0x49, 0x44, 0x41, 0x54, 0x38,
  0x8d, 0x63, 0xfc, 0xff, 0xff, 0x3f, 0x03, 0xb1, 0x80, 0xd1, 0x9e, 0x01, 0x43, 0x31, 0x13, 0xd1,
  0xba, 0x71, 0x00, 0x8a, 0x0d, 0x60, 0x21, 0xa4, 0x00, 0xd9, 0xd9, 0xff, 0x0f, 0x32, 0x30, 0x52,
  0xdd, 0x05, 0xb4, 0xf1, 0x02, 0xb6, 0xd0, 0xa6, 0x99, 0x0b, 0x68, 0x1f, 0x0b, 0xd8, 0x42, 0x9e,
  0xaa, 0x2e, 0xa0, 0xd8, 0x00, 0x46, 0x06, 0x3b, 0xcc, 0xcc, 0x40, 0xc8, 0xd9, 0x54, 0x75, 0x01,
  0xe5, 0x5e, 0x20, 0x25, 0x3b, 0x63, 0x03, 0x00, 0x3e, 0xb7, 0x11, 0x5a, 0x8d, 0x1c, 0x07, 0xb4,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

