
add_executable(text_to_speech main.c)
target_link_libraries(text_to_speech
    PRIVATE flite_cmu_us_kal flite_cmu_us_awb flite_usenglish flite_cmulex flite m)
