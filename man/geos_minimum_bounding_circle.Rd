% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/geos-binary-geometry.R, R/geos-unary-geometry.R
\name{geos_largest_empty_circle_spec}
\alias{geos_largest_empty_circle_spec}
\alias{geos_largest_empty_crc}
\alias{geos_minimum_bounding_circle}
\alias{geos_minimum_bounding_crc}
\alias{geos_maximum_inscribed_circle_spec}
\alias{geos_maximum_inscribed_crc}
\title{Circular approximations}
\usage{
geos_largest_empty_circle_spec(geom, boundary, tolerance)

geos_largest_empty_crc(geom, boundary, tolerance)

geos_minimum_bounding_circle(geom)

geos_minimum_bounding_crc(geom)

geos_maximum_inscribed_circle_spec(geom, tolerance)

geos_maximum_inscribed_crc(geom, tolerance)
}
\arguments{
\item{geom}{A \link[=as_geos_geometry]{GEOS geometry vector}}

\item{boundary}{An outer boundary for the largest empty circle
algorithm.}

\item{tolerance}{Threshold for considering circles to be touching
a boundary.}
}
\description{
Circular approximations
}
