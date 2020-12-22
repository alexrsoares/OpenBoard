/*
 * Copyright (C) 2015-2020 Département de l'Instruction Publique (DIP-SEM)
 *
 * This file is part of OpenBoard.
 *
 * OpenBoard is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * OpenBoard is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenBoard. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UBEXPORTDOCUMENTCLEANER_H
#define UBEXPORTDOCUMENTCLEANER_H

#include <QString>

class UBDocumentProxy;

class UBExportDocumentCleaner
{
public:
    UBExportDocumentCleaner();
    virtual ~UBExportDocumentCleaner();

    static bool StripeDocument(UBDocumentProxy* pDocumentProxy, const QString &filename);
private:
    //! Return 'true' is success, 'false' otherwise. Note the final archive is
    //! always available, but in case of failure, it is not stripped.
    static bool StripePdf(QString const &file, QList<int> const &pagesToKeep);
};

#endif // UBEXPORTDOCUMENTCLEANER_H
