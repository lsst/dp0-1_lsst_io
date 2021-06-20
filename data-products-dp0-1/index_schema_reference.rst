.. _Data-Products-DP0-1-schema_reference: 
  
###################################### 
Schema for dp01_dc2_catalogs.reference 
###################################### 
  
**base_Blendedness_abs** (type=double, min=-2.20E-02, max=6.48E-01): Measure of how much the flux is affected by neighbors: (1 - child_instFlux/parent_instFlux).  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_child_xx** (unit=pixel^2, type=double, min=6.08E-01, max=3.60E+02): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_child_xy** (unit=pixel^2, type=double, min=-2.54E+01, max=6.38E+01): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_child_yy** (unit=pixel^2, type=double, min=6.28E-01, max=1.21E+02): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_instFlux** (type=double, min=nan, max=nan): measure of how instFlux is affected by neighbors: (1 - instFlux.child/instFlux.parent) 
 
**base_Blendedness_abs_instFlux_child** (unit=count, type=double, min=7.39E-02, max=3.15E+02): instFlux of the child, measured with a Gaussian weight matched to the child 
 
**base_Blendedness_abs_instFlux_parent** (unit=count, type=double, min=7.39E-02, max=3.15E+02): instFlux of the parent, measured with a Gaussian weight matched to the child 
 
**base_Blendedness_abs_parent_xx** (unit=pixel^2, type=double, min=6.08E-01, max=3.60E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_parent_xy** (unit=pixel^2, type=double, min=-2.16E+01, max=1.23E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_abs_parent_yy** (unit=pixel^2, type=double, min=6.28E-01, max=1.38E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
 
**base_Blendedness_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_Blendedness_flag_noCentroid** (type=boolean, min=0, max=1): Object has no centroid 
 
**base_Blendedness_flag_noShape** (type=boolean, min=0, max=1): Object has no shape 
 
**base_Blendedness_old** (type=double, min=0.00E+00, max=1.79E+00): Blendedness from dot products: (child.dot(parent)/child.dot(child) - 1) 
 
**base_Blendedness_raw_child_xx** (unit=pixel^2, type=double, min=-7.48E-01, max=1.83E+02): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_Blendedness_raw_child_xy** (unit=pixel^2, type=double, min=-1.48E+01, max=5.14E+01): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_Blendedness_raw_child_yy** (unit=pixel^2, type=double, min=4.77E-01, max=7.59E+01): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_Blendedness_raw_instFlux** (type=double, min=nan, max=nan): measure of how instFlux is affected by neighbors: (1 - instFlux.child/instFlux.parent) 
 
**base_Blendedness_raw_instFlux_child** (unit=count, type=double, min=-4.48E-02, max=3.15E+02): instFlux of the child, measured with a Gaussian weight matched to the child 
 
**base_Blendedness_raw_instFlux_parent** (unit=count, type=double, min=-4.48E-02, max=3.15E+02): instFlux of the parent, measured with a Gaussian weight matched to the child 
 
**base_Blendedness_raw_parent_xx** (unit=pixel^2, type=double, min=-7.48E-01, max=3.55E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_Blendedness_raw_parent_xy** (unit=pixel^2, type=double, min=-1.87E+01, max=1.48E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_Blendedness_raw_parent_yy** (unit=pixel^2, type=double, min=4.77E-01, max=1.36E+02): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
 
**base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**base_PsfFlux_apCorr** (type=double, min=9.90E-01, max=9.96E-01): aperture correction applied to base_PsfFlux 
 
**base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**base_PsfFlux_area** (unit=pixel, type=double, min=4.54E+01, max=8.73E+01): effective area of PSF 
 
**base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**base_PsfFlux_instFlux** (unit=count, type=double, min=2.55E-01, max=1.87E+02): instFlux derived from linear least-squares fit of PSF model 
 
**base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.90E-01, max=2.58E+00): 1-sigma instFlux uncertainty 
 
**base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**base_SdssCentroid_flag_edge** (type=boolean, min=0, max=0): Object too close to edge 
 
**base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=0): Object is not at a maximum 
 
**base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**base_SdssCentroid_x** (unit=pixel, type=double, min=1.60E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.23E-02, max=3.20E+03): 1-sigma uncertainty on x position 
 
**base_SdssCentroid_y** (unit=pixel, type=double, min=2.96E+03, max=4.00E+03): centroid from Sdss Centroid algorithm 
 
**base_SdssCentroid_yErr** (unit=pixel, type=double, min=1.12E-02, max=9.93E+02): 1-sigma uncertainty on y position 
 
**base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**base_SdssShape_instFlux** (unit=count, type=double, min=5.46E-01, max=3.19E+02): elliptical Gaussian adaptive moments 
 
**base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-4.49E+02, max=-4.07E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-4.50E+02, max=-1.15E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-4.70E+01, max=2.96E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**base_SdssShape_instFluxErr** (unit=count, type=double, min=1.17E-01, max=7.77E+00): 1-sigma instFlux uncertainty 
 
**base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=2.99E+00, max=6.19E+00): adaptive moments of the PSF model at the object position 
 
**base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-2.65E-02, max=1.54E-02): adaptive moments of the PSF model at the object position 
 
**base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=2.95E+00, max=6.18E+00): adaptive moments of the PSF model at the object position 
 
**base_SdssShape_x** (unit=pixel, type=double, min=1.60E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=4.74E+04): elliptical Gaussian adaptive moments 
 
**base_SdssShape_xxErr** (unit=pixel^2, type=double, min=6.93E-03, max=6.40E+02): Standard deviation of xx moment 
 
**base_SdssShape_xy** (unit=pixel^2, type=double, min=-3.01E+03, max=3.14E+03): elliptical Gaussian adaptive moments 
 
**base_SdssShape_xyErr** (unit=pixel^2, type=double, min=1.41E-02, max=2.02E+02): Standard deviation of xy moment 
 
**base_SdssShape_y** (unit=pixel, type=double, min=2.96E+03, max=4.00E+03): elliptical Gaussian adaptive moments 
 
**base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=4.92E+04): elliptical Gaussian adaptive moments 
 
**base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.50E-02, max=8.67E+01): Standard deviation of yy moment 
 
**coord_dec** (unit=rad, type=double, min=-3.71E+01, max=-3.70E+01): position in ra/dec 
 
**coord_ra** (unit=rad, type=double, min=6.18E+01, max=6.20E+01): position in ra/dec 
 
**deblend_deblendedAsPsf** (type=boolean, min=0, max=1): Deblender thought this source looked like a PSF 
 
**deblend_hasStrayFlux** (type=boolean, min=0, max=0): This source was assigned some stray flux 
 
**deblend_masked** (type=boolean, min=0, max=0): Parent footprint was predominantly masked 
 
**deblend_parentTooBig** (type=boolean, min=0, max=0): Parent footprint covered too many pixels 
 
**deblend_patchedTemplate** (type=boolean, min=0, max=0): This source was near an image edge and the deblender used "patched" edge-handling. 
 
**deblend_psf_instFlux** (unit=count, type=double, min=5.93E-01, max=1.49E+01): If deblended-as-psf, the instrumental PSF flux 
 
**deblend_psfCenter_x** (unit=pixel, type=double, min=1.61E+04, max=1.91E+04): If deblended-as-psf, the PSF centroid 
 
**deblend_psfCenter_y** (unit=pixel, type=double, min=2.97E+03, max=3.02E+03): If deblended-as-psf, the PSF centroid 
 
**deblend_psfflux** (unit=count, type=double, min=5.93E-01, max=1.49E+01): If deblended-as-psf, the instrumental PSF flux 
 
**deblend_rampedTemplate** (type=boolean, min=0, max=1): This source was near an image edge and the deblender used "ramp" edge-handling. 
 
**deblend_skipped** (type=boolean, min=0, max=0): Deblender skipped this source 
 
**deblend_tooManyPeaks** (type=boolean, min=0, max=0): Source had too many peaks; only the brightest were included 
 
**ext_shapeHSM_HsmPsfMoments_flag** (type=boolean, min=0, max=1): general failure flag, set if anything went wrong 
 
**ext_shapeHSM_HsmPsfMoments_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**ext_shapeHSM_HsmPsfMoments_flag_no_pixels** (type=boolean, min=0, max=0): no pixels to measure 
 
**ext_shapeHSM_HsmPsfMoments_flag_not_contained** (type=boolean, min=0, max=0): center not contained in footprint bounding box 
 
**ext_shapeHSM_HsmPsfMoments_flag_parent_source** (type=boolean, min=0, max=0): parent source, ignored 
 
**ext_shapeHSM_HsmPsfMoments_x** (unit=pixel, type=double, min=-2.24E-03, max=1.35E-03): HSM Centroid 
 
**ext_shapeHSM_HsmPsfMoments_xx** (unit=pixel^2, type=double, min=2.99E+00, max=6.19E+00): HSM moments 
 
**ext_shapeHSM_HsmPsfMoments_xy** (unit=pixel^2, type=double, min=-2.65E-02, max=1.55E-02): HSM moments 
 
**ext_shapeHSM_HsmPsfMoments_y** (unit=pixel, type=double, min=-8.17E-04, max=5.17E-04): HSM Centroid 
 
**ext_shapeHSM_HsmPsfMoments_yy** (unit=pixel^2, type=double, min=2.95E+00, max=6.18E+00): HSM moments 
 
**ext_shapeHSM_HsmShapeRegauss_e1** (type=double, min=-9.88E+01, max=1.36E+03): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
 
**ext_shapeHSM_HsmShapeRegauss_e2** (type=double, min=-2.07E+02, max=3.57E+03): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
 
**ext_shapeHSM_HsmShapeRegauss_flag** (type=boolean, min=0, max=1): general failure flag, set if anything went wrong 
 
**ext_shapeHSM_HsmShapeRegauss_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**ext_shapeHSM_HsmShapeRegauss_flag_galsim** (type=boolean, min=0, max=1): GalSim failure 
 
**ext_shapeHSM_HsmShapeRegauss_flag_no_pixels** (type=boolean, min=0, max=1): no pixels to measure 
 
**ext_shapeHSM_HsmShapeRegauss_flag_not_contained** (type=boolean, min=0, max=0): center not contained in footprint bounding box 
 
**ext_shapeHSM_HsmShapeRegauss_flag_parent_source** (type=boolean, min=0, max=0): parent source, ignored 
 
**ext_shapeHSM_HsmShapeRegauss_resolution** (type=double, min=2.64E-03, max=9.70E-01): resolution factor (0=unresolved, 1=resolved) 
 
**ext_shapeHSM_HsmShapeRegauss_sigma** (type=double, min=4.89E-03, max=5.69E+01): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
 
**ext_shapeHSM_HsmSourceMoments_flag** (type=boolean, min=0, max=1): general failure flag, set if anything went wrong 
 
**ext_shapeHSM_HsmSourceMoments_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**ext_shapeHSM_HsmSourceMoments_flag_no_pixels** (type=boolean, min=0, max=1): no pixels to measure 
 
**ext_shapeHSM_HsmSourceMoments_flag_not_contained** (type=boolean, min=0, max=0): center not contained in footprint bounding box 
 
**ext_shapeHSM_HsmSourceMoments_flag_parent_source** (type=boolean, min=0, max=0): parent source, ignored 
 
**ext_shapeHSM_HsmSourceMoments_x** (unit=pixel, type=double, min=1.60E+04, max=1.92E+04): HSM Centroid 
 
**ext_shapeHSM_HsmSourceMoments_xx** (unit=pixel^2, type=double, min=5.26E-01, max=1.44E+02): HSM moments 
 
**ext_shapeHSM_HsmSourceMoments_xy** (unit=pixel^2, type=double, min=-1.54E+01, max=3.99E+01): HSM moments 
 
**ext_shapeHSM_HsmSourceMoments_y** (unit=pixel, type=double, min=2.96E+03, max=3.99E+03): HSM Centroid 
 
**ext_shapeHSM_HsmSourceMoments_yy** (unit=pixel^2, type=double, min=5.06E-01, max=5.94E+01): HSM moments 
 
**ext_shapeHSM_HsmSourceMomentsRound_flag** (type=boolean, min=0, max=1): general failure flag, set if anything went wrong 
 
**ext_shapeHSM_HsmSourceMomentsRound_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**ext_shapeHSM_HsmSourceMomentsRound_flag_no_pixels** (type=boolean, min=0, max=1): no pixels to measure 
 
**ext_shapeHSM_HsmSourceMomentsRound_flag_not_contained** (type=boolean, min=0, max=0): center not contained in footprint bounding box 
 
**ext_shapeHSM_HsmSourceMomentsRound_flag_parent_source** (type=boolean, min=0, max=0): parent source, ignored 
 
**ext_shapeHSM_HsmSourceMomentsRound_Flux** (type=double, min=3.06E-01, max=2.96E+02): HSM flux 
 
**ext_shapeHSM_HsmSourceMomentsRound_x** (unit=pixel, type=double, min=1.60E+04, max=1.92E+04): HSM Centroid 
 
**ext_shapeHSM_HsmSourceMomentsRound_xx** (unit=pixel^2, type=double, min=4.27E-01, max=1.32E+02): HSM moments 
 
**ext_shapeHSM_HsmSourceMomentsRound_xy** (unit=pixel^2, type=double, min=-4.31E+00, max=1.45E+01): HSM moments 
 
**ext_shapeHSM_HsmSourceMomentsRound_y** (unit=pixel, type=double, min=2.96E+03, max=4.00E+03): HSM Centroid 
 
**ext_shapeHSM_HsmSourceMomentsRound_yy** (unit=pixel^2, type=double, min=3.84E-01, max=9.87E+01): HSM moments 
 
**good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**modelfit_CModel_apCorr** (type=double, min=9.87E-01, max=9.94E-01): aperture correction applied to modelfit_CModel 
 
**modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**modelfit_CModel_dev_apCorr** (type=double, min=9.87E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_dev 
 
**modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**modelfit_CModel_dev_ellipse_xx** (unit=pixel^2, type=double, min=1.55E-04, max=5.74E+01): half-light ellipse of the de Vaucouleur fit 
 
**modelfit_CModel_dev_ellipse_xy** (unit=pixel^2, type=double, min=-3.19E+01, max=3.06E+01): half-light ellipse of the de Vaucouleur fit 
 
**modelfit_CModel_dev_ellipse_yy** (unit=pixel^2, type=double, min=1.55E-04, max=6.83E+01): half-light ellipse of the de Vaucouleur fit 
 
**modelfit_CModel_dev_fixed_0** (type=double, min=-4.84E-03, max=2.47E-03): fixed parameters for the de Vaucouleur fit 
 
**modelfit_CModel_dev_fixed_1** (type=double, min=-4.38E-04, max=8.37E-04): fixed parameters for the de Vaucouleur fit 
 
**modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**modelfit_CModel_dev_flag_maxIter** (type=boolean, min=0, max=0): the optimizer hit the maximum number of iterations and did not converge 
 
**modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**modelfit_CModel_dev_flag_trSmall** (type=boolean, min=0, max=1): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
 
**modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=1.97E-01, max=3.42E+02): flux from the de Vaucouleur fit region, with no extrapolation 
 
**modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-8.73E-03, max=4.64E+02): flux from the de Vaucouleur fit 
 
**modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=-7.99E-02, max=3.45E+00): flux uncertainty from the de Vaucouleur fit 
 
**modelfit_CModel_dev_nIter** (type=int, min=1.00E+00, max=5.40E+01): Number of total iterations in stage 
 
**modelfit_CModel_dev_nonlinear_0** (type=double, min=-1.20E+00, max=1.20E+00): nonlinear parameters for the de Vaucouleur fit 
 
**modelfit_CModel_dev_nonlinear_1** (type=double, min=-1.54E+00, max=1.57E+00): nonlinear parameters for the de Vaucouleur fit 
 
**modelfit_CModel_dev_nonlinear_2** (type=double, min=-6.00E+00, max=3.99E-01): nonlinear parameters for the de Vaucouleur fit 
 
**modelfit_CModel_dev_objective** (type=double, min=9.70E+00, max=6.44E+02): -ln(likelihood*prior) at best-fit point for the de Vaucouleur fit 
 
**modelfit_CModel_dev_time** (unit=second, type=double, min=1.71E-03, max=4.84E-02): Time spent in stage 
 
**modelfit_CModel_ellipse_xx** (unit=pixel^2, type=double, min=1.54E-04, max=9.41E+01): fracDev-weighted average of exp.ellipse and dev.ellipse 
 
**modelfit_CModel_ellipse_xy** (unit=pixel^2, type=double, min=-2.09E+01, max=2.48E+01): fracDev-weighted average of exp.ellipse and dev.ellipse 
 
**modelfit_CModel_ellipse_yy** (unit=pixel^2, type=double, min=1.54E-04, max=7.73E+01): fracDev-weighted average of exp.ellipse and dev.ellipse 
 
**modelfit_CModel_exp_apCorr** (type=double, min=9.88E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_exp 
 
**modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**modelfit_CModel_exp_ellipse_xx** (unit=pixel^2, type=double, min=1.54E-04, max=9.83E+01): half-light ellipse of the exponential fit 
 
**modelfit_CModel_exp_ellipse_xy** (unit=pixel^2, type=double, min=-2.29E+01, max=2.48E+01): half-light ellipse of the exponential fit 
 
**modelfit_CModel_exp_ellipse_yy** (unit=pixel^2, type=double, min=1.54E-04, max=7.73E+01): half-light ellipse of the exponential fit 
 
**modelfit_CModel_exp_fixed_0** (type=double, min=-4.84E-03, max=2.47E-03): fixed parameters for the exponential fit 
 
**modelfit_CModel_exp_fixed_1** (type=double, min=-4.38E-04, max=8.37E-04): fixed parameters for the exponential fit 
 
**modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**modelfit_CModel_exp_flag_maxIter** (type=boolean, min=0, max=0): the optimizer hit the maximum number of iterations and did not converge 
 
**modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**modelfit_CModel_exp_flag_trSmall** (type=boolean, min=0, max=1): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
 
**modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-1.58E-03, max=3.29E+02): flux from the exponential fit region, with no extrapolation 
 
**modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-8.73E-03, max=3.50E+02): flux from the exponential fit 
 
**modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.89E-01, max=1.03E+01): flux uncertainty from the exponential fit 
 
**modelfit_CModel_exp_nIter** (type=int, min=1.00E+00, max=4.70E+01): Number of total iterations in stage 
 
**modelfit_CModel_exp_nonlinear_0** (type=double, min=-9.93E-01, max=1.32E+00): nonlinear parameters for the exponential fit 
 
**modelfit_CModel_exp_nonlinear_1** (type=double, min=-1.33E+00, max=1.30E+00): nonlinear parameters for the exponential fit 
 
**modelfit_CModel_exp_nonlinear_2** (type=double, min=-6.00E+00, max=5.73E-01): nonlinear parameters for the exponential fit 
 
**modelfit_CModel_exp_objective** (type=double, min=9.61E+00, max=7.02E+02): -ln(likelihood*prior) at best-fit point for the exponential fit 
 
**modelfit_CModel_exp_time** (unit=second, type=double, min=1.77E-03, max=3.31E-02): Time spent in stage 
 
**modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**modelfit_CModel_flag_noShape** (type=boolean, min=0, max=1): the shape slot needed to initialize the parameters failed or was not defined 
 
**modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**modelfit_CModel_flags_region_usedFootprintArea** (type=boolean, min=0, max=1): the pixel region for the initial fit was defined by the area of the Footprint 
 
**modelfit_CModel_flags_region_usedInitialEllipseMax** (type=boolean, min=1, max=1): the pixel region for the final fit was set to the upper bound defined by the initial fit 
 
**modelfit_CModel_flags_region_usedInitialEllipseMin** (type=boolean, min=0, max=0): the pixel region for the final fit was set to the lower bound defined by the initial fit 
 
**modelfit_CModel_flags_region_usedPsfArea** (type=boolean, min=0, max=1): the pixel region for the initial fit was set to a fixed factor of the PSF area 
 
**modelfit_CModel_flags_smallShape** (type=boolean, min=0, max=1): initial parameter guess resulted in negative radius; used minimum of 0.100000 pixels instead. 
 
**modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**modelfit_CModel_initial_apCorr** (type=double, min=9.88E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_initial 
 
**modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**modelfit_CModel_initial_ellipse_xx** (unit=pixel^2, type=double, min=1.58E-04, max=8.75E+01): half-light ellipse of the initial fit 
 
**modelfit_CModel_initial_ellipse_xy** (unit=pixel^2, type=double, min=-1.02E+01, max=3.79E+01): half-light ellipse of the initial fit 
 
**modelfit_CModel_initial_ellipse_yy** (unit=pixel^2, type=double, min=1.58E-04, max=4.60E+01): half-light ellipse of the initial fit 
 
**modelfit_CModel_initial_fixed_0** (type=double, min=-4.84E-03, max=2.47E-03): fixed parameters for the initial fit 
 
**modelfit_CModel_initial_fixed_1** (type=double, min=-4.38E-04, max=8.37E-04): fixed parameters for the initial fit 
 
**modelfit_CModel_initial_flag** (type=boolean, min=0, max=0): flag set when the flux for the initial flux failed 
 
**modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**modelfit_CModel_initial_flag_maxIter** (type=boolean, min=0, max=0): the optimizer hit the maximum number of iterations and did not converge 
 
**modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**modelfit_CModel_initial_flag_trSmall** (type=boolean, min=1, max=1): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
 
**modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-8.64E-03, max=3.47E+02): flux from the initial fit region, with no extrapolation 
 
**modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-8.74E-03, max=3.52E+02): flux from the initial fit 
 
**modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.91E-01, max=3.33E+00): flux uncertainty from the initial fit 
 
**modelfit_CModel_initial_nIter** (type=int, min=1.00E+00, max=5.70E+01): Number of total iterations in stage 
 
**modelfit_CModel_initial_nonlinear_0** (type=double, min=-9.76E-01, max=1.29E+00): nonlinear parameters for the initial fit 
 
**modelfit_CModel_initial_nonlinear_1** (type=double, min=-1.37E+00, max=1.29E+00): nonlinear parameters for the initial fit 
 
**modelfit_CModel_initial_nonlinear_2** (type=double, min=-5.99E+00, max=4.91E-01): nonlinear parameters for the initial fit 
 
**modelfit_CModel_initial_objective** (type=double, min=5.89E+01, max=1.41E+03): -ln(likelihood*prior) at best-fit point for the initial fit 
 
**modelfit_CModel_initial_time** (unit=second, type=double, min=1.55E-03, max=1.68E-01): Time spent in stage 
 
**modelfit_CModel_instFlux** (unit=count, type=double, min=7.15E-01, max=4.25E+02): flux from the final cmodel fit 
 
**modelfit_CModel_instFlux_inner** (unit=count, type=double, min=6.41E-01, max=3.38E+02): flux within the fit region, with no extrapolation 
 
**modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.92E-01, max=3.38E+00): flux uncertainty from the final cmodel fit 
 
**modelfit_CModel_objective** (type=double, min=6.80E-03, max=8.75E+00): -ln(likelihood) (chi^2) in cmodel fit 
 
**modelfit_CModel_region_final_ellipse_xx** (unit=pixel^2, type=double, min=1.74E+01, max=8.08E+02): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
 
**modelfit_CModel_region_final_ellipse_xy** (unit=pixel^2, type=double, min=-9.17E+01, max=3.41E+02): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
 
**modelfit_CModel_region_final_ellipse_yy** (unit=pixel^2, type=double, min=1.74E+01, max=4.33E+02): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
 
**modelfit_CModel_region_initial_ellipse_xx** (unit=pixel^2, type=double, min=4.11E+01, max=2.62E+03): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
 
**modelfit_CModel_region_initial_ellipse_xy** (unit=pixel^2, type=double, min=-4.42E+02, max=1.02E+03): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
 
**modelfit_CModel_region_initial_ellipse_yy** (unit=pixel^2, type=double, min=4.10E+01, max=1.20E+03): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
 
**objectId** (type=long): Unique id. 
 
