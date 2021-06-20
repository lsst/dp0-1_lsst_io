.. _Data-Products-DP0-1-schema_forced_photometry: 
  
############################################## 
Schema for dp01_dc2_catalogs.forced_photometry 
############################################## 
  
**coord_dec** (unit=rad, type=double): position in ra/dec 
 
**coord_ra** (unit=rad, type=double): position in ra/dec 
 
**g_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**g_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**g_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**g_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**g_base_InputCount_value** (type=int, min=4.00E+01, max=5.20E+01): Number of images contributing at center, not including anyclipping 
 
**g_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**g_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**g_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.90E-03, max=1.56E-01): background in annulus around source 
 
**g_base_LocalBackground_instFluxErr** (unit=count, type=double, min=4.59E-18, max=8.22E-02): 1-sigma instFlux uncertainty 
 
**g_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**g_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**g_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**g_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**g_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**g_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**g_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**g_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=0): Cosmic ray in the Source center 
 
**g_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**g_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**g_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**g_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**g_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**g_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**g_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**g_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**g_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**g_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**g_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**g_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**g_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**g_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**g_base_PsfFlux_apCorr** (type=double, min=9.93E-01, max=9.95E-01): aperture correction applied to base_PsfFlux 
 
**g_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**g_base_PsfFlux_area** (unit=pixel, type=double, min=4.97E+01, max=5.43E+01): effective area of PSF 
 
**g_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**g_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**g_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**g_base_PsfFlux_instFlux** (unit=count, type=double, min=-1.97E-01, max=2.25E+04): instFlux derived from linear least-squares fit of PSF model 
 
**g_base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.80E-01, max=4.42E+00): 1-sigma instFlux uncertainty 
 
**g_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**g_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**g_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**g_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**g_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**g_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**g_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**g_base_SdssCentroid_xErr** (unit=pixel, type=double, min=6.13E-04, max=2.74E+04): 1-sigma uncertainty on x position 
 
**g_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**g_base_SdssCentroid_yErr** (unit=pixel, type=double, min=5.79E-04, max=3.47E+03): 1-sigma uncertainty on y position 
 
**g_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**g_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**g_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**g_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**g_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**g_base_SdssShape_instFlux** (unit=count, type=double, min=3.70E-01, max=2.43E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-1.85E+02, max=-4.35E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**g_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-3.39E+01, max=-9.21E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**g_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-2.73E+01, max=6.56E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**g_base_SdssShape_instFluxErr** (unit=count, type=double, min=7.46E-02, max=1.87E+01): 1-sigma instFlux uncertainty 
 
**g_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.36E+00, max=3.64E+00): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-1.40E-03, max=1.63E-02): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.08E+00, max=3.33E+00): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xx** (unit=pixel^2, type=double, min=5.14E-02, max=3.39E+05): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=2.66E-03, max=5.18E+02): Standard deviation of xx moment 
 
**g_base_SdssShape_xy** (unit=pixel^2, type=double, min=-5.49E+04, max=2.40E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=2.45E-03, max=8.10E+01): Standard deviation of xy moment 
 
**g_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=2.78E+05): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.81E-03, max=1.84E+02): Standard deviation of yy moment 
 
**g_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**g_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**g_base_Variance_value** (type=double, min=6.33E-04, max=8.31E-04): Variance at object position 
 
**g_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**g_modelfit_CModel_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel 
 
**g_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**g_modelfit_CModel_dev_apCorr** (type=double, min=9.90E-01, max=9.92E-01): aperture correction applied to modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**g_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-2.11E-01, max=3.15E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**g_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-2.62E-01, max=3.75E+03): flux from the de Vaucouleur fit 
 
**g_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=1.81E-01, max=6.61E+00): flux uncertainty from the de Vaucouleur fit 
 
**g_modelfit_CModel_exp_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**g_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-2.08E-01, max=3.15E+03): flux from the exponential fit region, with no extrapolation 
 
**g_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-2.28E-01, max=3.75E+03): flux from the exponential fit 
 
**g_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.82E-01, max=4.15E+00): flux uncertainty from the exponential fit 
 
**g_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**g_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**g_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**g_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**g_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**g_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**g_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**g_modelfit_CModel_initial_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**g_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-2.03E-01, max=3.15E+03): flux from the initial fit region, with no extrapolation 
 
**g_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-2.15E-01, max=3.76E+03): flux from the initial fit 
 
**g_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.84E-01, max=2.83E+00): flux uncertainty from the initial fit 
 
**g_modelfit_CModel_instFlux** (unit=count, type=double, min=-2.28E-01, max=3.75E+03): flux from the final cmodel fit 
 
**g_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-2.08E-01, max=3.15E+03): flux within the fit region, with no extrapolation 
 
**g_modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.81E-01, max=4.94E+00): flux uncertainty from the final cmodel fit 
 
**g_modelfit_CModel_objective** (type=double, min=0.00E+00, max=1.07E+01): -ln(likelihood) (chi^2) in cmodel fit 
 
**i_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**i_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**i_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**i_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**i_base_InputCount_value** (type=int, min=9.40E+01, max=1.08E+02): Number of images contributing at center, not including anyclipping 
 
**i_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**i_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**i_base_LocalBackground_instFlux** (unit=count, type=double, min=-3.61E-03, max=2.13E-01): background in annulus around source 
 
**i_base_LocalBackground_instFluxErr** (unit=count, type=double, min=8.01E-10, max=1.15E-01): 1-sigma instFlux uncertainty 
 
**i_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**i_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**i_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**i_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**i_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**i_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**i_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**i_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**i_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**i_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**i_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**i_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**i_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**i_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**i_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**i_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**i_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**i_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**i_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**i_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**i_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**i_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**i_base_PsfFlux_apCorr** (type=double, min=9.95E-01, max=9.97E-01): aperture correction applied to base_PsfFlux 
 
**i_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**i_base_PsfFlux_area** (unit=pixel, type=double, min=4.57E+01, max=4.88E+01): effective area of PSF 
 
**i_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**i_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**i_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**i_base_PsfFlux_instFlux** (unit=count, type=double, min=-4.02E-01, max=3.32E+04): instFlux derived from linear least-squares fit of PSF model 
 
**i_base_PsfFlux_instFluxErr** (unit=count, type=double, min=4.04E-01, max=4.42E+00): 1-sigma instFlux uncertainty 
 
**i_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**i_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**i_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**i_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**i_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**i_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**i_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**i_base_SdssCentroid_xErr** (unit=pixel, type=double, min=4.33E-04, max=9.43E+03): 1-sigma uncertainty on x position 
 
**i_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**i_base_SdssCentroid_yErr** (unit=pixel, type=double, min=4.34E-04, max=7.98E+03): 1-sigma uncertainty on y position 
 
**i_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**i_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**i_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**i_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**i_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**i_base_SdssShape_instFlux** (unit=count, type=double, min=7.87E-01, max=3.46E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-1.06E+02, max=-1.84E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**i_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-1.04E+02, max=-1.22E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**i_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-7.19E+01, max=4.54E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**i_base_SdssShape_instFluxErr** (unit=count, type=double, min=1.72E-01, max=1.01E+01): 1-sigma instFlux uncertainty 
 
**i_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=2.99E+00, max=3.16E+00): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-9.49E-03, max=5.02E-03): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=2.97E+00, max=3.14E+00): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=3.61E+05): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=1.72E-03, max=1.42E+02): Standard deviation of xx moment 
 
**i_base_SdssShape_xy** (unit=pixel^2, type=double, min=-1.01E+04, max=5.69E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=1.70E-03, max=1.11E+02): Standard deviation of xy moment 
 
**i_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=2.91E+05): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.21E-03, max=6.78E+01): Standard deviation of yy moment 
 
**i_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**i_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**i_base_Variance_value** (type=double, min=3.48E-03, max=4.04E-03): Variance at object position 
 
**i_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**i_modelfit_CModel_apCorr** (type=double, min=9.92E-01, max=9.94E-01): aperture correction applied to modelfit_CModel 
 
**i_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**i_modelfit_CModel_dev_apCorr** (type=double, min=9.92E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**i_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-3.40E-01, max=5.77E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**i_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-3.74E-01, max=6.72E+03): flux from the de Vaucouleur fit 
 
**i_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=4.07E-01, max=1.43E+01): flux uncertainty from the de Vaucouleur fit 
 
**i_modelfit_CModel_exp_apCorr** (type=double, min=9.92E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**i_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-3.40E-01, max=5.77E+03): flux from the exponential fit region, with no extrapolation 
 
**i_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-3.74E-01, max=6.72E+03): flux from the exponential fit 
 
**i_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=4.07E-01, max=9.12E+00): flux uncertainty from the exponential fit 
 
**i_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**i_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**i_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**i_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**i_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**i_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**i_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**i_modelfit_CModel_initial_apCorr** (type=double, min=9.92E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**i_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-3.40E-01, max=5.77E+03): flux from the initial fit region, with no extrapolation 
 
**i_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-3.74E-01, max=6.72E+03): flux from the initial fit 
 
**i_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=4.07E-01, max=6.12E+00): flux uncertainty from the initial fit 
 
**i_modelfit_CModel_instFlux** (unit=count, type=double, min=-3.74E-01, max=6.72E+03): flux from the final cmodel fit 
 
**i_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-3.40E-01, max=5.77E+03): flux within the fit region, with no extrapolation 
 
**i_modelfit_CModel_instFluxErr** (unit=count, type=double, min=4.07E-01, max=1.01E+01): flux uncertainty from the final cmodel fit 
 
**i_modelfit_CModel_objective** (type=double, min=0.00E+00, max=5.54E+01): -ln(likelihood) (chi^2) in cmodel fit 
 
**objectId** (type=long): Unique id. 
 
**r_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**r_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**r_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**r_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**r_base_InputCount_value** (type=int, min=9.60E+01, max=1.12E+02): Number of images contributing at center, not including anyclipping 
 
**r_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**r_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**r_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.27E-03, max=1.75E-01): background in annulus around source 
 
**r_base_LocalBackground_instFluxErr** (unit=count, type=double, min=3.67E-28, max=9.26E-02): 1-sigma instFlux uncertainty 
 
**r_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**r_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**r_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**r_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**r_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**r_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**r_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**r_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**r_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**r_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**r_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**r_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**r_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**r_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**r_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**r_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**r_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**r_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**r_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**r_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**r_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**r_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**r_base_PsfFlux_apCorr** (type=double, min=9.93E-01, max=9.96E-01): aperture correction applied to base_PsfFlux 
 
**r_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**r_base_PsfFlux_area** (unit=pixel, type=double, min=4.89E+01, max=5.28E+01): effective area of PSF 
 
**r_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**r_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**r_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**r_base_PsfFlux_instFlux** (unit=count, type=double, min=-1.76E-01, max=2.67E+04): instFlux derived from linear least-squares fit of PSF model 
 
**r_base_PsfFlux_instFluxErr** (unit=count, type=double, min=2.26E-01, max=4.55E+00): 1-sigma instFlux uncertainty 
 
**r_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**r_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**r_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**r_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**r_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**r_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**r_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**r_base_SdssCentroid_xErr** (unit=pixel, type=double, min=4.99E-04, max=8.25E+03): 1-sigma uncertainty on x position 
 
**r_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**r_base_SdssCentroid_yErr** (unit=pixel, type=double, min=4.98E-04, max=4.97E+03): 1-sigma uncertainty on y position 
 
**r_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**r_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**r_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**r_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**r_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**r_base_SdssShape_instFlux** (unit=count, type=double, min=2.45E-01, max=3.05E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-5.84E+01, max=-2.58E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**r_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-6.71E+02, max=-3.26E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**r_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-5.06E+01, max=1.64E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**r_base_SdssShape_instFluxErr** (unit=count, type=double, min=6.40E-02, max=8.30E+00): 1-sigma instFlux uncertainty 
 
**r_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.16E+00, max=3.39E+00): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-2.93E-03, max=6.05E-03): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.11E+00, max=3.34E+00): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=3.53E+05): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=2.00E-03, max=1.04E+02): Standard deviation of xx moment 
 
**r_base_SdssShape_xy** (unit=pixel^2, type=double, min=-8.17E+03, max=1.21E+05): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=1.96E-03, max=1.10E+03): Standard deviation of xy moment 
 
**r_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=3.69E+05): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.40E-03, max=9.07E+01): Standard deviation of yy moment 
 
**r_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**r_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**r_base_Variance_value** (type=double, min=1.01E-03, max=1.22E-03): Variance at object position 
 
**r_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**r_modelfit_CModel_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel 
 
**r_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**r_modelfit_CModel_dev_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**r_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-1.55E-01, max=4.78E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**r_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-1.83E-01, max=5.66E+03): flux from the de Vaucouleur fit 
 
**r_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=2.26E-01, max=8.16E+00): flux uncertainty from the de Vaucouleur fit 
 
**r_modelfit_CModel_exp_apCorr** (type=double, min=9.91E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**r_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-1.44E-01, max=4.77E+03): flux from the exponential fit region, with no extrapolation 
 
**r_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-1.67E-01, max=5.66E+03): flux from the exponential fit 
 
**r_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=2.26E-01, max=4.86E+00): flux uncertainty from the exponential fit 
 
**r_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**r_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**r_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**r_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**r_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**r_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**r_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**r_modelfit_CModel_initial_apCorr** (type=double, min=9.91E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**r_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-1.43E-01, max=4.78E+03): flux from the initial fit region, with no extrapolation 
 
**r_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-1.66E-01, max=5.67E+03): flux from the initial fit 
 
**r_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=2.26E-01, max=3.49E+00): flux uncertainty from the initial fit 
 
**r_modelfit_CModel_instFlux** (unit=count, type=double, min=-1.67E-01, max=5.66E+03): flux from the final cmodel fit 
 
**r_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-1.44E-01, max=4.77E+03): flux within the fit region, with no extrapolation 
 
**r_modelfit_CModel_instFluxErr** (unit=count, type=double, min=2.26E-01, max=5.96E+00): flux uncertainty from the final cmodel fit 
 
**r_modelfit_CModel_objective** (type=double, min=0.00E+00, max=1.54E+01): -ln(likelihood) (chi^2) in cmodel fit 
 
**u_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**u_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**u_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**u_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**u_base_InputCount_value** (type=int, min=2.40E+01, max=3.00E+01): Number of images contributing at center, not including anyclipping 
 
**u_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**u_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**u_base_LocalBackground_instFlux** (unit=count, type=double, min=-6.38E-03, max=2.77E-02): background in annulus around source 
 
**u_base_LocalBackground_instFluxErr** (unit=count, type=double, min=7.55E-03, max=9.07E-02): 1-sigma instFlux uncertainty 
 
**u_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**u_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**u_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**u_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**u_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**u_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**u_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**u_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**u_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**u_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**u_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**u_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**u_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**u_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**u_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**u_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=0): Source center is close to REJECTED pixels 
 
**u_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**u_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**u_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**u_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**u_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**u_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**u_base_PsfFlux_apCorr** (type=double, min=9.88E-01, max=9.92E-01): aperture correction applied to base_PsfFlux 
 
**u_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**u_base_PsfFlux_area** (unit=pixel, type=double, min=6.00E+01, max=6.84E+01): effective area of PSF 
 
**u_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**u_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**u_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**u_base_PsfFlux_instFlux** (unit=count, type=double, min=-1.38E+00, max=1.33E+04): instFlux derived from linear least-squares fit of PSF model 
 
**u_base_PsfFlux_instFluxErr** (unit=count, type=double, min=5.89E-01, max=6.15E+00): 1-sigma instFlux uncertainty 
 
**u_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**u_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**u_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**u_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**u_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**u_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**u_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**u_base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.61E-03, max=1.15E+04): 1-sigma uncertainty on x position 
 
**u_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**u_base_SdssCentroid_yErr** (unit=pixel, type=double, min=1.46E-03, max=7.18E+03): 1-sigma uncertainty on y position 
 
**u_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**u_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**u_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**u_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**u_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**u_base_SdssShape_instFlux** (unit=count, type=double, min=5.45E-01, max=1.22E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-2.01E+03, max=-9.06E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**u_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-4.05E+03, max=-9.05E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**u_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-1.39E+03, max=1.18E+03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**u_base_SdssShape_instFluxErr** (unit=count, type=double, min=1.40E-01, max=9.74E+00): 1-sigma instFlux uncertainty 
 
**u_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=4.21E+00, max=4.76E+00): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-5.16E-02, max=-1.28E-02): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.72E+00, max=4.21E+00): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=7.45E+03): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=6.87E-03, max=1.11E+03): Standard deviation of xx moment 
 
**u_base_SdssShape_xy** (unit=pixel^2, type=double, min=-1.06E+03, max=1.30E+03): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=6.25E-03, max=2.76E+03): Standard deviation of xy moment 
 
**u_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_yy** (unit=pixel^2, type=double, min=6.71E-03, max=6.78E+03): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=4.71E-03, max=9.48E+02): Standard deviation of yy moment 
 
**u_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**u_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**u_base_Variance_value** (type=double, min=5.46E-03, max=7.57E-03): Variance at object position 
 
**u_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**u_modelfit_CModel_apCorr** (type=double, min=9.87E-01, max=9.90E-01): aperture correction applied to modelfit_CModel 
 
**u_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**u_modelfit_CModel_dev_apCorr** (type=double, min=9.86E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**u_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-1.80E+00, max=1.19E+04): flux from the de Vaucouleur fit region, with no extrapolation 
 
**u_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-2.37E+00, max=1.36E+04): flux from the de Vaucouleur fit 
 
**u_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=5.95E-01, max=1.88E+01): flux uncertainty from the de Vaucouleur fit 
 
**u_modelfit_CModel_exp_apCorr** (type=double, min=9.87E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**u_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-1.87E+00, max=1.19E+04): flux from the exponential fit region, with no extrapolation 
 
**u_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-2.63E+00, max=1.36E+04): flux from the exponential fit 
 
**u_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=5.95E-01, max=1.17E+01): flux uncertainty from the exponential fit 
 
**u_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**u_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**u_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**u_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**u_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**u_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**u_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**u_modelfit_CModel_initial_apCorr** (type=double, min=9.88E-01, max=9.91E-01): aperture correction applied to modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**u_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-2.04E+00, max=1.19E+04): flux from the initial fit region, with no extrapolation 
 
**u_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-2.29E+00, max=1.35E+04): flux from the initial fit 
 
**u_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=5.96E-01, max=8.02E+00): flux uncertainty from the initial fit 
 
**u_modelfit_CModel_instFlux** (unit=count, type=double, min=-2.63E+00, max=1.36E+04): flux from the final cmodel fit 
 
**u_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-1.87E+00, max=1.19E+04): flux within the fit region, with no extrapolation 
 
**u_modelfit_CModel_instFluxErr** (unit=count, type=double, min=5.95E-01, max=1.43E+01): flux uncertainty from the final cmodel fit 
 
**u_modelfit_CModel_objective** (type=double, min=0.00E+00, max=1.10E+03): -ln(likelihood) (chi^2) in cmodel fit 
 
**y_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**y_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**y_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**y_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**y_base_InputCount_value** (type=int, min=5.50E+01, max=6.90E+01): Number of images contributing at center, not including anyclipping 
 
**y_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**y_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**y_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.11E-02, max=1.17E-01): background in annulus around source 
 
**y_base_LocalBackground_instFluxErr** (unit=count, type=double, min=8.68E-02, max=2.96E-01): 1-sigma instFlux uncertainty 
 
**y_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**y_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**y_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**y_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**y_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**y_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=1): Source center is close to CLIPPED pixels 
 
**y_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**y_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**y_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**y_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**y_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**y_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**y_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**y_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**y_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**y_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**y_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**y_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**y_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**y_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**y_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**y_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**y_base_PsfFlux_apCorr** (type=double, min=9.92E-01, max=9.94E-01): aperture correction applied to base_PsfFlux 
 
**y_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**y_base_PsfFlux_area** (unit=pixel, type=double, min=8.55E+01, max=9.03E+01): effective area of PSF 
 
**y_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**y_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**y_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**y_base_PsfFlux_instFlux** (unit=count, type=double, min=-5.55E+00, max=4.16E+04): instFlux derived from linear least-squares fit of PSF model 
 
**y_base_PsfFlux_instFluxErr** (unit=count, type=double, min=2.50E+00, max=9.25E+00): 1-sigma instFlux uncertainty 
 
**y_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**y_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**y_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**y_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**y_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**y_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**y_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**y_base_SdssCentroid_xErr** (unit=pixel, type=double, min=6.60E-04, max=5.59E+03): 1-sigma uncertainty on x position 
 
**y_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**y_base_SdssCentroid_yErr** (unit=pixel, type=double, min=6.69E-04, max=4.77E+03): 1-sigma uncertainty on y position 
 
**y_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**y_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**y_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**y_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**y_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**y_base_SdssShape_instFlux** (unit=count, type=double, min=1.92E+00, max=3.95E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-6.06E+03, max=-3.83E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**y_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-2.95E+05, max=-7.45E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**y_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-1.39E+04, max=5.26E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**y_base_SdssShape_instFluxErr** (unit=count, type=double, min=8.43E-01, max=3.02E+01): 1-sigma instFlux uncertainty 
 
**y_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=6.07E+00, max=6.39E+00): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-9.00E-03, max=2.68E-03): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=6.06E+00, max=6.37E+00): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=2.13E+05): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=3.39E-03, max=3.53E+03): Standard deviation of xx moment 
 
**y_base_SdssShape_xy** (unit=pixel^2, type=double, min=-1.20E+04, max=2.71E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=3.38E-03, max=1.96E+04): Standard deviation of xy moment 
 
**y_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_yy** (unit=pixel^2, type=double, min=1.05E-02, max=2.01E+05): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=2.39E-03, max=9.39E+02): Standard deviation of yy moment 
 
**y_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**y_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**y_base_Variance_value** (type=double, min=7.26E-02, max=9.22E-02): Variance at object position 
 
**y_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**y_modelfit_CModel_apCorr** (type=double, min=9.88E-01, max=9.91E-01): aperture correction applied to modelfit_CModel 
 
**y_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**y_modelfit_CModel_dev_apCorr** (type=double, min=9.88E-01, max=9.91E-01): aperture correction applied to modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**y_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-6.36E+00, max=3.52E+04): flux from the de Vaucouleur fit region, with no extrapolation 
 
**y_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-8.21E+00, max=4.23E+04): flux from the de Vaucouleur fit 
 
**y_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=2.57E+00, max=6.88E+01): flux uncertainty from the de Vaucouleur fit 
 
**y_modelfit_CModel_exp_apCorr** (type=double, min=9.89E-01, max=9.91E-01): aperture correction applied to modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**y_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-6.38E+00, max=3.52E+04): flux from the exponential fit region, with no extrapolation 
 
**y_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-6.95E+00, max=4.23E+04): flux from the exponential fit 
 
**y_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=2.57E+00, max=4.18E+01): flux uncertainty from the exponential fit 
 
**y_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**y_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**y_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**y_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**y_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**y_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**y_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**y_modelfit_CModel_initial_apCorr** (type=double, min=9.90E-01, max=9.92E-01): aperture correction applied to modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**y_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-6.38E+00, max=3.51E+04): flux from the initial fit region, with no extrapolation 
 
**y_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-6.93E+00, max=4.22E+04): flux from the initial fit 
 
**y_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=2.57E+00, max=2.92E+01): flux uncertainty from the initial fit 
 
**y_modelfit_CModel_instFlux** (unit=count, type=double, min=-8.21E+00, max=4.23E+04): flux from the final cmodel fit 
 
**y_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-6.36E+00, max=3.52E+04): flux within the fit region, with no extrapolation 
 
**y_modelfit_CModel_instFluxErr** (unit=count, type=double, min=2.57E+00, max=4.76E+01): flux uncertainty from the final cmodel fit 
 
**y_modelfit_CModel_objective** (type=double, min=0.00E+00, max=4.18E+03): -ln(likelihood) (chi^2) in cmodel fit 
 
**z_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**z_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**z_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**z_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**z_base_InputCount_value** (type=int, min=5.00E+01, max=6.00E+01): Number of images contributing at center, not including anyclipping 
 
**z_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**z_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**z_base_LocalBackground_instFlux** (unit=count, type=double, min=-7.54E-03, max=2.28E-01): background in annulus around source 
 
**z_base_LocalBackground_instFluxErr** (unit=count, type=double, min=2.47E-06, max=2.16E-01): 1-sigma instFlux uncertainty 
 
**z_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**z_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**z_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**z_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**z_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**z_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**z_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**z_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=0): Cosmic ray in the Source center 
 
**z_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**z_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**z_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**z_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**z_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**z_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**z_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**z_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**z_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**z_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**z_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**z_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**z_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**z_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**z_base_PsfFlux_apCorr** (type=double, min=9.90E-01, max=9.92E-01): aperture correction applied to base_PsfFlux 
 
**z_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**z_base_PsfFlux_area** (unit=pixel, type=double, min=6.39E+01, max=6.91E+01): effective area of PSF 
 
**z_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**z_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**z_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**z_base_PsfFlux_instFlux** (unit=count, type=double, min=-3.47E+00, max=4.00E+04): instFlux derived from linear least-squares fit of PSF model 
 
**z_base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.22E+00, max=6.91E+00): 1-sigma instFlux uncertainty 
 
**z_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**z_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**z_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**z_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**z_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**z_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**z_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**z_base_SdssCentroid_xErr** (unit=pixel, type=double, min=4.37E-04, max=2.52E+03): 1-sigma uncertainty on x position 
 
**z_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**z_base_SdssCentroid_yErr** (unit=pixel, type=double, min=4.42E-04, max=3.66E+03): 1-sigma uncertainty on y position 
 
**z_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**z_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**z_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**z_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**z_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**z_base_SdssShape_instFlux** (unit=count, type=double, min=9.59E-01, max=3.70E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-1.42E+04, max=-9.52E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**z_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-2.16E+04, max=-9.57E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**z_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-8.85E+03, max=3.85E+03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**z_base_SdssShape_instFluxErr** (unit=count, type=double, min=2.79E-01, max=1.09E+01): 1-sigma instFlux uncertainty 
 
**z_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=4.05E+00, max=4.38E+00): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-2.79E-03, max=1.13E-02): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=4.04E+00, max=4.36E+00): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xx** (unit=pixel^2, type=double, min=1.26E-03, max=3.38E+05): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=1.95E-03, max=2.91E+03): Standard deviation of xx moment 
 
**z_base_SdssShape_xy** (unit=pixel^2, type=double, min=-9.86E+03, max=7.18E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=1.93E-03, max=3.95E+03): Standard deviation of xy moment 
 
**z_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=3.08E+05): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.37E-03, max=1.81E+03): Standard deviation of yy moment 
 
**z_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**z_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**z_base_Variance_value** (type=double, min=2.29E-02, max=2.82E-02): Variance at object position 
 
**z_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**z_modelfit_CModel_apCorr** (type=double, min=9.87E-01, max=9.89E-01): aperture correction applied to modelfit_CModel 
 
**z_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**z_modelfit_CModel_dev_apCorr** (type=double, min=9.87E-01, max=9.88E-01): aperture correction applied to modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**z_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-1.70E+00, max=3.51E+04): flux from the de Vaucouleur fit region, with no extrapolation 
 
**z_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-1.90E+00, max=4.10E+04): flux from the de Vaucouleur fit 
 
**z_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=1.24E+00, max=3.91E+01): flux uncertainty from the de Vaucouleur fit 
 
**z_modelfit_CModel_exp_apCorr** (type=double, min=9.87E-01, max=9.89E-01): aperture correction applied to modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**z_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-1.77E+00, max=3.50E+04): flux from the exponential fit region, with no extrapolation 
 
**z_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-1.83E+00, max=4.10E+04): flux from the exponential fit 
 
**z_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.24E+00, max=2.35E+01): flux uncertainty from the exponential fit 
 
**z_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**z_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**z_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**z_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**z_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**z_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**z_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**z_modelfit_CModel_initial_apCorr** (type=double, min=9.87E-01, max=9.89E-01): aperture correction applied to modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**z_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=1): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-2.37E+00, max=3.49E+04): flux from the initial fit region, with no extrapolation 
 
**z_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-2.48E+00, max=4.07E+04): flux from the initial fit 
 
**z_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.24E+00, max=1.66E+01): flux uncertainty from the initial fit 
 
**z_modelfit_CModel_instFlux** (unit=count, type=double, min=-1.83E+00, max=4.10E+04): flux from the final cmodel fit 
 
**z_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-1.70E+00, max=3.50E+04): flux within the fit region, with no extrapolation 
 
**z_modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.24E+00, max=3.04E+01): flux uncertainty from the final cmodel fit 
 
**z_modelfit_CModel_objective** (type=double, min=0.00E+00, max=8.67E+02): -ln(likelihood) (chi^2) in cmodel fit 
 
